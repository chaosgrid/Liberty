#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f37d30);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f37d45 _public_6f37d45
#define public_6f37d53 _public_6f37d53
#define public_6f37d72 _public_6f37d72
#define public_6f37d7d _public_6f37d7d
#define public_6f37d7f _public_6f37d7f
#define public_6f37daa _public_6f37daa
#define public_6f37dae _public_6f37dae
#define public_6f37db6 _public_6f37db6
#define public_6f37dc1 _public_6f37dc1
#define public_6f37dc9 _public_6f37dc9
#define public_6f37dd4 _public_6f37dd4
#define public_6f37de2 _public_6f37de2
#define public_6f37dee _public_6f37dee
#define public_6f37e04 _public_6f37e04
#define public_6f37e48 _public_6f37e48
#define public_6f37e70 _public_6f37e70
#define public_6f37e95 _public_6f37e95

PROC_DECLARE(0x6f37d30, internal_6f37d30, public_6f37d30);
extern "C" NAKED register_t __cdecl internal_6f37d30()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        cmp eax, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        je public_6f37d53
        public_6f37d45 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        add eax, 4
        add edi, 4
        cmp eax, ecx
        jne public_6f37d45
        public_6f37d53 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push edi
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], edi
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        cmp eax, ecx
        je public_6f37d7d
        public_6f37d72 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f37daa
        add eax, 0x14
        cmp eax, ecx
        jne public_6f37d72
        public_6f37d7d : nop
        mov edi, ecx
        public_6f37d7f : nop
        push 0
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp edi, eax
        je public_6f37e95
        add edi, 4
        cmp esi, edi
        je public_6f37e95
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f37dae
        xor ebx, ebx
        jmp public_6f37db6
        public_6f37daa : nop
        mov edi, eax
        jmp public_6f37d7f
        public_6f37dae : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 2
        public_6f37db6 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f37dc1
        xor edx, edx
        jmp public_6f37dc9
        public_6f37dc1 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6f37dc9 : nop
        cmp ebx, edx
        ja public_6f37e04
        mov edx, dword ptr ds : [edi+8]
        cmp eax, edx
        je public_6f37de2
        public_6f37dd4 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f37dd4
        public_6f37de2 : nop
        mov edx, dword ptr ds : [esi+8]
        push edx
        push ecx
        mov ecx, esi
        call public_6ea1490
        public_6f37dee : nop
        mov ecx, edi
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebx
        ret 8
        public_6f37e04 : nop
        mov ecx, edi
        call public_6fa3db0
        mov ecx, esi
        mov ebx, eax
        call public_6eb6b30
        cmp ebx, eax
        ja public_6f37e48
        mov ebx, dword ptr ds : [edi+4]
        mov ecx, esi
        call public_6fa3db0
        mov ecx, dword ptr ds : [edi+4]
        lea ebx, ds:[ebx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push ebx
        push ecx
        call public_6f6a640
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push edx
        push eax
        push ebx
        mov ecx, esi
        call public_6eed270
        jmp public_6f37dee
        public_6f37e48 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_6ea1490
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6fa3db0
        test eax, eax
        jge public_6f37e70
        xor eax, eax
        public_6f37e70 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6f37e95 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f37d30)
    }
}

#undef public_6f37d45
#undef public_6f37d53
#undef public_6f37d72
#undef public_6f37d7d
#undef public_6f37d7f
#undef public_6f37daa
#undef public_6f37dae
#undef public_6f37db6
#undef public_6f37dc1
#undef public_6f37dc9
#undef public_6f37dd4
#undef public_6f37de2
#undef public_6f37dee
#undef public_6f37e04
#undef public_6f37e48
#undef public_6f37e70
#undef public_6f37e95
