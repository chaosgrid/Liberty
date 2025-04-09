#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5835f0);

#define public_583634 _public_583634
#define public_583643 _public_583643
#define public_583651 _public_583651
#define public_583665 _public_583665
#define public_583674 _public_583674
#define public_58367b _public_58367b

PROC_DECLARE(0x5835f0, internal_5835f0, public_5835f0);
extern "C" NAKED register_t __cdecl internal_5835f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov dword ptr ds : [ebx], 0
        push eax
        mov dword ptr ss : [ebp], 0
        call dword ptr ds : [public_5c603c]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_58367b
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        mov edi, eax
        test edi, edi
        jne public_583634
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        public_583634 : nop
        cmp edi, 4
        je public_583643
        cmp edi, 0xD
        je public_583643
        cmp edi, 0xA
        jne public_583651
        public_583643 : nop
        mov edi, 4
        mov eax, edi
        pop edi
        mov dword ptr ds : [ebx], esi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_583651 : nop
        cmp edi, 5
        je public_583665
        cmp edi, 6
        je public_583665
        cmp edi, 7
        je public_583665
        cmp edi, 8
        jne public_583674
        public_583665 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        cmp eax, 0xE
        jne public_583674
        mov dword ptr ss : [ebp], esi
        public_583674 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_58367b : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5835f0)
    }
}

#undef public_583634
#undef public_583643
#undef public_583651
#undef public_583665
#undef public_583674
#undef public_58367b
