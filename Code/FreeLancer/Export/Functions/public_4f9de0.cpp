#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_4f9de0);

#define public_4f9e10 _public_4f9e10
#define public_4f9e40 _public_4f9e40
#define public_4f9e70 _public_4f9e70
#define public_4f9fb6 _public_4f9fb6
#define public_4f9fcb _public_4f9fcb
#define public_4fa018 _public_4fa018
#define public_4fa083 _public_4fa083

PROC_DECLARE(0x4f9de0, internal_4f9de0, public_4f9de0);
extern "C" NAKED register_t __cdecl internal_4f9de0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push 0
        push 0xB
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5d9a04
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_4f9e10 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_4f9e10
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5d9a3c
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_4f9e40 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_4f9e40
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5d99dc
        mov eax, 0x8D
        nop 
        lea esp, ss:[esp]
        public_4f9e70 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_4f9e70
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [public_674f54]
        push 0
        call public_425640
        mov edx, dword ptr ds : [public_5c6de0]
        push eax
        mov eax, dword ptr ds : [edx]
        push 0
        push eax
        call dword ptr ds : [esi+0x108]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 1
        push 0x88
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ds : [public_5c6de0]
        push eax
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [esi+0x7C]
        mov eax, dword ptr ds : [public_674c94]
        test eax, eax
        mov ecx, dword ptr ds : [public_5c6de0]
        mov esi, dword ptr ds : [ecx]
        je public_4f9fb6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        xor eax, eax
        mov dword ptr ds : [public_674c94], eax
        public_4f9fb6 : nop
        test esi, esi
        je public_4f9fcb
        mov dword ptr ds : [public_674c94], esi
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [public_674c94]
        public_4f9fcb : nop
        test eax, eax
        je public_4fa018
        mov edx, dword ptr ds : [public_674c90]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        mov edx, dword ptr ds : [public_674c8c]
        push edx
        mov edx, dword ptr ds : [public_674c84]
        push edx
        mov edx, dword ptr ds : [public_674c80]
        push edx
        mov edx, dword ptr ds : [public_674c88]
        push edx
        push 4
        push eax
        call dword ptr ds : [ecx+0x118]
        mov eax, dword ptr ds : [public_674c94]
        test eax, eax
        je public_4fa018
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_674c94], 0
        public_4fa018 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5d99f4
        mov eax, 0x8D
        public_4fa083 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_4fa083
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4f9de0)
    }
}

#undef public_4f9e10
#undef public_4f9e40
#undef public_4f9e70
#undef public_4f9fb6
#undef public_4f9fcb
#undef public_4fa018
#undef public_4fa083
