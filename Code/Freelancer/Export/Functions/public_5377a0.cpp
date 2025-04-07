#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5377a0);

PROC_DECLARE(0x5377a0, internal_5377a0, public_5377a0);
extern "C" NAKED register_t __cdecl internal_5377a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x120
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x5377a0)
    }
}
