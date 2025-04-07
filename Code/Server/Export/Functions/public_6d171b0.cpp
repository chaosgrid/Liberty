#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d171b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d171c0 _public_6d171c0
#define public_6d171d1 _public_6d171d1

PROC_DECLARE(0x6d171b0, internal_6d171b0, public_6d171b0);
extern "C" NAKED register_t __cdecl internal_6d171b0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x10]
        test esi, esi
        je public_6d171d1
        nop 
        lea esp, ss:[esp]
        public_6d171c0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_6d5ffb0
        add esp, 4
        test esi, esi
        jne public_6d171c0
        public_6d171d1 : nop
        mov dword ptr ds : [edi+0x10], 0
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d171b0)
    }
}

#undef public_6d171c0
#undef public_6d171d1
