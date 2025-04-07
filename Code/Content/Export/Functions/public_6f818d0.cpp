#include "Content-PCH.h"

PROC_DECLARE(0x6f818d0, internal_6f818d0, public_6f818d0);
extern "C" NAKED register_t __cdecl internal_6f818d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor edx, edx
        mov dword ptr ds : [eax+0x84], edx
        mov dword ptr ds : [eax+0xBC], edx
        mov dword ptr ds : [ecx+8], edx
        ret 4
        UNREACHABLE_TRAP(0x6f818d0)
    }
}
