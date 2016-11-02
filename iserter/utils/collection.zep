namespace Iserter\Utils;

/**
 * Iserter\Utils\Collection
 *
 * @author Ilyas Serter <info@ilyasserter.com>
 * @date 01.11.2016
 */
class Collection implements \ArrayAccess, \Iterator, \JsonSerializable
{

    protected _count;
    protected _data = [];
    protected _pointer = 0;

    public function __construct(array data = []) {

        if(count(data) > 0) {
                var item;
                for item in data {
                    this->push(item);
                }
        }

    }

    /*
    |--------------------------------------------------------------------------
    | Public methods
    |--------------------------------------------------------------------------
    |
    */
    public function count() -> int
    {
        return this->_count;
    }


    public function prepend(item) -> void
    {
        array_unshift(this->_data,item);
        let this->_count++;
    }

    public function push(item) -> void
    {
        array_push(this->_data,item);
        let this->_count++;
    }

    public function pull()
    {
        let this->_count--;
        return array_shift(this->_data);
    }

    public function pop()
    {
        let this->_count--;
        return array_pop(this->_data);
    }

    public function toJson() -> string
    {
        return json_encode(this->_data);
    }

    /*
    |--------------------------------------------------------------------------
    | JsonSerializable
    |--------------------------------------------------------------------------
    |
    */

    public function jsonSerialize() -> array
    {
        return this->_data;
    }

    /*
    |--------------------------------------------------------------------------
    | ArrayAccess Interface
    |--------------------------------------------------------------------------
    | The following methods are implemented to support ArrayAccess
    */
    public function offsetSet(offset, value) -> void
    {
        let this->_data[offset] = value;
    }

    public function offsetExists(offset) -> boolean
    {
       return isset(this->_data[offset]);
    }

    public function offsetUnset(offset) -> void
    {
        unset(this->_data[offset]);
    }

    public function offsetGet(offset)
    {
        return isset(this->_data[offset]) ? this->_data[offset] : null;
    }

    /*
    |--------------------------------------------------------------------------
    | Iterator Interface
    |--------------------------------------------------------------------------
    | The following methods are implemented to support iterations
    */
    public function rewind() -> void
    {
        let this->_pointer = 0;
    }

    public function current()
     {
        return this->_data[this->_pointer];
    }

    public function key() -> int | null
    {
        return this->_pointer >= this->_count ? null : this->_pointer;
    }

    public function next()  -> void
    {
        let this->_pointer++;
    }

    public function valid() -> boolean
    {
        return this->_pointer < this->_count;
    }


}