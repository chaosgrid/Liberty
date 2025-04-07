#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d1b700 _public_6d1b700
#define public_6d1b716 _public_6d1b716

PROC_DECLARE(0x6d1b6f0, internal_6d1b6f0, public_6d1b6f0);
extern "C" NAKED register_t __cdecl internal_6d1b6f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi], 0
        je public_6d1b716
        push edi
        lea esp, ss:[esp]
        public_6d1b700 : nop
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [eax]
        mov ecx, eax
        push ecx
        call public_6d5ffb0
        add esp, 4
        test edi, edi
        mov dword ptr ds : [esi], edi
        jne public_6d1b700
        pop edi
        public_6d1b716 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d1b6f0)
    }
}

#undef public_6d1b700
#undef public_6d1b716
