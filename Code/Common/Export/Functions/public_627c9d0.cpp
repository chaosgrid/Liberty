#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627c9e0 _public_627c9e0
#define public_627c9f1 _public_627c9f1

PROC_DECLARE(0x627c9d0, internal_627c9d0, public_627c9d0);
extern "C" NAKED register_t __cdecl internal_627c9d0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x10]
        test esi, esi
        je public_627c9f1
        nop 
        lea esp, ss:[esp]
        public_627c9e0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_6391d5a
        add esp, 4
        test esi, esi
        jne public_627c9e0
        public_627c9f1 : nop
        mov dword ptr ds : [edi+0x10], 0
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x627c9d0)
    }
}

#undef public_627c9e0
#undef public_627c9f1
