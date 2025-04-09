#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b6640);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_5b6661 _public_5b6661
#define public_5b6663 _public_5b6663
#define public_5b66b5 _public_5b66b5
#define public_5b66b7 _public_5b66b7
#define public_5b66d6 _public_5b66d6
#define public_5b66e1 _public_5b66e1
#define public_5b66e4 _public_5b66e4
#define public_5b671a _public_5b671a
#define public_5b6751 _public_5b6751
#define public_5b676e _public_5b676e
#define public_5b677a _public_5b677a
#define public_5b6784 _public_5b6784
#define public_5b678d _public_5b678d
#define public_5b67a0 _public_5b67a0
#define public_5b67af _public_5b67af
#define public_5b67ca _public_5b67ca

PROC_DECLARE(0x5b6640, internal_5b6640, public_5b6640);
extern "C" NAKED register_t __cdecl internal_5b6640()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x804
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        push edi
        mov dword ptr ss : [ebp-4], 0
        jle public_5b6661
        mov eax, dword ptr ds : [esi+eax*4]
        jmp public_5b6663
        public_5b6661 : nop
        xor eax, eax
        public_5b6663 : nop
        lea ecx, ss:[ebp-4]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        push 0
        lea edx, ss:[ebp+8]
        push edx
        push 0
        push ecx
        push eax
        call dword ptr ds : [public_5c6010]
        test eax, eax
        jne public_5b67ca
        cmp dword ptr ss : [ebp+8], 1
        jne public_5b67ca
        mov edi, dword ptr ss : [ebp-4]
        cmp edi, 0xFFFFFFFF
        je public_5b67ca
        mov eax, edi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov ebx, esp
        mov dword ptr ss : [ebp+8], edi
        jle public_5b66b5
        mov eax, dword ptr ds : [esi+eax*4]
        jmp public_5b66b7
        public_5b66b5 : nop
        xor eax, eax
        public_5b66b7 : nop
        lea edx, ss:[ebp+8]
        push edx
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        lea ecx, ss:[ebp+0x10]
        push ecx
        push 0
        push edx
        push eax
        call dword ptr ds : [public_5c6010]
        test eax, eax
        je public_5b66d6
        or eax, 0xFFFFFFFF
        jmp public_5b66e4
        public_5b66d6 : nop
        cmp dword ptr ss : [ebp+0x10], 1
        je public_5b66e1
        or eax, 0xFFFFFFFF
        jmp public_5b66e4
        public_5b66e1 : nop
        mov eax, dword ptr ss : [ebp+8]
        public_5b66e4 : nop
        cmp eax, edi
        jne public_5b67ca
        lea eax, ss:[ebp-0x804]
        push eax
        push ebx
        call dword ptr ds : [public_5c6cec]
        lea ecx, ss:[ebp-0x804]
        push ecx
        call dword ptr ds : [public_5c71c8]
        mov esi, eax
        add esp, 0xC
        cmp esi, 0x7FFFFFFD
        jbe public_5b671a
        call dword ptr ds : [public_5c7070]
        public_5b671a : nop
        mov edi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_5b6751
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_5b6751
        cmp cl, 0xFF
        je public_5b6751
        test esi, esi
        jne public_5b6784
        dec cl
        mov byte ptr ds : [eax-1], cl
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6fb8]
        mov al, 1
        lea esp, ss:[ebp-0x810]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_5b6751 : nop
        test esi, esi
        jne public_5b676e
        push 1
        mov ecx, edi
        call dword ptr ds : [public_5c6fb8]
        mov al, 1
        lea esp, ss:[ebp-0x810]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_5b676e : nop
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, 0x1F
        ja public_5b677a
        cmp eax, esi
        jae public_5b678d
        public_5b677a : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_5c6fb8]
        public_5b6784 : nop
        mov ecx, edi
        push esi
        call dword ptr ds : [public_5c6fb4]
        public_5b678d : nop
        test esi, esi
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[ebp-0x804]
        jbe public_5b67af
        mov edx, esi
        lea esp, ss:[esp]
        public_5b67a0 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_5b67a0
        public_5b67af : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], esi
        mov word ptr ds : [edx+esi*2], 0
        mov al, 1
        lea esp, ss:[ebp-0x810]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_5b67ca : nop
        xor al, al
        lea esp, ss:[ebp-0x810]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x5b6640)
    }
}

#undef public_5b6661
#undef public_5b6663
#undef public_5b66b5
#undef public_5b66b7
#undef public_5b66d6
#undef public_5b66e1
#undef public_5b66e4
#undef public_5b671a
#undef public_5b6751
#undef public_5b676e
#undef public_5b677a
#undef public_5b6784
#undef public_5b678d
#undef public_5b67a0
#undef public_5b67af
#undef public_5b67ca
