#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad4030);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4bd8);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad50d8);

#define public_6ad4ede _public_6ad4ede
#define public_6ad4f09 _public_6ad4f09
#define public_6ad4f2c _public_6ad4f2c
#define public_6ad4f43 _public_6ad4f43
#define public_6ad4f46 _public_6ad4f46
#define public_6ad4f59 _public_6ad4f59
#define public_6ad4f78 _public_6ad4f78
#define public_6ad4f89 _public_6ad4f89
#define public_6ad4f8c _public_6ad4f8c
#define public_6ad4f9b _public_6ad4f9b
#define public_6ad4fab _public_6ad4fab
#define public_6ad4fb2 _public_6ad4fb2
#define public_6ad4fbe _public_6ad4fbe
#define public_6ad4fca _public_6ad4fca
#define public_6ad4fe8 _public_6ad4fe8
#define public_6ad4ff9 _public_6ad4ff9
#define public_6ad5036 _public_6ad5036
#define public_6ad5060 _public_6ad5060
#define public_6ad506c _public_6ad506c
#define public_6ad507a _public_6ad507a
#define public_6ad507c _public_6ad507c
#define public_6ad509f _public_6ad509f
#define public_6ad50d1 _public_6ad50d1
#define public_6ad50d3 _public_6ad50d3

PROC_DECLARE(0x6ad4ed0, internal_6ad4ed0, public_6ad4ed0);
extern "C" NAKED register_t __cdecl internal_6ad4ed0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ds : [public_6adfc70]
        push edi
        public_6ad4ede : nop
        mov edx, dword ptr ds : [esi+0x10]
        cmp edx, 0xFFFFFFFF
        je public_6ad4f89
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
        jae public_6ad4f43
        public_6ad4f09 : nop
        mov ecx, dword ptr ds : [edi]
        mov ebx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        jl public_6ad4f2c
        cmp dword ptr ds : [edi+4], ebx
        jbe public_6ad4f2c
        push ebx
        push ecx
        push eax
        call public_6ad50d8
        add esp, 0xC
        test eax, eax
        jne public_6ad4f9b
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edi+4], ebx
        public_6ad4f2c : nop
        add edi, 8
        lea ecx, ds:[esi+0x2018]
        add eax, 0x1000
        cmp edi, ecx
        mov dword ptr ss : [ebp-4], eax
        jb public_6ad4f09
        jmp public_6ad4f46
        public_6ad4f43 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6ad4f46 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x10]
        lea edi, ds:[esi+0x18]
        mov dword ptr ss : [ebp-8], eax
        cmp edi, eax
        mov dword ptr ss : [ebp-4], ecx
        jae public_6ad4f8c
        public_6ad4f59 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        jl public_6ad4f78
        cmp dword ptr ds : [edi+4], ebx
        jbe public_6ad4f78
        push ebx
        push eax
        push dword ptr ss : [ebp-4]
        call public_6ad50d8
        add esp, 0xC
        test eax, eax
        jne public_6ad4f9b
        mov dword ptr ds : [edi+4], ebx
        public_6ad4f78 : nop
        add dword ptr ss : [ebp-4], 0x1000
        add edi, 8
        cmp edi, dword ptr ss : [ebp-8]
        jb public_6ad4f59
        jmp public_6ad4f8c
        public_6ad4f89 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6ad4f8c : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6adfc70]
        je public_6ad4fab
        jmp public_6ad4ede
        public_6ad4f9b : nop
        mov dword ptr ds : [public_6adfc70], esi
        sub dword ptr ds : [edi], ebx
        mov dword ptr ds : [esi+8], edi
        jmp public_6ad50d3
        public_6ad4fab : nop
        mov eax, offset public_6addc50
        mov edi, eax
        public_6ad4fb2 : nop
        cmp dword ptr ds : [edi+0x10], 0xFFFFFFFF
        je public_6ad4fbe
        cmp dword ptr ds : [edi+0xC], 0
        jne public_6ad4fca
        public_6ad4fbe : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        je public_6ad509f
        jmp public_6ad4fb2
        public_6ad4fca : nop
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
        jne public_6ad4ff9
        public_6ad4fe8 : nop
        cmp dword ptr ss : [ebp-4], 0x10
        jge public_6ad4ff9
        add eax, 8
        inc dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        je public_6ad4fe8
        public_6ad4ff9 : nop
        mov eax, dword ptr ss : [ebp-4]
        push 4
        shl eax, 0xC
        push 0x1000
        push eax
        push esi
        mov dword ptr ss : [ebp-8], eax
        call dword ptr ds : [public_6ada0bc]
        cmp eax, esi
        jne public_6ad50d1
        push 0
        push dword ptr ss : [ebp-8]
        push esi
        call public_6ad4030
        mov edx, dword ptr ss : [ebp-4]
        add esp, 0xC
        test edx, edx
        mov ecx, ebx
        jle public_6ad5060
        lea eax, ds:[esi+4]
        mov dword ptr ss : [ebp-4], edx
        public_6ad5036 : nop
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
        jne public_6ad5036
        public_6ad5060 : nop
        mov dword ptr ds : [public_6adfc70], edi
        lea eax, ds:[edi+0x2018]
        public_6ad506c : nop
        cmp ecx, eax
        jae public_6ad507c
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_6ad507a
        add ecx, 8
        jmp public_6ad506c
        public_6ad507a : nop
        cmp ecx, eax
        public_6ad507c : nop
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
        jmp public_6ad50d3
        public_6ad509f : nop
        call public_6ad4bd8
        test eax, eax
        je public_6ad50d1
        mov ecx, dword ptr ds : [eax+0x10]
        mov byte ptr ds : [ecx+8], bl
        lea edx, ds:[ecx+ebx+8]
        mov dword ptr ds : [public_6adfc70], eax
        mov dword ptr ds : [ecx], edx
        mov edx, 0xF0
        sub edx, ebx
        mov dword ptr ds : [ecx+4], edx
        movzx edx, bl
        sub dword ptr ds : [eax+0x18], edx
        lea eax, ds:[ecx+0x100]
        jmp public_6ad50d3
        public_6ad50d1 : nop
        xor eax, eax
        public_6ad50d3 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad4ed0)
    }
}

#undef public_6ad4ede
#undef public_6ad4f09
#undef public_6ad4f2c
#undef public_6ad4f43
#undef public_6ad4f46
#undef public_6ad4f59
#undef public_6ad4f78
#undef public_6ad4f89
#undef public_6ad4f8c
#undef public_6ad4f9b
#undef public_6ad4fab
#undef public_6ad4fb2
#undef public_6ad4fbe
#undef public_6ad4fca
#undef public_6ad4fe8
#undef public_6ad4ff9
#undef public_6ad5036
#undef public_6ad5060
#undef public_6ad506c
#undef public_6ad507a
#undef public_6ad507c
#undef public_6ad509f
#undef public_6ad50d1
#undef public_6ad50d3
