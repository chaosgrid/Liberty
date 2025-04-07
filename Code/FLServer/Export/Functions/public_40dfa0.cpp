#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419044);
CLANG_FORWARD_PROC_SYMBOL(public_41904a);

#define public_40dfc5 _public_40dfc5

PROC_DECLARE(0x40dfa0, internal_40dfa0, public_40dfa0);
extern "C" NAKED register_t __cdecl internal_40dfa0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41904a
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0xB8]
        test eax, eax
        je public_40dfc5
        cmp dword ptr ds : [eax+0x58], esi
        jne public_40dfc5
        mov ecx, eax
        pop esi
        jmp public_419044
        public_40dfc5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40dfa0)
    }
}

#undef public_40dfc5
