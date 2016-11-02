namespace Iserter\Utils;

class Str
{
    protected _str;
    protected _length;

    public function __construct(string str)
    {
        let this->_str = str;
        let this->_length = strlen(str);
    }

    public function contains(string term) -> boolean
    {
        return strstr(this->_str,term) !== false;
    }

    public function length() -> int
    {
        return this->_length;
    }

    public function startsWith(string term) -> boolean
    {
        return substr(this->_str,0,strlen(term)) == term;
    }

    public function endsWith(string term) -> boolean
    {
        return substr(this->_str,strlen(term) * -1) == term;
    }

    public function slice(int offset, int length) -> string
    {
        if offset > this->_length {
            throw new \InvalidArgumentException("Offset cannot be greater than the string length");
        }

        return substr(this->_str,offset,length);
    }


    public function __toString() -> string
    {
        return this->_str;
    }


}