#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6406);
CLANG_FORWARD_PROC_SYMBOL(public_6ef66fe);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6906);
CLANG_FORWARD_PROC_SYMBOL(public_6ef85b0);

#define public_6ef670c _public_6ef670c
#define public_6ef6737 _public_6ef6737
#define public_6ef675a _public_6ef675a
#define public_6ef6771 _public_6ef6771
#define public_6ef6774 _public_6ef6774
#define public_6ef6787 _public_6ef6787
#define public_6ef67a6 _public_6ef67a6
#define public_6ef67b7 _public_6ef67b7
#define public_6ef67ba _public_6ef67ba
#define public_6ef67c9 _public_6ef67c9
#define public_6ef67d9 _public_6ef67d9
#define public_6ef67e0 _public_6ef67e0
#define public_6ef67ec _public_6ef67ec
#define public_6ef67f8 _public_6ef67f8
#define public_6ef6816 _public_6ef6816
#define public_6ef6827 _public_6ef6827
#define public_6ef6864 _public_6ef6864
#define public_6ef688e _public_6ef688e
#define public_6ef689a _public_6ef689a
#define public_6ef68a8 _public_6ef68a8
#define public_6ef68aa _public_6ef68aa
#define public_6ef68cd _public_6ef68cd
#define public_6ef68ff _public_6ef68ff
#define public_6ef6901 _public_6ef6901

