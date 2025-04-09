#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539bc0);

PROC_DECLARE(0x5304b0, internal_5304b0, public_5304b0);
extern "C" NAKED register_t __cdecl internal_5304b0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        push 1
        mov esi, ecx
        call public_539bc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x4C]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5304b0)
    }
}
