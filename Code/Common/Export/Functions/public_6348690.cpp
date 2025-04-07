#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6348690);
CLANG_FORWARD_PROC_SYMBOL(public_6356920);

#define public_63486a8 _public_63486a8

PROC_DECLARE(0x6348690, internal_6348690, public_6348690);
extern "C" NAKED register_t __cdecl internal_6348690()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_63486a8
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_63486a8 : nop
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_6356920
        add esp, 4
        mov dword ptr ds : [esi], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6348690)
    }
}

#undef public_63486a8
