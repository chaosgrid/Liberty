#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_492250);

PROC_DECLARE(0x492250, internal_492250, public_492250);
extern "C" NAKED register_t __cdecl internal_492250()
{
    __asm
    {
        mov eax, ecx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+0x10], ecx
        ret 
        UNREACHABLE_TRAP(0x492250)
    }
}
