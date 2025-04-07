#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4060d);

#define public_6d40647 _public_6d40647
#define public_6d4066d _public_6d4066d
#define public_6d40692 _public_6d40692
#define public_6d406ba _public_6d406ba
#define public_6d406e0 _public_6d406e0
#define public_6d40705 _public_6d40705
#define public_6d4072b _public_6d4072b
#define public_6d40750 _public_6d40750
#define public_6d407ab _public_6d407ab
#define public_6d407bc _public_6d407bc
#define public_6d407cb _public_6d407cb
#define public_6d407e5 _public_6d407e5
#define public_6d40806 _public_6d40806
#define public_6d40819 _public_6d40819
#define public_6d4082d _public_6d4082d
#define public_6d40831 _public_6d40831
#define public_6d40834 _public_6d40834
#define public_6d40858 _public_6d40858
#define public_6d4087f _public_6d4087f
#define public_6d408b1 _public_6d408b1
#define public_6d40901 _public_6d40901

PROC_DECLARE(0x6d4060d, internal_6d4060d, public_6d4060d);
extern "C" NAKED register_t __cdecl internal_6d4060d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        mov ebx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        push edi
        mov edi, dword ptr ds : [ebx]
        mov byte ptr ds : [esi+0xC8], cl
        mov cl, byte ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        mov byte ptr ds : [esi+0xC9], cl
        jne public_6d40647
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40901
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40647 : nop
        dec dword ptr ss : [ebp-4]
        xor eax, eax
        mov ah, byte ptr ds : [edi]
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp+8], eax
        jne public_6d4066d
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40901
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d4066d : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp+8], eax
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d40692
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40901
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40692 : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ds : [esi+0xC0], eax
        jne public_6d406ba
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40901
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d406ba : nop
        dec dword ptr ss : [ebp-4]
        xor eax, eax
        mov ah, byte ptr ds : [edi]
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ds : [esi+0x1C], eax
        jne public_6d406e0
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40901
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d406e0 : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        add dword ptr ds : [esi+0x1C], eax
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d40705
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40901
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40705 : nop
        dec dword ptr ss : [ebp-4]
        xor eax, eax
        mov ah, byte ptr ds : [edi]
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ds : [esi+0x18], eax
        jne public_6d4072b
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40901
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d4072b : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        add dword ptr ds : [esi+0x18], eax
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d40750
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40901
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40750 : nop
        movzx eax, byte ptr ds : [edi]
        mov ecx, dword ptr ds : [esi+0x178]
        dec dword ptr ss : [ebp-4]
        sub dword ptr ss : [ebp+8], 8
        mov dword ptr ds : [esi+0x20], eax
        mov eax, dword ptr ds : [esi]
        add eax, 0x18
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x63
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        inc edi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x190]
        cmp byte ptr ds : [eax+0x51], 0
        pop ecx
        pop ecx
        je public_6d407ab
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x39
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d407ab : nop
        xor eax, eax
        cmp dword ptr ds : [esi+0x1C], eax
        jbe public_6d407bc
        cmp dword ptr ds : [esi+0x18], eax
        jbe public_6d407bc
        cmp dword ptr ds : [esi+0x20], eax
        jg public_6d407cb
        public_6d407bc : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x1F
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d407cb : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea eax, ds:[eax+eax*2]
        cmp dword ptr ss : [ebp+8], eax
        je public_6d407e5
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 9
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d407e5 : nop
        cmp dword ptr ds : [esi+0xC4], 0
        jne public_6d40806
        mov ecx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [esi+4]
        imul ecx, 0x54
        push ecx
        push 1
        push esi
        call dword ptr ds : [eax]
        add esp, 0xC
        mov dword ptr ds : [esi+0xC4], eax
        public_6d40806 : nop
        and dword ptr ss : [ebp-8], 0
        cmp dword ptr ds : [esi+0x20], 0
        mov eax, dword ptr ds : [esi+0xC4]
        mov dword ptr ss : [ebp+8], eax
        jg public_6d40834
        public_6d40819 : nop
        mov eax, dword ptr ds : [esi+0x190]
        mov byte ptr ds : [eax+0x51], 1
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], edi
        mov al, 1
        public_6d4082d : nop
        pop edi
        pop ebx
        leave 
        ret 
        public_6d40831 : nop
        mov eax, dword ptr ss : [ebp+8]
        public_6d40834 : nop
        cmp dword ptr ss : [ebp-4], 0
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+4], ecx
        jne public_6d40858
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40901
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [ebp+8]
        public_6d40858 : nop
        movzx ecx, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ds : [eax], ecx
        jne public_6d4087f
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40901
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [ebp+8]
        public_6d4087f : nop
        movzx ecx, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        mov edx, ecx
        sar edx, 4
        and edx, 0xF
        and ecx, 0xF
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xC], ecx
        jne public_6d408b1
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40901
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [ebp+8]
        public_6d408b1 : nop
        movzx ecx, byte ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        dec dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, dword ptr ds : [esi]
        add ecx, 0x18
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x64
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        inc edi
        call dword ptr ds : [eax+4]
        inc dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-8]
        add dword ptr ss : [ebp+8], 0x54
        cmp eax, dword ptr ds : [esi+0x20]
        pop ecx
        pop ecx
        jl public_6d40831
        jmp public_6d40819
        public_6d40901 : nop
        xor al, al
        jmp public_6d4082d
        UNREACHABLE_TRAP(0x6d4060d)
    }
}

#undef public_6d40647
#undef public_6d4066d
#undef public_6d40692
#undef public_6d406ba
#undef public_6d406e0
#undef public_6d40705
#undef public_6d4072b
#undef public_6d40750
#undef public_6d407ab
#undef public_6d407bc
#undef public_6d407cb
#undef public_6d407e5
#undef public_6d40806
#undef public_6d40819
#undef public_6d4082d
#undef public_6d40831
#undef public_6d40834
#undef public_6d40858
#undef public_6d4087f
#undef public_6d408b1
#undef public_6d40901
