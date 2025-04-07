#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632aed0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632aef3 _public_632aef3
#define public_632af03 _public_632af03
#define public_632af0c _public_632af0c
#define public_632af11 _public_632af11

PROC_DECLARE(0x632aed0, internal_632aed0, public_632aed0);
extern "C" NAKED register_t __cdecl internal_632aed0()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        lea edi, ds:[esi+8]
        push edi
        call dword ptr ds : [public_63990c8]
        test eax, eax
        jne public_632af11
        test esi, esi
        je public_632af0c
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_632aef3
        push eax
        call dword ptr ds : [public_639935c]
        public_632aef3 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_632af03
        push eax
        call public_6391d5a
        add esp, 4
        public_632af03 : nop
        push esi
        call public_6391d5a
        add esp, 4
        public_632af0c : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_632af11 : nop
        mov eax, dword ptr ds : [edi]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x632aed0)
    }
}

#undef public_632aef3
#undef public_632af03
#undef public_632af0c
#undef public_632af11
