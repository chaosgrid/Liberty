#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244120);

PROC_DECLARE(0x62329e0, internal_62329e0, public_62329e0);
extern "C" NAKED register_t __cdecl internal_62329e0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push edi
        call public_6244120
        mov eax, dword ptr ds : [edi+0xF0]
        pop edi
        mov dword ptr ds : [esi+0xF0], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62329e0)
    }
}
