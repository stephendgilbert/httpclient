#include <stdexcept>

namespace http
{
  class Exception : public std::domain_error
  {
  public:
    explicit Exception (const std::string& what)
      : domain_error(what){}
  };
} // namespace http
