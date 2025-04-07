#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f64);

#define public_6d4a5a1 _public_6d4a5a1
#define public_6d4a5d1 _public_6d4a5d1
#define public_6d4a5d9 _public_6d4a5d9
#define public_6d4a5e4 _public_6d4a5e4
#define public_6d4a60e _public_6d4a60e
#define public_6d4a633 _public_6d4a633
#define public_6d4a63a _public_6d4a63a
#define public_6d4a64b _public_6d4a64b
#define public_6d4a652 _public_6d4a652
#define public_6d4a67b _public_6d4a67b
#define public_6d4a691 _public_6d4a691
#define public_6d4a6fe _public_6d4a6fe
#define public_6d4a716 _public_6d4a716
#define public_6d4a719 _public_6d4a719
#define public_6d4a72b _public_6d4a72b
#define public_6d4a72e _public_6d4a72e
#define public_6d4a775 _public_6d4a775
#define public_6d4a7b0 _public_6d4a7b0
#define public_6d4a7fd _public_6d4a7fd
#define public_6d4a818 _public_6d4a818
#define public_6d4a81a _public_6d4a81a
#define public_6d4a821 _public_6d4a821
#define public_6d4a869 _public_6d4a869
#define public_6d4a87e _public_6d4a87e
#define public_6d4a880 _public_6d4a880
#define public_6d4a88c _public_6d4a88c
#define public_6d4a8de _public_6d4a8de
#define public_6d4a8f9 _public_6d4a8f9
#define public_6d4a8fb _public_6d4a8fb
#define public_6d4a8ff _public_6d4a8ff
#define public_6d4a951 _public_6d4a951
#define public_6d4a96c _public_6d4a96c
#define public_6d4a96e _public_6d4a96e
#define public_6d4a975 _public_6d4a975
#define public_6d4a9ca _public_6d4a9ca
#define public_6d4a9e5 _public_6d4a9e5
#define public_6d4a9e7 _public_6d4a9e7
#define public_6d4a9ee _public_6d4a9ee
#define public_6d4aa60 _public_6d4aa60
#define public_6d4aa7a _public_6d4aa7a
#define public_6d4aa90 _public_6d4aa90

