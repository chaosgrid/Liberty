#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6388ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6389cf0);
CLANG_FORWARD_PROC_SYMBOL(public_638a270);

#define public_6388ad5 _public_6388ad5

PROC_DECLARE(0x6388ab0, internal_6388ab0, public_6388ab0);
extern "C" NAKED register_t __cdecl internal_6388ab0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push esi
        push edi
        call public_6389cf0
        mov eax, dword ptr ds : [esi+0x38]
        add esp, 8
        test eax, eax
        je public_6388ad5
        push esi
        push edi
        call public_638a270
        add esp, 8
        public_6388ad5 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6388ab0)
    }
}

#undef public_6388ad5
