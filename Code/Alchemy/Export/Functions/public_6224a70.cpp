#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244120);

PROC_DECLARE(0x6224a70, internal_6224a70, public_6224a70);
extern "C" NAKED register_t __cdecl internal_6224a70()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push edi
        call public_6244120
        mov eax, dword ptr ds : [edi+0xC0]
        pop edi
        mov dword ptr ds : [esi+0xC0], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6224a70)
    }
}
