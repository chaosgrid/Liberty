#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2b2);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2b8);
CLANG_FORWARD_PROC_SYMBOL(public_6d43a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d48472);

#define public_6d43ab3 _public_6d43ab3
#define public_6d43ab5 _public_6d43ab5
#define public_6d43ad0 _public_6d43ad0
#define public_6d43b0b _public_6d43b0b
#define public_6d43b28 _public_6d43b28
#define public_6d43b37 _public_6d43b37
#define public_6d43b3e _public_6d43b3e
#define public_6d43b4e _public_6d43b4e
#define public_6d43b51 _public_6d43b51
#define public_6d43b62 _public_6d43b62
#define public_6d43b6a _public_6d43b6a
#define public_6d43b72 _public_6d43b72
#define public_6d43baf _public_6d43baf
#define public_6d43bb1 _public_6d43bb1
#define public_6d43be0 _public_6d43be0
#define public_6d43bff _public_6d43bff
#define public_6d43c20 _public_6d43c20
#define public_6d43c23 _public_6d43c23
#define public_6d43c63 _public_6d43c63
#define public_6d43c86 _public_6d43c86
#define public_6d43ca8 _public_6d43ca8
#define public_6d43cce _public_6d43cce
#define public_6d43ce8 _public_6d43ce8
#define public_6d43d0d _public_6d43d0d
#define public_6d43d1d _public_6d43d1d
#define public_6d43d64 _public_6d43d64
#define public_6d43d66 _public_6d43d66