PROC_DECLARE(0x6d4a57a, internal_6d4a57a, public_6d4a57a);
extern "C" NAKED register_t __cdecl internal_6d4a57a()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x70]
        sub esp, 0x108
        push ebx
        push edi
        mov edi, dword ptr ss : [ebp+0x78]
        mov eax, dword ptr ds : [edi+0x184]
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [edi+0x118]
        dec eax
        mov dword ptr ss : [ebp-0x14], eax
        xor ebx, ebx
        jmp public_6d4a5d9
        public_6d4a5a1 : nop
        mov eax, dword ptr ds : [edi+0x18C]
        cmp byte ptr ds : [eax+0x11], 0
        jne public_6d4a5e4
        mov ecx, dword ptr ds : [edi+0x7C]
        cmp ecx, dword ptr ds : [edi+0x84]
        jne public_6d4a5d1
        xor ecx, ecx
        cmp dword ptr ds : [edi+0x168], ebx
        sete cl
        add ecx, dword ptr ds : [edi+0x88]
        cmp dword ptr ds : [edi+0x80], ecx
        ja public_6d4a5e4
        public_6d4a5d1 : nop
        push edi
        call dword ptr ds : [eax]
        test eax, eax
        pop ecx
        je public_6d4a633
        public_6d4a5d9 : nop
        mov eax, dword ptr ds : [edi+0x7C]
        cmp eax, dword ptr ds : [edi+0x84]
        jle public_6d4a5a1
        public_6d4a5e4 : nop
        cmp dword ptr ds : [edi+0x20], ebx
        push esi
        mov esi, dword ptr ds : [edi+0xC4]
        mov dword ptr ss : [ebp+0x20], ebx
        jle public_6d4aa7a
        mov eax, dword ptr ss : [ebp]
        and dword ptr ss : [ebp+4], 0
        lea ecx, ds:[eax+0x48]
        mov dword ptr ss : [ebp+8], 0xFFFFFFB8
        sub dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0x50], ecx
        public_6d4a60e : nop
        cmp byte ptr ds : [esi+0x30], 0
        je public_6d4aa60
        mov ebx, dword ptr ds : [edi+0x88]
        cmp ebx, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [esi+0xC]
        jae public_6d4a63a
        mov eax, ecx
        mov dword ptr ss : [ebp+0x60], eax
        add eax, eax
        and byte ptr ss : [ebp+0x6B], 0
        jmp public_6d4a652
        public_6d4a633 : nop
        xor eax, eax
        jmp public_6d4aa90
        public_6d4a63a : nop
        mov eax, dword ptr ds : [esi+0x20]
        xor edx, edx
        div ecx
        test edx, edx
        mov dword ptr ss : [ebp+0x60], edx
        jne public_6d4a64b
        mov dword ptr ss : [ebp+0x60], ecx
        public_6d4a64b : nop
        mov eax, dword ptr ss : [ebp+0x60]
        mov byte ptr ss : [ebp+0x6B], 1
        public_6d4a652 : nop
        test ebx, ebx
        push 0
        jbe public_6d4a67b
        mov edx, dword ptr ds : [edi+4]
        add eax, ecx
        dec ebx
        imul ebx, ecx
        push eax
        mov eax, dword ptr ss : [ebp+0x50]
        push ebx
        push dword ptr ds : [eax]
        push edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 0x14
        and byte ptr ss : [ebp+0x7B], 0
        lea eax, ds:[eax+ecx*4]
        jmp public_6d4a691
        public_6d4a67b : nop
        mov ecx, dword ptr ds : [edi+4]
        push eax
        mov eax, dword ptr ss : [ebp+0x50]
        push 0
        push dword ptr ds : [eax]
        push edi
        call dword ptr ds : [ecx+0x20]
        add esp, 0x14
        mov byte ptr ss : [ebp+0x7B], 1
        public_6d4a691 : nop
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax+0x70]
        add eax, dword ptr ss : [ebp+4]
        and dword ptr ss : [ebp+0x58], 0
        mov dword ptr ss : [ebp+0x6C], eax
        mov eax, dword ptr ds : [esi+0x4C]
        movzx ecx, word ptr ds : [eax]
        mov dword ptr ss : [ebp+0x54], ecx
        movzx ecx, word ptr ds : [eax+2]
        mov dword ptr ss : [ebp+0x30], ecx
        movzx ecx, word ptr ds : [eax+0x10]
        mov dword ptr ss : [ebp+0x44], ecx
        movzx ecx, word ptr ds : [eax+0x20]
        mov dword ptr ss : [ebp+0x24], ecx
        movzx ecx, word ptr ds : [eax+0x12]
        movzx eax, word ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0x2C], eax
        mov eax, dword ptr ds : [edi+0x198]
        add eax, dword ptr ss : [ebp+8]
        cmp dword ptr ss : [ebp+0x60], 0
        mov dword ptr ss : [ebp+0x3C], ecx
        mov ecx, dword ptr ss : [ebp+0x50]
        mov eax, dword ptr ds : [eax+ecx+4]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [ebp-0x18], eax
        mov eax, dword ptr ss : [ebp+0x7C]
        mov eax, dword ptr ds : [eax+ecx*4]
        mov dword ptr ss : [ebp+0xC], eax
        jle public_6d4aa60
        mov ebx, 0x80
        public_6d4a6fe : nop
        cmp byte ptr ss : [ebp+0x7B], 0
        mov ecx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp+0x58]
        lea edx, ds:[ecx+eax*4]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [ebp+0x64], ecx
        je public_6d4a716
        test eax, eax
        je public_6d4a719
        public_6d4a716 : nop
        mov ecx, dword ptr ds : [edx-4]
        public_6d4a719 : nop
        cmp byte ptr ss : [ebp+0x6B], 0
        je public_6d4a72b
        mov eax, dword ptr ss : [ebp+0x60]
        dec eax
        cmp dword ptr ss : [ebp+0x58], eax
        mov eax, dword ptr ss : [ebp+0x64]
        je public_6d4a72e
        public_6d4a72b : nop
        mov eax, dword ptr ds : [edx+4]
        public_6d4a72e : nop
        movsx edx, word ptr ds : [ecx]
        and dword ptr ss : [ebp+0x14], 0
        and dword ptr ss : [ebp+0x28], 0
        mov dword ptr ss : [ebp+0x34], edx
        mov dword ptr ss : [ebp+0x48], edx
        mov dword ptr ss : [ebp-0x10], edx
        mov edx, dword ptr ss : [ebp+0x64]
        movsx edx, word ptr ds : [edx]
        mov dword ptr ss : [ebp+0x5C], edx
        mov dword ptr ss : [ebp+0x40], edx
        mov dword ptr ss : [ebp+0x1C], edx
        movsx edx, word ptr ds : [eax]
        mov dword ptr ss : [ebp+0x38], edx
        mov dword ptr ss : [ebp+0x4C], edx
        mov dword ptr ss : [ebp-0xC], edx
        mov edx, dword ptr ds : [esi+0x1C]
        dec edx
        add eax, 0x80
        add ecx, 0x80
        mov dword ptr ss : [ebp-4], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x10], ecx
        public_6d4a775 : nop
        push 1
        lea eax, ss:[ebp-0x98]
        push eax
        push dword ptr ss : [ebp+0x64]
        call public_6d45f64
        mov eax, dword ptr ss : [ebp-4]
        add esp, 0xC
        cmp dword ptr ss : [ebp+0x28], eax
        jae public_6d4a7b0
        mov eax, dword ptr ss : [ebp+0x10]
        movsx eax, word ptr ds : [eax]
        mov dword ptr ss : [ebp+0x34], eax
        mov eax, dword ptr ss : [ebp+0x64]
        movsx eax, word ptr ds : [eax+0x80]
        mov dword ptr ss : [ebp+0x5C], eax
        mov eax, dword ptr ss : [ebp+0x18]
        movsx eax, word ptr ds : [eax]
        mov dword ptr ss : [ebp+0x38], eax
        public_6d4a7b0 : nop
        mov eax, dword ptr ss : [ebp+0x6C]
        cmp dword ptr ds : [eax+4], 0
        je public_6d4a821
        cmp word ptr ss : [ebp-0x96], 0
        jne public_6d4a821
        mov eax, dword ptr ss : [ebp+0x1C]
        sub eax, dword ptr ss : [ebp+0x5C]
        mov ecx, dword ptr ss : [ebp+0x30]
        imul eax, dword ptr ss : [ebp+0x54]
        lea edx, ds:[eax+eax*8]
        mov eax, ecx
        shl ecx, 8
        shl eax, 7
        shl edx, 2
        js public_6d4a7fd
        add eax, edx
        cdq 
        idiv ecx
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        jle public_6d4a81a
        xor edx, edx
        inc edx
        shl edx, cl
        cmp eax, edx
        jl public_6d4a81a
        lea eax, ds:[edx-1]
        jmp public_6d4a81a
        public_6d4a7fd : nop
        sub eax, edx
        cdq 
        idiv ecx
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        jle public_6d4a818
        xor edx, edx
        inc edx
        shl edx, cl
        cmp eax, edx
        jl public_6d4a818
        lea eax, ds:[edx-1]
        public_6d4a818 : nop
        neg eax
        public_6d4a81a : nop
        mov word ptr ss : [ebp-0x96], ax
        public_6d4a821 : nop
        mov eax, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6d4a88c
        cmp word ptr ss : [ebp-0x88], 0
        jne public_6d4a88c
        mov eax, dword ptr ss : [ebp+0x48]
        sub eax, dword ptr ss : [ebp+0x4C]
        mov ebx, dword ptr ss : [ebp+0x44]
        imul eax, dword ptr ss : [ebp+0x54]
        lea edx, ds:[eax+eax*8]
        mov eax, ebx
        shl ebx, 8
        shl eax, 7
        shl edx, 2
        js public_6d4a869
        add eax, edx
        cdq 
        idiv ebx
        test ecx, ecx
        jle public_6d4a880
        xor edx, edx
        inc edx
        shl edx, cl
        cmp eax, edx
        jl public_6d4a880
        lea eax, ds:[edx-1]
        jmp public_6d4a880
        public_6d4a869 : nop
        sub eax, edx
        cdq 
        idiv ebx
        test ecx, ecx
        jle public_6d4a87e
        xor edx, edx
        inc edx
        shl edx, cl
        cmp eax, edx
        jl public_6d4a87e
        lea eax, ds:[edx-1]
        public_6d4a87e : nop
        neg eax
        public_6d4a880 : nop
        mov word ptr ss : [ebp-0x88], ax
        mov ebx, 0x80
        public_6d4a88c : nop
        mov eax, dword ptr ss : [ebp+0x6C]
        cmp dword ptr ds : [eax+0xC], 0
        je public_6d4a8ff
        cmp word ptr ss : [ebp-0x78], 0
        jne public_6d4a8ff
        mov eax, dword ptr ss : [ebp+0x40]
        add eax, eax
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+0x4C]
        sub eax, ecx
        add eax, dword ptr ss : [ebp+0x48]
        mov ecx, dword ptr ss : [ebp+0x24]
        imul eax, dword ptr ss : [ebp+0x54]
        lea edx, ds:[eax+eax*8]
        mov eax, ecx
        shl ecx, 8
        shl eax, 7
        test edx, edx
        jl public_6d4a8de
        add eax, edx
        cdq 
        idiv ecx
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        jle public_6d4a8fb
        xor edx, edx
        inc edx
        shl edx, cl
        cmp eax, edx
        jl public_6d4a8fb
        lea eax, ds:[edx-1]
        jmp public_6d4a8fb
        public_6d4a8de : nop
        sub eax, edx
        cdq 
        idiv ecx
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        jle public_6d4a8f9
        xor edx, edx
        inc edx
        shl edx, cl
        cmp eax, edx
        jl public_6d4a8f9
        lea eax, ds:[edx-1]
        public_6d4a8f9 : nop
        neg eax
        public_6d4a8fb : nop
        mov word ptr ss : [ebp-0x78], ax
        public_6d4a8ff : nop
        mov eax, dword ptr ss : [ebp+0x6C]
        cmp dword ptr ds : [eax+0x10], 0
        je public_6d4a975
        cmp word ptr ss : [ebp-0x86], 0
        jne public_6d4a975
        mov eax, dword ptr ss : [ebp+0x38]
        sub eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp+0x3C]
        sub eax, dword ptr ss : [ebp+0x34]
        add eax, dword ptr ss : [ebp-0x10]
        imul eax, dword ptr ss : [ebp+0x54]
        lea edx, ds:[eax+eax*4]
        mov eax, ecx
        shl ecx, 8
        shl eax, 7
        test edx, edx
        jl public_6d4a951
        add eax, edx
        cdq 
        idiv ecx
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        jle public_6d4a96e
        xor edx, edx
        inc edx
        shl edx, cl
        cmp eax, edx
        jl public_6d4a96e
        lea eax, ds:[edx-1]
        jmp public_6d4a96e
        public_6d4a951 : nop
        sub eax, edx
        cdq 
        idiv ecx
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        jle public_6d4a96c
        xor edx, edx
        inc edx
        shl edx, cl
        cmp eax, edx
        jl public_6d4a96c
        lea eax, ds:[edx-1]
        public_6d4a96c : nop
        neg eax
        public_6d4a96e : nop
        mov word ptr ss : [ebp-0x86], ax
        public_6d4a975 : nop
        mov eax, dword ptr ss : [ebp+0x6C]
        cmp dword ptr ds : [eax+0x14], 0
        je public_6d4a9ee
        cmp word ptr ss : [ebp-0x94], 0
        jne public_6d4a9ee
        mov eax, dword ptr ss : [ebp+0x40]
        add eax, eax
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+0x5C]
        sub eax, ecx
        add eax, dword ptr ss : [ebp+0x1C]
        mov ecx, dword ptr ss : [ebp+0x2C]
        imul eax, dword ptr ss : [ebp+0x54]
        lea edx, ds:[eax+eax*8]
        mov eax, ecx
        shl ecx, 8
        shl eax, 7
        test edx, edx
        jl public_6d4a9ca
        add eax, edx
        cdq 
        idiv ecx
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ds : [ecx+0x14]
        test ecx, ecx
        jle public_6d4a9e7
        xor edx, edx
        inc edx
        shl edx, cl
        cmp eax, edx
        jl public_6d4a9e7
        lea eax, ds:[edx-1]
        jmp public_6d4a9e7
        public_6d4a9ca : nop
        sub eax, edx
        cdq 
        idiv ecx
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ds : [ecx+0x14]
        test ecx, ecx
        jle public_6d4a9e5
        xor edx, edx
        inc edx
        shl edx, cl
        cmp eax, edx
        jl public_6d4a9e5
        lea eax, ds:[edx-1]
        public_6d4a9e5 : nop
        neg eax
        public_6d4a9e7 : nop
        mov word ptr ss : [ebp-0x94], ax
        public_6d4a9ee : nop
        push dword ptr ss : [ebp+0x14]
        lea eax, ss:[ebp-0x98]
        push dword ptr ss : [ebp+0xC]
        push eax
        push esi
        push edi
        call dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp+0x48]
        add dword ptr ss : [ebp+0x64], ebx
        add dword ptr ss : [ebp+0x10], ebx
        add dword ptr ss : [ebp+0x18], ebx
        mov dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ss : [ebp+0x34]
        mov dword ptr ss : [ebp+0x48], eax
        mov eax, dword ptr ss : [ebp+0x40]
        mov dword ptr ss : [ebp+0x1C], eax
        mov eax, dword ptr ss : [ebp+0x5C]
        mov dword ptr ss : [ebp+0x40], eax
        mov eax, dword ptr ss : [ebp+0x4C]
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp+0x38]
        mov dword ptr ss : [ebp+0x4C], eax
        mov eax, dword ptr ds : [esi+0x24]
        add dword ptr ss : [ebp+0x14], eax
        add esp, 0x14
        inc dword ptr ss : [ebp+0x28]
        mov eax, dword ptr ss : [ebp+0x28]
        cmp eax, dword ptr ss : [ebp-4]
        jbe public_6d4a775
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi+0x24]
        inc dword ptr ss : [ebp+0x58]
        lea eax, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ss : [ebp+0x58]
        cmp eax, dword ptr ss : [ebp+0x60]
        jl public_6d4a6fe
        public_6d4aa60 : nop
        inc dword ptr ss : [ebp+0x20]
        mov eax, dword ptr ss : [ebp+0x20]
        add dword ptr ss : [ebp+4], 0x18
        add dword ptr ss : [ebp+0x50], 4
        add esi, 0x54
        cmp eax, dword ptr ds : [edi+0x20]
        jl public_6d4a60e
        public_6d4aa7a : nop
        lea eax, ds:[edi+0x88]
        inc dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x118]
        pop esi
        sbb eax, eax
        add eax, 4
        public_6d4aa90 : nop
        pop edi
        pop ebx
        add ebp, 0x70
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4a57a)
    }
}

#undef public_6d4a5a1
#undef public_6d4a5d1
#undef public_6d4a5d9
#undef public_6d4a5e4
#undef public_6d4a60e
#undef public_6d4a633
#undef public_6d4a63a
#undef public_6d4a64b
#undef public_6d4a652
#undef public_6d4a67b
#undef public_6d4a691
#undef public_6d4a6fe
#undef public_6d4a716
#undef public_6d4a719
#undef public_6d4a72b
#undef public_6d4a72e
#undef public_6d4a775
#undef public_6d4a7b0
#undef public_6d4a7fd
#undef public_6d4a818
#undef public_6d4a81a
#undef public_6d4a821
#undef public_6d4a869
#undef public_6d4a87e
#undef public_6d4a880
#undef public_6d4a88c
#undef public_6d4a8de
#undef public_6d4a8f9
#undef public_6d4a8fb
#undef public_6d4a8ff
#undef public_6d4a951
#undef public_6d4a96c
#undef public_6d4a96e
#undef public_6d4a975
#undef public_6d4a9ca
#undef public_6d4a9e5
#undef public_6d4a9e7
#undef public_6d4a9ee
#undef public_6d4aa60
#undef public_6d4aa7a
#undef public_6d4aa90
