#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);

#define public_6cee700 _public_6cee700
#define public_6cee724 _public_6cee724
#define public_6cee726 _public_6cee726
#define public_6cee749 _public_6cee749
#define public_6cee76e _public_6cee76e
#define public_6cee770 _public_6cee770
#define public_6cee7a0 _public_6cee7a0
#define public_6cee7bc _public_6cee7bc
#define public_6cee7be _public_6cee7be
#define public_6cee7c8 _public_6cee7c8
#define public_6cee7ef _public_6cee7ef
#define public_6cee7fe _public_6cee7fe

PROC_DECLARE(0x6cee6e0, internal_6cee6e0, public_6cee6e0);
extern "C" NAKED register_t __cdecl internal_6cee6e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x28
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi+0x28], eax
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        je public_6cee700
        mov ecx, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        call dword ptr ds : [edx+0x78]
        public_6cee700 : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cee7a0
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6cee724
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_6cee724
        mov ecx, eax
        jmp public_6cee726
        public_6cee724 : nop
        xor ecx, ecx
        public_6cee726 : nop
        mov edx, dword ptr ds : [ecx+0xB4]
        test edx, edx
        je public_6cee7a0
        push ebx
        push ebp
        push esi
        lea esi, ds:[eax+8]
        mov eax, dword ptr ds : [public_6d8d71c]
        test eax, eax
        jne public_6cee749
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d71c], eax
        public_6cee749 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        lea ebp, ds:[eax+0x2C]
        je public_6cee76e
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_6cee76e
        mov ebx, eax
        jmp public_6cee770
        public_6cee76e : nop
        xor ebx, ebx
        public_6cee770 : nop
        mov esi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        push eax
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x54]
        push eax
        push ebp
        push ebx
        call dword ptr ds : [public_6d64368]
        add esp, 0x14
        pop esi
        pop ebp
        pop ebx
        public_6cee7a0 : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6cee7c8
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6cee7bc
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cee7be
        public_6cee7bc : nop
        xor eax, eax
        public_6cee7be : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        jne public_6cee7fe
        public_6cee7c8 : nop
        mov edi, dword ptr ds : [edi+0x10]
        test edi, edi
        je public_6cee7ef
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 3
        cmp al, 3
        jne public_6cee7ef
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, edi
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x90]
        pop edi
        add esp, 0x28
        ret 8
        public_6cee7ef : nop
        mov eax, dword ptr ss : [esp+0x30]
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x90]
        public_6cee7fe : nop
        pop edi
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x6cee6e0)
    }
}

#undef public_6cee700
#undef public_6cee724
#undef public_6cee726
#undef public_6cee749
#undef public_6cee76e
#undef public_6cee770
#undef public_6cee7a0
#undef public_6cee7bc
#undef public_6cee7be
#undef public_6cee7c8
#undef public_6cee7ef
#undef public_6cee7fe
