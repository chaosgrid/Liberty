#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4688b0);
CLANG_FORWARD_PROC_SYMBOL(public_469b30);
CLANG_FORWARD_PROC_SYMBOL(public_469d20);
CLANG_FORWARD_PROC_SYMBOL(public_469e60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_469b46 _public_469b46
#define public_469b58 _public_469b58
#define public_469b6d _public_469b6d
#define public_469b80 _public_469b80
#define public_469b92 _public_469b92
#define public_469ba7 _public_469ba7
#define public_469bc7 _public_469bc7
#define public_469bf3 _public_469bf3
#define public_469c13 _public_469c13
#define public_469c33 _public_469c33
#define public_469c53 _public_469c53

PROC_DECLARE(0x469b30, internal_469b30, public_469b30);
extern "C" NAKED register_t __cdecl internal_469b30()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [public_66da84]
        xor ebx, ebx
        cmp edi, ebx
        je public_469b6d
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebx
        je public_469b58
        public_469b46 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_469b46
        public_469b58 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        mov dword ptr ds : [public_66da84], ebx
        public_469b6d : nop
        mov edi, dword ptr ds : [public_66da80]
        cmp edi, ebx
        je public_469ba7
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebx
        je public_469b92
        mov edi, edi
        public_469b80 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_469b80
        public_469b92 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        mov dword ptr ds : [public_66da80], ebx
        public_469ba7 : nop
        mov esi, dword ptr ds : [public_66da7c]
        cmp esi, ebx
        je public_469bc7
        mov ecx, esi
        call public_469e60
        push esi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [public_66da7c], ebx
        public_469bc7 : nop
        mov ecx, dword ptr ds : [public_66da60]
        cmp ecx, ebx
        je public_469bf3
        mov esi, ecx
        call public_4688b0
        push esi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [public_66da60], ebx
        mov dword ptr ds : [public_66da64], ebx
        mov dword ptr ds : [public_66da68], ebx
        public_469bf3 : nop
        mov esi, dword ptr ds : [public_66da70]
        cmp esi, ebx
        je public_469c13
        mov ecx, esi
        call public_469d20
        push esi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [public_66da70], ebx
        public_469c13 : nop
        mov esi, dword ptr ds : [public_66da74]
        cmp esi, ebx
        je public_469c33
        mov ecx, esi
        call public_469d20
        push esi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [public_66da74], ebx
        public_469c33 : nop
        mov esi, dword ptr ds : [public_66da78]
        cmp esi, ebx
        je public_469c53
        mov ecx, esi
        call public_469d20
        push esi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [public_66da78], ebx
        public_469c53 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x469b30)
    }
}

#undef public_469b46
#undef public_469b58
#undef public_469b6d
#undef public_469b80
#undef public_469b92
#undef public_469ba7
#undef public_469bc7
#undef public_469bf3
#undef public_469c13
#undef public_469c33
#undef public_469c53
