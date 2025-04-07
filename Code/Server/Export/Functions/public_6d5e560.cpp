#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced210);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d5e5a0 _public_6d5e5a0
#define public_6d5e5a8 _public_6d5e5a8
#define public_6d5e5b3 _public_6d5e5b3
#define public_6d5e5bb _public_6d5e5bb
#define public_6d5e5d0 _public_6d5e5d0
#define public_6d5e5e9 _public_6d5e5e9
#define public_6d5e604 _public_6d5e604
#define public_6d5e61e _public_6d5e61e
#define public_6d5e626 _public_6d5e626
#define public_6d5e62e _public_6d5e62e
#define public_6d5e636 _public_6d5e636
#define public_6d5e63e _public_6d5e63e
#define public_6d5e64e _public_6d5e64e
#define public_6d5e656 _public_6d5e656
#define public_6d5e663 _public_6d5e663
#define public_6d5e678 _public_6d5e678
#define public_6d5e688 _public_6d5e688
#define public_6d5e6a0 _public_6d5e6a0
#define public_6d5e6bb _public_6d5e6bb
#define public_6d5e6d5 _public_6d5e6d5
#define public_6d5e6e9 _public_6d5e6e9
#define public_6d5e6f1 _public_6d5e6f1
#define public_6d5e6f7 _public_6d5e6f7
#define public_6d5e71d _public_6d5e71d
#define public_6d5e724 _public_6d5e724
#define public_6d5e72e _public_6d5e72e

PROC_DECLARE(0x6d5e560, internal_6d5e560, public_6d5e560);
extern "C" NAKED register_t __cdecl internal_6d5e560()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        je public_6d5e72e
        push eax
        call dword ptr ds : [public_6d6449c]
        add esp, 4
        test eax, eax
        je public_6d5e724
        mov ebp, dword ptr ss : [esp+0x14]
        lea ebx, ds:[eax+4]
        xor edi, edi
        cmp ebp, ebx
        je public_6d5e71d
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6d5e5a0
        xor edx, edx
        jmp public_6d5e5a8
        public_6d5e5a0 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, eax
        sar edx, 5
        public_6d5e5a8 : nop
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        jne public_6d5e5b3
        xor ecx, ecx
        jmp public_6d5e5bb
        public_6d5e5b3 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        sar ecx, 5
        public_6d5e5bb : nop
        cmp edx, ecx
        ja public_6d5e61e
        mov ecx, dword ptr ds : [ebx+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, esi
        je public_6d5e5e9
        lea esp, ss:[esp]
        public_6d5e5d0 : nop
        mov esi, eax
        mov edi, edx
        mov ecx, 8
        rep movsd
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 0x20
        add edx, 0x20
        cmp eax, ecx
        jne public_6d5e5d0
        public_6d5e5e9 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6d5e604
        mov ecx, dword ptr ss : [ebp+4]
        xor eax, eax
        shl eax, 5
        pop edi
        add eax, ecx
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6d5e604 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp+4]
        sar eax, 5
        shl eax, 5
        pop edi
        add eax, ecx
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6d5e61e : nop
        test eax, eax
        jne public_6d5e626
        xor edx, edx
        jmp public_6d5e62e
        public_6d5e626 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, eax
        sar edx, 5
        public_6d5e62e : nop
        test esi, esi
        jne public_6d5e636
        xor ecx, ecx
        jmp public_6d5e63e
        public_6d5e636 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, esi
        sar ecx, 5
        public_6d5e63e : nop
        cmp edx, ecx
        ja public_6d5e6d5
        test esi, esi
        jne public_6d5e64e
        xor ecx, ecx
        jmp public_6d5e656
        public_6d5e64e : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        sar ecx, 5
        public_6d5e656 : nop
        shl ecx, 5
        add ecx, eax
        mov edx, ecx
        cmp eax, edx
        mov ebp, esi
        je public_6d5e678
        public_6d5e663 : nop
        mov esi, eax
        mov edi, ebp
        add eax, 0x20
        mov ecx, 8
        add ebp, 0x20
        cmp eax, edx
        rep movsd
        jne public_6d5e663
        public_6d5e678 : nop
        mov ebp, dword ptr ds : [ebx+8]
        cmp edx, ebp
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edx
        je public_6d5e6a0
        public_6d5e688 : nop
        push esi
        push edi
        call public_6ced210
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebp
        jne public_6d5e688
        mov ecx, dword ptr ss : [esp+0x14]
        public_6d5e6a0 : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6d5e6bb
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        pop edi
        shl eax, 5
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        pop ebx
        ret 
        public_6d5e6bb : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, edx
        mov edx, dword ptr ds : [ecx+4]
        sar eax, 5
        pop edi
        shl eax, 5
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        pop ebx
        ret 
        public_6d5e6d5 : nop
        push esi
        call public_6d5ffb0
        mov ecx, dword ptr ds : [ebx+4]
        add esp, 4
        test ecx, ecx
        jne public_6d5e6e9
        xor eax, eax
        jmp public_6d5e6f1
        public_6d5e6e9 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 5
        public_6d5e6f1 : nop
        test eax, eax
        jge public_6d5e6f7
        xor eax, eax
        public_6d5e6f7 : nop
        shl eax, 5
        push eax
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6d6423c]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6d5e71d : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6d5e724 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 
        public_6d5e72e : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5e560)
    }
}

#undef public_6d5e5a0
#undef public_6d5e5a8
#undef public_6d5e5b3
#undef public_6d5e5bb
#undef public_6d5e5d0
#undef public_6d5e5e9
#undef public_6d5e604
#undef public_6d5e61e
#undef public_6d5e626
#undef public_6d5e62e
#undef public_6d5e636
#undef public_6d5e63e
#undef public_6d5e64e
#undef public_6d5e656
#undef public_6d5e663
#undef public_6d5e678
#undef public_6d5e688
#undef public_6d5e6a0
#undef public_6d5e6bb
#undef public_6d5e6d5
#undef public_6d5e6e9
#undef public_6d5e6f1
#undef public_6d5e6f7
#undef public_6d5e71d
#undef public_6d5e724
#undef public_6d5e72e
