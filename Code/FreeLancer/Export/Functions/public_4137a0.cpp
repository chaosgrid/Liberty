#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402d30);
CLANG_FORWARD_PROC_SYMBOL(public_402e30);
CLANG_FORWARD_PROC_SYMBOL(public_404670);
CLANG_FORWARD_PROC_SYMBOL(public_4127d0);
CLANG_FORWARD_PROC_SYMBOL(public_413710);
CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_413e80);
CLANG_FORWARD_PROC_SYMBOL(public_414070);
CLANG_FORWARD_PROC_SYMBOL(public_417620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4137f5 _public_4137f5
#define public_413856 _public_413856
#define public_413871 _public_413871
#define public_41389a _public_41389a
#define public_4138a7 _public_4138a7
#define public_413942 _public_413942
#define public_413a73 _public_413a73
#define public_413a88 _public_413a88
#define public_413aa1 _public_413aa1
#define public_413c01 _public_413c01
#define public_413c14 _public_413c14
#define public_413c6d _public_413c6d
#define public_413d4a _public_413d4a
#define public_413d5d _public_413d5d
#define public_413dc4 _public_413dc4
#define public_413dd8 _public_413dd8

PROC_DECLARE(0x4137a0, internal_4137a0, public_4137a0);
extern "C" NAKED register_t __cdecl internal_4137a0()
{
    __asm
    {
        sub esp, 0xA4
        mov al, byte ptr ds : [public_61669a]
        test al, al
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x20], esi
        jne public_413dd8
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        cmp eax, ebx
        je public_413dd8
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        mov dword ptr ss : [esp+0x28], ecx
        je public_413dd8
        cmp dword ptr ds : [esi+0x30], ebx
        jne public_4137f5
        mov edx, dword ptr ds : [esi+0x14]
        lea eax, ss:[esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x34], edx
        call public_413710
        add esp, 4
        mov dword ptr ds : [esi+0x30], eax
        public_4137f5 : nop
        mov edi, dword ptr ds : [esi+0x30]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x30], edi
        je public_413dd8
        cmp dword ptr ds : [edi], ebx
        jne public_413871
        call public_417620
        mov ecx, dword ptr ds : [edi+0x15C]
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [public_61663c]
        mov eax, dword ptr ds : [public_616638]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        add ecx, 4
        call public_413df0
        mov esi, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [esi+0x20]
        cmp ecx, dword ptr ds : [public_6105b0]
        je public_413856
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_413856
        push eax
        mov ecx, offset public_616640
        call public_413e80
        mov dword ptr ds : [esi+0x14], ebx
        public_413856 : nop
        cmp dword ptr ds : [esi+0x14], ebx
        jne public_413871
        push ebx
        mov ecx, esi
        call public_4127d0
        cmp dword ptr ds : [esi+0x14], ebx
        jne public_413871
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [edi], ebx
        public_413871 : nop
        mov esi, dword ptr ds : [edi]
        cmp esi, ebx
        je public_413dd8
        mov eax, dword ptr ds : [public_6105b0]
        cmp dword ptr ds : [esi+0x20], eax
        je public_41389a
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_41389a
        push eax
        mov ecx, offset public_616640
        call public_413e80
        mov dword ptr ds : [esi+0x14], ebx
        public_41389a : nop
        cmp dword ptr ds : [esi+0x14], ebx
        jne public_4138a7
        push ebx
        mov ecx, esi
        call public_4127d0
        public_4138a7 : nop
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, ebx
        je public_413dd8
        mov ecx, dword ptr ds : [public_616670]
        push ecx
        call public_402d30
        mov ebp, dword ptr ds : [public_610850]
        xor edx, edx
        cmp ebp, 0x320
        mov ebp, dword ptr ss : [esp+0xBC]
        setg dl
        push ecx
        inc edx
        mov dword ptr ss : [esp+0x1C], edx
        fild dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [ebp]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        fsub qword ptr ds : [public_5c75e8]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [ebp+4]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        fsub qword ptr ds : [public_5c75e8]
        mov eax, dword ptr ds : [esi]
        push 1
        lea ecx, ss:[esp+0xAC]
        push 2
        fstp dword ptr ss : [esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0xB4], eax
        call public_402e30
        mov edx, dword ptr ds : [edi+4]
        mov ebp, eax
        mov eax, dword ptr ds : [public_6105b0]
        add esp, 0x14
        cmp edx, eax
        je public_413942
        mov ecx, edi
        call public_414070
        public_413942 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x98]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], ebx
        fild qword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ss : [esp+0x9C]
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [public_610854]
        mov dword ptr ss : [esp+0x2C], ebx
        fadd dword ptr ss : [esp+0x1C]
        sub esp, 8
        dec edx
        mov dword ptr ss : [esp+0x40], eax
        fstp dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x1C], edx
        fild qword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x60], 0
        lea edx, ss:[esp+0x48]
        fadd dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [edi+0x50]
        fld dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x64], eax
        fsub dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x68], 0x3F800000
        mov ecx, dword ptr ds : [edi+0x58]
        lea eax, ss:[esp+0x6C]
        fadd dword ptr ds : [public_5c75dc]
        mov dword ptr ss : [esp+0x6C], ecx
        lea ecx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        push ebx
        push eax
        push ecx
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_413dd8
        fld dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [public_610850]
        fsub dword ptr ss : [esp+0x34]
        sub esp, 8
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        fadd dword ptr ds : [public_5c75dc]
        lea edx, ss:[esp+0x68]
        lea eax, ss:[esp+0x60]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        push ebx
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_413dd8
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [esi+8]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        cmp ebx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x14], ebx
        je public_413dd8
        public_413a73 : nop
        mov edx, dword ptr ds : [public_6105b0]
        cmp dword ptr ds : [edi+4], edx
        movzx esi, byte ptr ds : [ebx]
        je public_413a88
        mov ecx, edi
        call public_414070
        public_413a88 : nop
        fild dword ptr ds : [edi+esi*4+8]
        mov eax, dword ptr ds : [public_6105b0]
        cmp dword ptr ds : [edi+4], eax
        fstp dword ptr ss : [esp+0x24]
        je public_413aa1
        mov ecx, edi
        call public_414070
        public_413aa1 : nop
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        shl esi, 4
        lea esi, ds:[esi+edi+0x4C]
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x28], esi
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 5
        jnp public_413dc4
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x3C]
        fnstsw ax
        test ah, 1
        je public_413dd8
        mov edx, dword ptr ss : [esp+0x20]
        mov al, byte ptr ds : [edx+0x20]
        test al, al
        je public_413c6d
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [esi]
        sub esp, 8
        fstp dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x74], edx
        fld dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [public_610850]
        fadd dword ptr ss : [esp+0x24]
        dec edx
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x70], ecx
        fadd dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x78], eax
        lea eax, ss:[esp+0x78]
        fstp dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x7C], ecx
        fld dword ptr ss : [esp+0x58]
        lea ecx, ss:[esp+0x70]
        fsub dword ptr ss : [esp+0x50]
        lea edx, ss:[esp+0x58]
        fadd dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        push 0
        push eax
        push ecx
        push edx
        lea eax, ss:[esp+0x60]
        push eax
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_413c6d
        mov eax, dword ptr ss : [esp+0x20]
        movzx ecx, byte ptr ds : [eax+0x1C]
        movzx ebx, byte ptr ds : [public_616677]
        movzx edx, byte ptr ds : [eax+0x1D]
        movzx eax, byte ptr ds : [eax+0x1E]
        mov esi, dword ptr ss : [ebp+0xC]
        shl ebx, 8
        or ebx, ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        shl ebx, 8
        or ebx, edx
        shl ebx, 8
        or ebx, eax
        lea eax, ds:[esi+1]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [ebp+0xC], eax
        jle public_413c14
        add eax, 0x20
        mov dword ptr ss : [ebp+0x10], eax
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        test edx, edx
        mov dword ptr ss : [esp+0x44], eax
        je public_413c01
        mov ecx, esi
        imul ecx, 0x2C
        mov esi, edx
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x30]
        public_413c01 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 4
        mov dword ptr ss : [ebp+8], ecx
        public_413c14 : nop
        mov eax, dword ptr ss : [ebp+8]
        imul esi, 0x2C
        add esi, eax
        mov eax, dword ptr ss : [esp+0x48]
        mov edx, esi
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edx+0xC], ecx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ss : [esp+0x68]
        lea edx, ds:[esi+0x18]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [esi+0x28], ebx
        mov esi, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0xC], ecx
        public_413c6d : nop
        fld dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ss : [esp+0x5C]
        fst dword ptr ss : [esp+0x84]
        fcomp dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x78], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x8C], eax
        mov dword ptr ss : [esp+0x80], ecx
        mov ecx, dword ptr ds : [esi+8]
        fnstsw ax
        mov dword ptr ss : [esp+0x88], edx
        test ah, 1
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x90], ecx
        mov dword ptr ss : [esp+0x94], edx
        jne public_413dc4
        movzx esi, byte ptr ds : [public_616677]
        movzx eax, byte ptr ds : [public_616674]
        movzx ecx, byte ptr ds : [public_616675]
        movzx edx, byte ptr ds : [public_616676]
        mov ebx, dword ptr ss : [ebp+0xC]
        shl esi, 8
        or esi, eax
        shl esi, 8
        or esi, ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        shl esi, 8
        lea eax, ds:[ebx+1]
        or esi, edx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [ebp+0xC], eax
        jle public_413d5d
        add eax, 0x20
        mov dword ptr ss : [ebp+0x10], eax
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        test edx, edx
        mov dword ptr ss : [esp+0x44], eax
        je public_413d4a
        mov ecx, ebx
        imul ecx, 0x2C
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        mov esi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x28]
        public_413d4a : nop
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x48]
        add esp, 4
        mov dword ptr ss : [ebp+8], edx
        public_413d5d : nop
        mov eax, dword ptr ss : [ebp+8]
        imul ebx, 0x2C
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ss : [esp+0x7C]
        add ebx, eax
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x80]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x88]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ss : [esp+0x8C]
        mov eax, 0x3F800000
        mov dword ptr ds : [ebx+0x10], eax
        mov dword ptr ds : [ebx+0x14], eax
        lea eax, ds:[ebx+0x18]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x90]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x94]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [ebx+0x28], esi
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0xC], edx
        public_413dc4 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+0xC]
        inc ebx
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x14], ebx
        jne public_413a73
        public_413dd8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA4
        ret 0xC
        UNREACHABLE_TRAP(0x4137a0)
    }
}

#undef public_4137f5
#undef public_413856
#undef public_413871
#undef public_41389a
#undef public_4138a7
#undef public_413942
#undef public_413a73
#undef public_413a88
#undef public_413aa1
#undef public_413c01
#undef public_413c14
#undef public_413c6d
#undef public_413d4a
#undef public_413d5d
#undef public_413dc4
#undef public_413dd8