PROC_DECLARE(0x6d43a60, internal_6d43a60, public_6d43a60);
extern "C" NAKED register_t __cdecl internal_6d43a60()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        push esi
        mov esi, dword ptr ss : [ebp+8]
        fld dword ptr ds : [esi+0x130]
        fcomp qword ptr ds : [public_6d5e4a8]
        fnstsw ax
        test ah, 0x44
        jnp public_6d43d66
        push ebx
        push edi
        push 8
        pop ecx
        cmp byte ptr ds : [esi+0x117], cl
        ja public_6d43b0b
        lea ecx, ds:[esi+0x134]
        fld dword ptr ds : [ecx]
        fcomp qword ptr ds : [public_6d5f598]
        fnstsw ax
        test ah, 0x41
        jne public_6d43ab3
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [esi+0x130]
        fdivr qword ptr ds : [public_6d5e498]
        jmp public_6d43ab5
        public_6d43ab3 : nop
        fld1 
        public_6d43ab5 : nop
        mov edi, 0x100
        fstp qword ptr ss : [ebp-0x20]
        push edi
        push esi
        call public_6d48472
        and dword ptr ss : [ebp+8], 0
        pop ecx
        pop ecx
        mov dword ptr ds : [esi+0x138], eax
        public_6d43ad0 : nop
        fild dword ptr ss : [ebp+8]
        fmul qword ptr ds : [public_6d5f590]
        fld qword ptr ss : [ebp-0x20]
        call public_6d2f2b8
        fmul qword ptr ds : [public_6d5e4b0]
        fadd qword ptr ds : [public_6d5f588]
        call public_6d2f2b2
        mov edx, dword ptr ss : [ebp+8]
        inc dword ptr ss : [ebp+8]
        cmp dword ptr ss : [ebp+8], edi
        mov ecx, dword ptr ds : [esi+0x138]
        mov byte ptr ds : [edx+ecx], al
        jl public_6d43ad0
        jmp public_6d43d64
        public_6d43b0b : nop
        test byte ptr ds : [esi+0x116], 2
        je public_6d43b37
        movzx eax, byte ptr ds : [esi+0x150]
        movzx edx, byte ptr ds : [esi+0x151]
        cmp edx, eax
        jle public_6d43b28
        mov eax, edx
        public_6d43b28 : nop
        movzx edx, byte ptr ds : [esi+0x152]
        cmp edx, eax
        jle public_6d43b3e
        mov eax, edx
        jmp public_6d43b3e
        public_6d43b37 : nop
        movzx eax, byte ptr ds : [esi+0x153]
        public_6d43b3e : nop
        xor edi, edi
        cmp eax, edi
        jle public_6d43b4e
        push 0x10
        pop edx
        sub edx, eax
        mov dword ptr ss : [ebp-4], edx
        jmp public_6d43b51
        public_6d43b4e : nop
        mov dword ptr ss : [ebp-4], edi
        public_6d43b51 : nop
        test byte ptr ds : [esi+0x61], 4
        je public_6d43b62
        push 5
        pop eax
        cmp dword ptr ss : [ebp-4], eax
        jge public_6d43b62
        mov dword ptr ss : [ebp-4], eax
        public_6d43b62 : nop
        cmp dword ptr ss : [ebp-4], ecx
        jle public_6d43b6a
        mov dword ptr ss : [ebp-4], ecx
        public_6d43b6a : nop
        cmp dword ptr ss : [ebp-4], edi
        jge public_6d43b72
        mov dword ptr ss : [ebp-4], edi
        public_6d43b72 : nop
        sub ecx, dword ptr ss : [ebp-4]
        movzx eax, byte ptr ss : [ebp-4]
        xor ebx, ebx
        inc ebx
        shl ebx, cl
        mov dword ptr ss : [ebp-0x10], ecx
        lea ecx, ds:[esi+0x134]
        mov dword ptr ds : [esi+0x12C], eax
        mov dword ptr ss : [ebp-0x14], ebx
        fld dword ptr ds : [ecx]
        fcomp qword ptr ds : [public_6d5f598]
        fnstsw ax
        test ah, 0x41
        jne public_6d43baf
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [esi+0x130]
        fdivr qword ptr ds : [public_6d5e498]
        jmp public_6d43bb1
        public_6d43baf : nop
        fld1 
        public_6d43bb1 : nop
        mov eax, ebx
        fstp qword ptr ss : [ebp-0x20]
        shl eax, 2
        push eax
        push esi
        call public_6d48472
        test word ptr ds : [esi+0x60], 0x480
        pop ecx
        pop ecx
        mov dword ptr ds : [esi+0x144], eax
        mov dword ptr ss : [ebp+8], edi
        je public_6d43cce
        cmp ebx, edi
        jle public_6d43bff
        mov edi, 0x200
        public_6d43be0 : nop
        push edi
        push esi
        call public_6d48472
        mov edx, dword ptr ss : [ebp+8]
        inc dword ptr ss : [ebp+8]
        cmp dword ptr ss : [ebp+8], ebx
        pop ecx
        pop ecx
        mov ecx, dword ptr ds : [esi+0x144]
        mov dword ptr ds : [ecx+edx*4], eax
        jl public_6d43be0
        xor edi, edi
        public_6d43bff : nop
        fld1 
        shl ebx, 8
        test ebx, ebx
        fdiv qword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x18], ebx
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp-0x14], ebx
        fstp qword ptr ss : [ebp-0x20]
        fild dword ptr ss : [ebp-0x18]
        jge public_6d43c20
        fadd qword ptr ds : [public_6d60ef8]
        public_6d43c20 : nop
        fstp qword ptr ss : [ebp-0x28]
        public_6d43c23 : nop
        fild dword ptr ss : [ebp+8]
        fadd qword ptr ds : [public_6d5f588]
        fmul qword ptr ds : [public_6d60ef0]
        fld qword ptr ss : [ebp-0x20]
        call public_6d2f2b8
        fmul qword ptr ss : [ebp-0x28]
        call public_6d2f2b2
        cmp edi, eax
        mov dword ptr ss : [ebp-0x18], eax
        ja public_6d43c86
        mov eax, dword ptr ss : [ebp+8]
        xor ecx, ecx
        mov ch, al
        mov dword ptr ss : [ebp-8], 0xFF
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ss : [ebp-4]
        or dword ptr ss : [ebp-0xC], eax
        sar dword ptr ss : [ebp-8], cl
        public_6d43c63 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [esi+0x144]
        mov ebx, edi
        shr ebx, cl
        mov cx, word ptr ss : [ebp-0xC]
        and eax, edi
        mov eax, dword ptr ds : [edx+eax*4]
        inc edi
        cmp edi, dword ptr ss : [ebp-0x18]
        mov word ptr ds : [eax+ebx*2], cx
        jbe public_6d43c63
        public_6d43c86 : nop
        inc dword ptr ss : [ebp+8]
        cmp dword ptr ss : [ebp+8], 0x100
        jl public_6d43c23
        cmp edi, dword ptr ss : [ebp-0x14]
        jae public_6d43d64
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-8], 0xFF
        sar dword ptr ss : [ebp-8], cl
        public_6d43ca8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [esi+0x144]
        mov ebx, edi
        shr ebx, cl
        and eax, edi
        mov eax, dword ptr ds : [edx+eax*4]
        or word ptr ds : [eax+ebx*2], 0xFFFF
        inc edi
        cmp edi, dword ptr ss : [ebp-0x14]
        jb public_6d43ca8
        jmp public_6d43d64
        public_6d43cce : nop
        cmp ebx, edi
        jle public_6d43d64
        mov eax, dword ptr ss : [ebp-4]
        lea eax, ds : [eax*4+public_6d6d3c0]
        mov dword ptr ss : [ebp-0x18], eax
        mov edi, 0x200
        public_6d43ce8 : nop
        push edi
        push esi
        call public_6d48472
        mov edx, dword ptr ds : [esi+0x144]
        pop ecx
        pop ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx+ecx*4], eax
        mov eax, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [eax]
        imul eax, ecx
        shr eax, 4
        xor ebx, ebx
        mov dword ptr ss : [ebp-0xC], eax
        public_6d43d0d : nop
        mov eax, dword ptr ss : [ebp-0xC]
        fild dword ptr ss : [ebp-0xC]
        test eax, eax
        jge public_6d43d1d
        fadd qword ptr ds : [public_6d60ef8]
        public_6d43d1d : nop
        fmul qword ptr ds : [public_6d60ee8]
        fld qword ptr ss : [ebp-0x20]
        call public_6d2f2b8
        fmul qword ptr ds : [public_6d60ee0]
        fadd qword ptr ds : [public_6d5f588]
        call public_6d2f2b2
        mov ecx, dword ptr ds : [esi+0x144]
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+edx*4]
        add dword ptr ss : [ebp-0xC], 0x100
        mov word ptr ds : [ebx+ecx], ax
        inc ebx
        inc ebx
        cmp ebx, edi
        jl public_6d43d0d
        inc dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ss : [ebp-0x14]
        jl public_6d43ce8
        public_6d43d64 : nop
        pop edi
        pop ebx
        public_6d43d66 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d43a60)
    }
}

#undef public_6d43ab3
#undef public_6d43ab5
#undef public_6d43ad0
#undef public_6d43b0b
#undef public_6d43b28
#undef public_6d43b37
#undef public_6d43b3e
#undef public_6d43b4e
#undef public_6d43b51
#undef public_6d43b62
#undef public_6d43b6a
#undef public_6d43b72
#undef public_6d43baf
#undef public_6d43bb1
#undef public_6d43be0
#undef public_6d43bff
#undef public_6d43c20
#undef public_6d43c23
#undef public_6d43c63
#undef public_6d43c86
#undef public_6d43ca8
#undef public_6d43cce
#undef public_6d43ce8
#undef public_6d43d0d
#undef public_6d43d1d
#undef public_6d43d64
#undef public_6d43d66
