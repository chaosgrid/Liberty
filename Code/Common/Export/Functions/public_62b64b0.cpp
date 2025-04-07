#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b64b0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9530);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62b64d1 _public_62b64d1
#define public_62b64d9 _public_62b64d9
#define public_62b64e4 _public_62b64e4
#define public_62b64ec _public_62b64ec
#define public_62b6500 _public_62b6500
#define public_62b6514 _public_62b6514
#define public_62b652b _public_62b652b
#define public_62b6541 _public_62b6541
#define public_62b6549 _public_62b6549
#define public_62b6551 _public_62b6551
#define public_62b6559 _public_62b6559
#define public_62b6561 _public_62b6561
#define public_62b656d _public_62b656d
#define public_62b6575 _public_62b6575
#define public_62b6580 _public_62b6580
#define public_62b6594 _public_62b6594
#define public_62b65a1 _public_62b65a1
#define public_62b65b5 _public_62b65b5
#define public_62b65c1 _public_62b65c1
#define public_62b65c9 _public_62b65c9
#define public_62b65da _public_62b65da
#define public_62b65ee _public_62b65ee
#define public_62b65f6 _public_62b65f6
#define public_62b65fc _public_62b65fc
#define public_62b6625 _public_62b6625

PROC_DECLARE(0x62b64b0, internal_62b64b0, public_62b64b0);
extern "C" NAKED register_t __cdecl internal_62b64b0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        cmp esi, ebx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        je public_62b6625
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_62b64d1
        xor edi, edi
        jmp public_62b64d9
        public_62b64d1 : nop
        mov edi, dword ptr ds : [ebx+8]
        sub edi, eax
        sar edi, 3
        public_62b64d9 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_62b64e4
        xor ecx, ecx
        jmp public_62b64ec
        public_62b64e4 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 3
        public_62b64ec : nop
        cmp edi, ecx
        ja public_62b6541
        mov edi, dword ptr ds : [ebx+8]
        cmp eax, edi
        mov ecx, edx
        je public_62b6514
        lea esp, ss:[esp]
        public_62b6500 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        add eax, 8
        add ecx, 8
        cmp eax, edi
        jne public_62b6500
        public_62b6514 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_62b652b
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [esi+8], edx
        jmp public_62b6625
        public_62b652b : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+4]
        sar eax, 3
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [esi+8], edx
        jmp public_62b6625
        public_62b6541 : nop
        test eax, eax
        jne public_62b6549
        xor edi, edi
        jmp public_62b6551
        public_62b6549 : nop
        mov edi, dword ptr ds : [ebx+8]
        sub edi, eax
        sar edi, 3
        public_62b6551 : nop
        test edx, edx
        jne public_62b6559
        xor ecx, ecx
        jmp public_62b6561
        public_62b6559 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edx
        sar ecx, 3
        public_62b6561 : nop
        cmp edi, ecx
        ja public_62b65da
        test edx, edx
        jne public_62b656d
        xor ecx, ecx
        jmp public_62b6575
        public_62b656d : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        sar ecx, 3
        public_62b6575 : nop
        lea ecx, ds:[eax+ecx*8]
        cmp eax, ecx
        je public_62b6594
        lea esp, ss:[esp]
        public_62b6580 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], edi
        add eax, 8
        add edx, 8
        cmp eax, ecx
        jne public_62b6580
        public_62b6594 : nop
        mov edi, dword ptr ds : [esi+8]
        push ebp
        mov ebp, dword ptr ds : [ebx+8]
        cmp ecx, ebp
        mov esi, ecx
        je public_62b65b5
        public_62b65a1 : nop
        push esi
        push edi
        call public_62bee40
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebp
        jne public_62b65a1
        public_62b65b5 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        pop ebp
        jne public_62b65c1
        xor eax, eax
        jmp public_62b65c9
        public_62b65c1 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 3
        public_62b65c9 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [ecx+8], eax
        mov esi, ecx
        jmp public_62b6625
        public_62b65da : nop
        push edx
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+4]
        add esp, 4
        test ecx, ecx
        jne public_62b65ee
        xor eax, eax
        jmp public_62b65f6
        public_62b65ee : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 3
        public_62b65f6 : nop
        test eax, eax
        jge public_62b65fc
        xor eax, eax
        public_62b65fc : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_62b9530
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_62b6625 : nop
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [esi+0x14], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62b64b0)
    }
}

#undef public_62b64d1
#undef public_62b64d9
#undef public_62b64e4
#undef public_62b64ec
#undef public_62b6500
#undef public_62b6514
#undef public_62b652b
#undef public_62b6541
#undef public_62b6549
#undef public_62b6551
#undef public_62b6559
#undef public_62b6561
#undef public_62b656d
#undef public_62b6575
#undef public_62b6580
#undef public_62b6594
#undef public_62b65a1
#undef public_62b65b5
#undef public_62b65c1
#undef public_62b65c9
#undef public_62b65da
#undef public_62b65ee
#undef public_62b65f6
#undef public_62b65fc
#undef public_62b6625
