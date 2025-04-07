#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ae9);

#define public_6d37b4e _public_6d37b4e
#define public_6d37bdb _public_6d37bdb
#define public_6d37bf2 _public_6d37bf2
#define public_6d37c01 _public_6d37c01
#define public_6d37c5d _public_6d37c5d
#define public_6d37c67 _public_6d37c67
#define public_6d37c80 _public_6d37c80
#define public_6d37d2c _public_6d37d2c

PROC_DECLARE(0x6d37ae9, internal_6d37ae9, public_6d37ae9);
extern "C" NAKED register_t __cdecl internal_6d37ae9()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
/*FIXUP push offset _public_6d2f87d @0x6d37af2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2f87d
        mov ebx, ecx
        push 0x100
        push 0x10
        lea eax, ds:[ebx+0x30]
        push eax
        mov dword ptr ds : [ebx], offset public_6d5f5b8
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0x18], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+0x1050], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ebx+0x1054], ecx
        push 6
        lea edi, ds:[ebx+0x1030]
        lea esi, ds:[eax+0x28]
        pop ecx
        rep movsd
        xor esi, esi
        cmp dword ptr ds : [eax+0x40], esi
        mov ecx, offset public_6d6c9c0
        jne public_6d37b4e
        mov ecx, offset public_6d6c940
        public_6d37b4e : nop
        fld dword ptr ds : [public_6d5f5cc]
        mov dword ptr ds : [ebx+0x2C], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        shr ecx, 3
        mov dword ptr ds : [ebx+0x1068], ecx
        xor ecx, ecx
        cmp dword ptr ss : [ebp+0xC], esi
        mov dword ptr ds : [ebx+0x1048], esi
        setne cl
        mov dword ptr ds : [ebx+0x104C], esi
        mov dword ptr ds : [ebx+0xC], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+8], ecx
        mov ecx, dword ptr ds : [eax+0x44]
        cmp ecx, esi
        mov dword ptr ds : [ebx+0x10], ecx
        je public_6d37bdb
        mov ecx, dword ptr ds : [eax+0x44]
        mov edx, ecx
        shr edx, 0x10
        movzx edx, dl
        mov dword ptr ss : [ebp+0xC], edx
        mov edx, ecx
        shr edx, 8
        fild dword ptr ss : [ebp+0xC]
        movzx edx, dl
        fmul st, st(1)
        mov dword ptr ss : [ebp+0xC], edx
        movzx edx, cl
        fstp dword ptr ss : [ebp-0x10]
        fild dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        shr ecx, 0x18
        lea edi, ds:[ebx+0x1C]
        fmul st, st(1)
        lea esi, ss:[ebp-0x10]
        fstp dword ptr ss : [ebp-0xC]
        fild dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        fmul st, st(1)
        fstp dword ptr ss : [ebp-8]
        fild dword ptr ss : [ebp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-4]
        movsd 
        movsd 
        movsd 
        movsd 
        xor esi, esi
        public_6d37bdb : nop
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, 0x29
        je public_6d37bf2
        cmp ecx, 0x28
        je public_6d37bf2
        fstp st(0)
        mov dword ptr ds : [ebx+0x14], esi
        jmp public_6d37c80
        public_6d37bf2 : nop
        mov dword ptr ds : [ebx+0x14], 1
        cmp dword ptr ds : [eax+0x48], esi
        je public_6d37c5d
        lea ecx, ds:[ebx+0x34]
        public_6d37c01 : nop
        mov edx, dword ptr ds : [eax+0x48]
        movzx edx, byte ptr ds : [esi+edx]
        mov dword ptr ss : [ebp+0xC], edx
        add esi, 4
        fild dword ptr ss : [ebp+0xC]
        fmul st, st(1)
        fstp dword ptr ds : [ecx-4]
        mov edx, dword ptr ds : [eax+0x48]
        movzx edx, byte ptr ds : [esi+edx-3]
        mov dword ptr ss : [ebp+0xC], edx
        fild dword ptr ss : [ebp+0xC]
        fmul st, st(1)
        fstp dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+0x48]
        movzx edx, byte ptr ds : [esi+edx-2]
        mov dword ptr ss : [ebp+0xC], edx
        add ecx, 0x10
        cmp esi, 0x400
        fild dword ptr ss : [ebp+0xC]
        fmul st, st(1)
        fstp dword ptr ds : [ecx-0xC]
        mov edx, dword ptr ds : [eax+0x48]
        movzx edx, byte ptr ds : [esi+edx-1]
        mov dword ptr ss : [ebp+0xC], edx
        fild dword ptr ss : [ebp+0xC]
        fmul st, st(1)
        fstp dword ptr ds : [ecx-8]
        jb public_6d37c01
        fstp st(0)
        jmp public_6d37c80
        public_6d37c5d : nop
        fstp st(0)
        lea eax, ds:[ebx+0x38]
        mov ecx, 0x100
        public_6d37c67 : nop
        fld1 
        fstp dword ptr ds : [eax+4]
        fld1 
        fstp dword ptr ds : [eax]
        fld1 
        add eax, 0x10
        dec ecx
        fstp dword ptr ds : [eax-0x14]
        fld1 
        fstp dword ptr ds : [eax-0x18]
        jne public_6d37c67
        public_6d37c80 : nop
        mov eax, dword ptr ds : [ebx+0x1034]
        mov edi, dword ptr ds : [ebx+0x103C]
        mov ecx, dword ptr ds : [ebx+0x1038]
        sub edi, eax
        mov eax, dword ptr ds : [ebx+0x1040]
        mov dword ptr ds : [ebx+0x105C], edi
        mov edi, dword ptr ds : [ebx+0x1044]
        sub edi, eax
        mov eax, dword ptr ds : [ebx+0x1068]
        lea edx, ds:[ebx+0x1030]
        mov esi, dword ptr ds : [edx]
        sub ecx, esi
        mov dword ptr ds : [ebx+0x1060], edi
        mov edi, eax
        imul edi, ecx
        mov dword ptr ds : [ebx+0x1058], ecx
        xor ecx, ecx
        cmp dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [ebx+0x1064], edi
        je public_6d37d2c
        imul eax, esi
        mov esi, dword ptr ds : [ebx+0x1050]
        imul esi, dword ptr ds : [ebx+0x1034]
        add eax, esi
        mov esi, dword ptr ds : [ebx+0x1054]
        imul esi, dword ptr ds : [ebx+0x1040]
        add eax, esi
        add dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [ebx+0x1058]
        mov dword ptr ds : [ebx+0x1038], eax
        mov eax, dword ptr ds : [ebx+0x105C]
        mov dword ptr ds : [ebx+0x103C], eax
        mov eax, dword ptr ds : [ebx+0x1060]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ebx+0x1034], ecx
        mov dword ptr ds : [ebx+0x1040], ecx
        mov dword ptr ds : [ebx+0x1044], eax
        public_6d37d2c : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d37ae9)
    }
}

#undef public_6d37b4e
#undef public_6d37bdb
#undef public_6d37bf2
#undef public_6d37c01
#undef public_6d37c5d
#undef public_6d37c67
#undef public_6d37c80
#undef public_6d37d2c
