#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b40);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b80);
CLANG_FORWARD_PROC_SYMBOL(public_4c8bc0);
CLANG_FORWARD_PROC_SYMBOL(public_583e30);
CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_583e78 _public_583e78
#define public_583ec9 _public_583ec9
#define public_583f26 _public_583f26
#define public_583fd6 _public_583fd6
#define public_584035 _public_584035
#define public_5840aa _public_5840aa
#define public_5840d9 _public_5840d9
#define public_5840db _public_5840db
#define public_5840f0 _public_5840f0
#define public_58411f _public_58411f
#define public_584121 _public_584121
#define public_584136 _public_584136
#define public_5841d7 _public_5841d7
#define public_584278 _public_584278
#define public_584288 _public_584288

PROC_DECLARE(0x583e30, internal_583e30, public_583e30);
extern "C" NAKED register_t __cdecl internal_583e30()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x3C
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        push eax
        push edi
        call public_59dd00
        push edi
        call public_59dbf0
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ss : [ebp+0xC]
        and cl, 0xFB
        or cl, 3
        add esp, 0xC
        test esi, esi
        mov byte ptr ds : [edi+0x6C], cl
        je public_584288
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_584288
/*FIXUP public_583e78 : nop
        push offset public_5e4ccc @0x583e78*/
  FIXUP public_583e78 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4ccc
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_583ec9
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x18]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x20]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fld qword ptr ss : [esp+0x20]
        fstp dword ptr ds : [edi+0x4E4]
        fld qword ptr ss : [esp+0x18]
        fstp dword ptr ds : [edi+0x4E8]
        fstp dword ptr ds : [edi+0x4EC]
/*FIXUP public_583ec9 : nop
        push offset public_5e1708 @0x583ec9*/
  FIXUP public_583ec9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1708
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_583f26
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x20]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x30]
        fld qword ptr ss : [esp+0x20]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x38]
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        lea edx, ds:[edi+0x488]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
/*FIXUP public_583f26 : nop
        push offset public_5e4cc0 @0x583f26*/
  FIXUP public_583f26 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4cc0
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_583fd6
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x18]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x20]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fld qword ptr ss : [esp+0x20]
        fstp dword ptr ds : [edi+0x37C]
        lea ebx, ds:[edi+0x358]
        fld qword ptr ss : [esp+0x18]
        fstp dword ptr ds : [edi+0x380]
        fstp dword ptr ds : [edi+0x384]
        mov ecx, dword ptr ds : [edi+0x384]
        fld dword ptr ds : [edi+0x37C]
        mov edx, dword ptr ds : [edi+0x380]
        fmul dword ptr ds : [public_5c77f4]
        push ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, ebx
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x14], edx
        call public_4c8b40
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c77f4]
        push ecx
        mov ecx, ebx
        fstp dword ptr ss : [esp]
        call public_4c8b80
        fld dword ptr ss : [esp+0x14]
        push ecx
        fmul dword ptr ds : [public_5c77f4]
        mov ecx, ebx
        fstp dword ptr ss : [esp]
        call public_4c8bc0
/*FIXUP public_583fd6 : nop
        push offset public_5e4cb4 @0x583fd6*/
  FIXUP public_583fd6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4cb4
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_584035
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x20]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x3C]
        fld qword ptr ss : [esp+0x20]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x44]
        call dword ptr ds : [public_5c6cfc]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x40]
        lea eax, ds:[edi+0x470]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        jmp public_5840aa
/*FIXUP public_584035 : nop
        push offset public_5dd344 @0x584035*/
  FIXUP public_584035 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd344
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5840aa
        lea ebx, ds:[edi+0x2F8]
        mov ecx, ebx
        call public_4215b0
        mov ecx, dword ptr ss : [ebp+8]
        xor eax, eax
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x2C], eax
        mov dword ptr ds : [ebx+0x28], eax
        mov dword ptr ds : [ebx+0x24], eax
        je public_5840aa
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_5840aa
        mov eax, dword ptr ds : [eax]
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        call dword ptr ds : [eax+0x90]
        lea eax, ds:[edi+0x31C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+0x47C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
/*FIXUP public_5840aa : nop
        push offset public_5e4ca8 @0x5840aa*/
  FIXUP public_5840aa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4ca8
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5840f0
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_5840d9
        mov eax, 1
        jmp public_5840db
        public_5840d9 : nop
        xor eax, eax
        public_5840db : nop
        mov cl, byte ptr ds : [edi+0x518]
        shl al, 2
        xor al, cl
        and al, 4
        xor al, cl
        mov byte ptr ds : [edi+0x518], al
/*FIXUP public_5840f0 : nop
        push offset public_5e4c98 @0x5840f0*/
  FIXUP public_5840f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4c98
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_584136
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_58411f
        mov eax, 1
        jmp public_584121
        public_58411f : nop
        xor eax, eax
        public_584121 : nop
        mov cl, byte ptr ds : [edi+0x518]
        shl al, 3
        xor al, cl
        and al, 8
        xor al, cl
        mov byte ptr ds : [edi+0x518], al
/*FIXUP public_584136 : nop
        push offset public_5e4c8c @0x584136*/
  FIXUP public_584136 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4c8c
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5841d7
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x28]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x18]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x20]
        push 3
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fld qword ptr ss : [esp+0x20]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0xC], al
        call public_5b7ec0
        fld qword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [edi+0x4C0], al
        call public_5b7ec0
        fld qword ptr ss : [esp+0x28]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [edi+0x4C1], al
        call public_5b7ec0
        mov cl, byte ptr ss : [esp+0xC]
        mov byte ptr ds : [edi+0x4C2], al
        mov byte ptr ds : [edi+0x4C3], cl
/*FIXUP public_5841d7 : nop
        push offset public_5e4c80 @0x5841d7*/
  FIXUP public_5841d7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4c80
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_584278
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x18]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x20]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x28]
        push 3
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        fld qword ptr ss : [esp+0x28]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+0xC], al
        call public_5b7ec0
        fld qword ptr ss : [esp+0x20]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [edi+0x4BC], al
        call public_5b7ec0
        fld qword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ds : [edi+0x4BD], al
        call public_5b7ec0
        mov dl, byte ptr ss : [esp+0xC]
        mov byte ptr ds : [edi+0x4BE], al
        mov byte ptr ds : [edi+0x4BF], dl
        public_584278 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_583e78
        public_584288 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x583e30)
    }
}

#undef public_583e78
#undef public_583ec9
#undef public_583f26
#undef public_583fd6
#undef public_584035
#undef public_5840aa
#undef public_5840d9
#undef public_5840db
#undef public_5840f0
#undef public_58411f
#undef public_584121
#undef public_584136
#undef public_5841d7
#undef public_584278
#undef public_584288
