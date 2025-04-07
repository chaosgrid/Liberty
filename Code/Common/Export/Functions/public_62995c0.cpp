#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62995c0);

#define public_62995de _public_62995de

PROC_DECLARE(0x62995c0, internal_62995c0, public_62995c0);
extern "C" NAKED register_t __cdecl internal_62995c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0xAC]
        cmp eax, 2
        je public_62995de
        mov dword ptr ds : [esi+0x50], 0
        public_62995de : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62995c0)
    }
}

#undef public_62995de
