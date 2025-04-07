#include "FLServer-PCH.h"

PROC_DECLARE(0x416800, internal_416800, public_416800);
extern "C" NAKED register_t __cdecl internal_416800()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0xD0]
        UNREACHABLE_TRAP(0x416800)
    }
}
