#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e600);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7e625 _public_6f7e625
#define public_6f7e639 _public_6f7e639
#define public_6f7e64b _public_6f7e64b
#define public_6f7e659 _public_6f7e659
#define public_6f7e664 _public_6f7e664
#define public_6f7e66c _public_6f7e66c
#define public_6f7e678 _public_6f7e678
#define public_6f7e698 _public_6f7e698
#define public_6f7e6ac _public_6f7e6ac
#define public_6f7e6de _public_6f7e6de
#define public_6f7e6e6 _public_6f7e6e6
#define public_6f7e70f _public_6f7e70f

PROC_DECLARE(0x6f7e600, internal_6f7e600, public_6f7e600);
extern "C" NAKED register_t __cdecl internal_6f7e600()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx]
        push ebp
        mov ebp, ecx
        push esi
        mov dword ptr ss : [ebp], eax
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        lea esi, ss:[ebp+4]
        mov eax, edx
        cmp eax, edx
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        je public_6f7e639
        public_6f7e625 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6f7e625
        public_6f7e639 : nop
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [ebx+8]
        test ecx, ecx
        jne public_6f7e64b
        xor edx, edx
        mov dword ptr ss : [esp+0x10], edx
        jmp public_6f7e659
        public_6f7e64b : nop
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, ecx
        sar eax, 3
        mov dword ptr ss : [esp+0x10], eax
        mov edx, eax
        public_6f7e659 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f7e664
        xor eax, eax
        jmp public_6f7e66c
        public_6f7e664 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_6f7e66c : nop
        cmp eax, edx
        jae public_6f7e6de
        test edx, edx
        mov eax, edx
        jge public_6f7e678
        xor eax, eax
        public_6f7e678 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_6f7e6ac
        public_6f7e698 : nop
        push edi
        push ebx
        call public_6f305b0
        add edi, 8
        add esp, 8
        add ebx, 8
        cmp edi, ebp
        jne public_6f7e698
        public_6f7e6ac : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_6eae300
        mov ebp, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x24]
        lea edx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        public_6f7e6de : nop
        mov edi, dword ptr ds : [ebx+8]
        cmp edi, dword ptr ds : [ebx+0xC]
        je public_6f7e70f
        public_6f7e6e6 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi+8]
        push 1
        mov dword ptr ss : [esp+0x24], ecx
        push eax
        mov ecx, esi
        call public_6f96770
        mov eax, dword ptr ds : [ebx+0xC]
        add edi, 8
        cmp edi, eax
        jne public_6f7e6e6
        public_6f7e70f : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f7e600)
    }
}

#undef public_6f7e625
#undef public_6f7e639
#undef public_6f7e64b
#undef public_6f7e659
#undef public_6f7e664
#undef public_6f7e66c
#undef public_6f7e678
#undef public_6f7e698
#undef public_6f7e6ac
#undef public_6f7e6de
#undef public_6f7e6e6
#undef public_6f7e70f
