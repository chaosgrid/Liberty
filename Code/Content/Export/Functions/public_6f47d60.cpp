#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6f38b20);
CLANG_FORWARD_PROC_SYMBOL(public_6f47d60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f47d80 _public_6f47d80
#define public_6f47d94 _public_6f47d94
#define public_6f47dd4 _public_6f47dd4
#define public_6f47ddc _public_6f47ddc
#define public_6f47de5 _public_6f47de5
#define public_6f47df9 _public_6f47df9
#define public_6f47e11 _public_6f47e11
#define public_6f47e28 _public_6f47e28
#define public_6f47e30 _public_6f47e30
#define public_6f47e38 _public_6f47e38
#define public_6f47e44 _public_6f47e44
#define public_6f47e4c _public_6f47e4c
#define public_6f47e80 _public_6f47e80
#define public_6f47ea5 _public_6f47ea5
#define public_6f47ece _public_6f47ece

PROC_DECLARE(0x6f47d60, internal_6f47d60, public_6f47d60);
extern "C" NAKED register_t __cdecl internal_6f47d60()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push ebx
        push esi
        lea esi, ds:[ecx+0x38]
        mov byte ptr ds : [ecx+0x34], al
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        push edi
        je public_6f47d94
        lea esp, ss:[esp]
        public_6f47d80 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6f47d80
        public_6f47d94 : nop
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        mov dword ptr ds : [esi+8], ecx
        je public_6f47ece
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6f47ece
        mov ebx, dword ptr ds : [edi+8]
        mov edx, ebx
        sub edx, eax
        sar edx, 3
        test edx, edx
        je public_6f47ece
        cmp esi, edi
        je public_6f47ece
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push ebp
        jne public_6f47dd4
        xor ebp, ebp
        jmp public_6f47ddc
        public_6f47dd4 : nop
        mov ebp, dword ptr ds : [esi+8]
        sub ebp, ecx
        sar ebp, 3
        public_6f47ddc : nop
        cmp edx, ebp
        pop ebp
        ja public_6f47e28
        cmp eax, ebx
        je public_6f47df9
        public_6f47de5 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        add eax, 8
        add ecx, 8
        cmp eax, ebx
        jne public_6f47de5
        public_6f47df9 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f47e11
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*8]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebx
        ret 8
        public_6f47e11 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ds : [esi+4]
        sar edi, 3
        lea ecx, ds:[eax+edi*8]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebx
        ret 8
        public_6f47e28 : nop
        test ecx, ecx
        jne public_6f47e30
        xor ebx, ebx
        jmp public_6f47e38
        public_6f47e30 : nop
        mov ebx, dword ptr ds : [esi+0xC]
        sub ebx, ecx
        sar ebx, 3
        public_6f47e38 : nop
        cmp edx, ebx
        ja public_6f47e80
        test ecx, ecx
        jne public_6f47e44
        xor edx, edx
        jmp public_6f47e4c
        public_6f47e44 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 3
        public_6f47e4c : nop
        push ecx
        lea ebx, ds:[eax+edx*8]
        push ebx
        push eax
        call public_6f38b20
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push edx
        push eax
        push ebx
        mov ecx, esi
        call public_6ed2700
        mov ecx, edi
        call public_6eae300
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*8]
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebx
        ret 8
        public_6f47e80 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6eae300
        test eax, eax
        jge public_6f47ea5
        xor eax, eax
        public_6f47ea5 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6ed2700
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6f47ece : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f47d60)
    }
}

#undef public_6f47d80
#undef public_6f47d94
#undef public_6f47dd4
#undef public_6f47ddc
#undef public_6f47de5
#undef public_6f47df9
#undef public_6f47e11
#undef public_6f47e28
#undef public_6f47e30
#undef public_6f47e38
#undef public_6f47e44
#undef public_6f47e4c
#undef public_6f47e80
#undef public_6f47ea5
#undef public_6f47ece
