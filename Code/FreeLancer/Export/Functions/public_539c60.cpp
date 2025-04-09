#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539c60);

PROC_DECLARE(0x539c60, internal_539c60, public_539c60);
extern "C" NAKED register_t __cdecl internal_539c60()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+0x20]
        call dword ptr ds : [public_5c6a14]
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x1B8]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x539c60)
    }
}
