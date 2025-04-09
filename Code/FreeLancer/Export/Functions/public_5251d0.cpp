#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539bc0);

PROC_DECLARE(0x5251d0, internal_5251d0, public_5251d0);
extern "C" NAKED register_t __cdecl internal_5251d0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        push 0x4001
        mov esi, ecx
        call public_539bc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ds : [edi+8]
        pop edi
        mov dword ptr ds : [esi+0xB4], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5251d0)
    }
}
