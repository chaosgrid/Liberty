#include "FLServer-PCH.h"

PROC_DECLARE(0x416290, internal_416290, public_416290);
extern "C" NAKED register_t __cdecl internal_416290()
{
    __asm
    {
        mov eax, offset public_41e758
        ret 
        UNREACHABLE_TRAP(0x416290)
    }
}