PROC_DECLARE(0x6ef66fe, internal_6ef66fe, public_6ef66fe);
extern "C" NAKED register_t __cdecl internal_6ef66fe()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ds : [public_6f00528]
        push edi
        public_6ef670c : nop
        mov edx, dword ptr ds : [esi+0x10]
        cmp edx, 0xFFFFFFFF
        je public_6ef67b7
        mov edi, dword ptr ds : [esi+8]
        lea ecx, ds:[esi+0x2018]
        mov eax, edi
        sub eax, esi
        sub eax, 0x18
        sar eax, 3
        shl eax, 0xC
        add eax, edx
        cmp edi, ecx
        mov dword ptr ss : [ebp-4], eax
        jae public_6ef6771
        public_6ef6737 : nop
        mov ecx, dword ptr ds : [edi]
        mov ebx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        jl public_6ef675a
        cmp dword ptr ds : [edi+4], ebx
        jbe public_6ef675a
        push ebx
        push ecx
        push eax
        call public_6ef6906
        add esp, 0xC
        test eax, eax
        jne public_6ef67c9
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edi+4], ebx
        public_6ef675a : nop
        add edi, 8
        lea ecx, ds:[esi+0x2018]
        add eax, 0x1000
        cmp edi, ecx
        mov dword ptr ss : [ebp-4], eax
        jb public_6ef6737
        jmp public_6ef6774
        public_6ef6771 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6ef6774 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x10]
        lea edi, ds:[esi+0x18]
        mov dword ptr ss : [ebp-8], eax
        cmp edi, eax
        mov dword ptr ss : [ebp-4], ecx
        jae public_6ef67ba
        public_6ef6787 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        jl public_6ef67a6
        cmp dword ptr ds : [edi+4], ebx
        jbe public_6ef67a6
        push ebx
        push eax
        push dword ptr ss : [ebp-4]
        call public_6ef6906
        add esp, 0xC
        test eax, eax
        jne public_6ef67c9
        mov dword ptr ds : [edi+4], ebx
        public_6ef67a6 : nop
        add dword ptr ss : [ebp-4], 0x1000
        add edi, 8
        cmp edi, dword ptr ss : [ebp-8]
        jb public_6ef6787
        jmp public_6ef67ba
        public_6ef67b7 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6ef67ba : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6f00528]
        je public_6ef67d9
        jmp public_6ef670c
        public_6ef67c9 : nop
        mov dword ptr ds : [public_6f00528], esi
        sub dword ptr ds : [edi], ebx
        mov dword ptr ds : [esi+8], edi
        jmp public_6ef6901
        public_6ef67d9 : nop
        mov eax, offset public_6efe508
        mov edi, eax
        public_6ef67e0 : nop
        cmp dword ptr ds : [edi+0x10], 0xFFFFFFFF
        je public_6ef67ec
        cmp dword ptr ds : [edi+0xC], 0
        jne public_6ef67f8
        public_6ef67ec : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        je public_6ef68cd
        jmp public_6ef67e0
        public_6ef67f8 : nop
        mov ebx, dword ptr ds : [edi+0xC]
        and dword ptr ss : [ebp-4], 0
        mov esi, ebx
        mov eax, ebx
        sub esi, edi
        sub esi, 0x18
        sar esi, 3
        shl esi, 0xC
        add esi, dword ptr ds : [edi+0x10]
        cmp dword ptr ds : [ebx], 0xFFFFFFFF
        jne public_6ef6827
        public_6ef6816 : nop
        cmp dword ptr ss : [ebp-4], 0x10
        jge public_6ef6827
        add eax, 8
        inc dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        je public_6ef6816
        public_6ef6827 : nop
        mov eax, dword ptr ss : [ebp-4]
        push 4
        shl eax, 0xC
        push 0x1000
        push eax
        push esi
        mov dword ptr ss : [ebp-8], eax
        call dword ptr ds : [public_6efc0b0]
        cmp eax, esi
        jne public_6ef68ff
        push 0
        push dword ptr ss : [ebp-8]
        push esi
        call public_6ef85b0
        mov edx, dword ptr ss : [ebp-4]
        add esp, 0xC
        test edx, edx
        mov ecx, ebx
        jle public_6ef688e
        lea eax, ds:[esi+4]
        mov dword ptr ss : [ebp-4], edx
        public_6ef6864 : nop
        or byte ptr ds : [eax+0xF4], 0xFF
        lea edx, ds:[eax+4]
        mov dword ptr ds : [eax-4], edx
        mov edx, 0xF0
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], 0xF1
        add eax, 0x1000
        add ecx, 8
        dec dword ptr ss : [ebp-4]
        jne public_6ef6864
        public_6ef688e : nop
        mov dword ptr ds : [public_6f00528], edi
        lea eax, ds:[edi+0x2018]
        public_6ef689a : nop
        cmp ecx, eax
        jae public_6ef68aa
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_6ef68a8
        add ecx, 8
        jmp public_6ef689a
        public_6ef68a8 : nop
        cmp ecx, eax
        public_6ef68aa : nop
        sbb eax, eax
        and eax, ecx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ss : [ebp+8]
        mov byte ptr ds : [esi+8], al
        mov dword ptr ds : [edi+8], ebx
        sub dword ptr ds : [ebx], eax
        sub dword ptr ds : [esi+4], eax
        lea ecx, ds:[esi+eax+8]
        lea eax, ds:[esi+0x100]
        mov dword ptr ds : [esi], ecx
        jmp public_6ef6901
        public_6ef68cd : nop
        call public_6ef6406
        test eax, eax
        je public_6ef68ff
        mov ecx, dword ptr ds : [eax+0x10]
        mov byte ptr ds : [ecx+8], bl
        lea edx, ds:[ecx+ebx+8]
        mov dword ptr ds : [public_6f00528], eax
        mov dword ptr ds : [ecx], edx
        mov edx, 0xF0
        sub edx, ebx
        mov dword ptr ds : [ecx+4], edx
        movzx edx, bl
        sub dword ptr ds : [eax+0x18], edx
        lea eax, ds:[ecx+0x100]
        jmp public_6ef6901
        public_6ef68ff : nop
        xor eax, eax
        public_6ef6901 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef66fe)
    }
}

#undef public_6ef670c
#undef public_6ef6737
#undef public_6ef675a
#undef public_6ef6771
#undef public_6ef6774
#undef public_6ef6787
#undef public_6ef67a6
#undef public_6ef67b7
#undef public_6ef67ba
#undef public_6ef67c9
#undef public_6ef67d9
#undef public_6ef67e0
#undef public_6ef67ec
#undef public_6ef67f8
#undef public_6ef6816
#undef public_6ef6827
#undef public_6ef6864
#undef public_6ef688e
#undef public_6ef689a
#undef public_6ef68a8
#undef public_6ef68aa
#undef public_6ef68cd
#undef public_6ef68ff
#undef public_6ef6901
