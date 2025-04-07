#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef1af2 _public_6ef1af2
#define public_6ef1af7 _public_6ef1af7
#define public_6ef1aff _public_6ef1aff
#define public_6ef1b04 _public_6ef1b04
#define public_6ef1b10 _public_6ef1b10
#define public_6ef1b30 _public_6ef1b30
#define public_6ef1b44 _public_6ef1b44
#define public_6ef1ba9 _public_6ef1ba9
#define public_6ef1bc4 _public_6ef1bc4
#define public_6ef1c03 _public_6ef1c03
#define public_6ef1c20 _public_6ef1c20
#define public_6ef1c35 _public_6ef1c35
#define public_6ef1c44 _public_6ef1c44
#define public_6ef1c51 _public_6ef1c51
#define public_6ef1c5c _public_6ef1c5c

PROC_DECLARE(0x6ef1ac0, internal_6ef1ac0, public_6ef1ac0);
extern "C" NAKED register_t __cdecl internal_6ef1ac0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        sub esp, 8
        push ebx
        push esi
        lea esi, ds:[ecx+4]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        push edi
        mov edi, eax
        jae public_6ef1bc4
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6ef1af2
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6ef1af7
        public_6ef1af2 : nop
        mov ecx, 1
        public_6ef1af7 : nop
        test edx, edx
        jne public_6ef1aff
        xor eax, eax
        jmp public_6ef1b04
        public_6ef1aff : nop
        sub eax, edx
        sar eax, 2
        public_6ef1b04 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6ef1b10
        xor eax, eax
        public_6ef1b10 : nop
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_6ef1b44
        mov edi, edi
        public_6ef1b30 : nop
        push ebp
        push ebx
        call public_6eb6740
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_6ef1b30
        public_6ef1b44 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        pop ebp
        jne public_6ef1ba9
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 8
        public_6ef1ba9 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 8
        public_6ef1bc4 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6ef1c20
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x18]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6ef1c5c
        public_6ef1c03 : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6ef1c03
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 8
        public_6ef1c20 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6ef1c44
        public_6ef1c35 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6ef1c35
        public_6ef1c44 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6ef1c5c
        mov edx, dword ptr ss : [esp+0x18]
        public_6ef1c51 : nop
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edi
        add eax, 4
        cmp eax, ecx
        jne public_6ef1c51
        public_6ef1c5c : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ef1ac0)
    }
}

#undef public_6ef1af2
#undef public_6ef1af7
#undef public_6ef1aff
#undef public_6ef1b04
#undef public_6ef1b10
#undef public_6ef1b30
#undef public_6ef1b44
#undef public_6ef1ba9
#undef public_6ef1bc4
#undef public_6ef1c03
#undef public_6ef1c20
#undef public_6ef1c35
#undef public_6ef1c44
#undef public_6ef1c51
#undef public_6ef1c5c
