#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246188);

PROC_DECLARE(0x6209a70, internal_6209a70, public_6209a70);
extern "C" NAKED register_t __cdecl internal_6209a70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [public_624babc]
        call public_6246188
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [public_624babc]
        mov edi, eax
        call public_6246188
        fld dword ptr ds : [esi+8]
        shl eax, 8
        fmul dword ptr ds : [public_624babc]
        or edi, eax
        shl edi, 8
        call public_6246188
        mov edx, dword ptr ss : [esp+0x10]
        or edi, eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        xor eax, eax
        mov dword ptr ds : [ecx+edx*8+4], edi
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6209a70)
    }
}
