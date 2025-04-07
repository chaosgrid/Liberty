#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7eb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7eb94 _public_6f7eb94
#define public_6f7eba8 _public_6f7eba8
#define public_6f7ebbe _public_6f7ebbe
#define public_6f7ebcc _public_6f7ebcc
#define public_6f7ebd7 _public_6f7ebd7
#define public_6f7ebdf _public_6f7ebdf
#define public_6f7ebeb _public_6f7ebeb
#define public_6f7ec08 _public_6f7ec08
#define public_6f7ec1c _public_6f7ec1c
#define public_6f7ec4b _public_6f7ec4b
#define public_6f7ec53 _public_6f7ec53
#define public_6f7ec7c _public_6f7ec7c

PROC_DECLARE(0x6f7eb80, internal_6f7eb80, public_6f7eb80);
extern "C" NAKED register_t __cdecl internal_6f7eb80()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        push edi
        je public_6f7eba8
        public_6f7eb94 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6f7eb94
        public_6f7eba8 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6f7ebbe
        xor edx, edx
        mov dword ptr ss : [esp+0xC], edx
        jmp public_6f7ebcc
        public_6f7ebbe : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 3
        mov dword ptr ss : [esp+0xC], eax
        mov edx, eax
        public_6f7ebcc : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f7ebd7
        xor eax, eax
        jmp public_6f7ebdf
        public_6f7ebd7 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_6f7ebdf : nop
        cmp eax, edx
        jae public_6f7ec4b
        test edx, edx
        mov eax, edx
        jge public_6f7ebeb
        xor eax, eax
        public_6f7ebeb : nop
        shl eax, 3
        push ebp
        push eax
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_6f7ec1c
        public_6f7ec08 : nop
        push edi
        push ebx
        call public_6f305b0
        add edi, 8
        add esp, 8
        add ebx, 8
        cmp edi, ebp
        jne public_6f7ec08
        public_6f7ec1c : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ds:[edi+edx*8]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6eae300
        mov ebx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], edi
        pop ebp
        public_6f7ec4b : nop
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, dword ptr ds : [ebx+8]
        je public_6f7ec7c
        public_6f7ec53 : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+8]
        push 1
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_6f96770
        mov eax, dword ptr ds : [ebx+8]
        add edi, 8
        cmp edi, eax
        jne public_6f7ec53
        public_6f7ec7c : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f7eb80)
    }
}

#undef public_6f7eb94
#undef public_6f7eba8
#undef public_6f7ebbe
#undef public_6f7ebcc
#undef public_6f7ebd7
#undef public_6f7ebdf
#undef public_6f7ebeb
#undef public_6f7ec08
#undef public_6f7ec1c
#undef public_6f7ec4b
#undef public_6f7ec53
#undef public_6f7ec7c
