#include "FLServer-PCH.h"

PROC_DECLARE(0x417100, internal_417100, public_417100);
extern "C" NAKED register_t __cdecl internal_417100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e840]
        mov dword ptr ds : [public_429dc0], eax
        ret 
        UNREACHABLE_TRAP(0x417100)
    }
}
