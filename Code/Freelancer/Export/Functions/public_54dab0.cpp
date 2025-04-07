#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54dab0);

PROC_DECLARE(0x54dab0, internal_54dab0, public_54dab0);
extern "C" NAKED register_t __cdecl internal_54dab0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x30
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x54dab0)
    }
}
