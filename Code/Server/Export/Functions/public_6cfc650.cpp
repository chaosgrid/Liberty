#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7c10);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc650);
CLANG_FORWARD_PROC_SYMBOL(public_6cfd7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60d89);

#define public_6cfc6a0 _public_6cfc6a0
#define public_6cfc6fa _public_6cfc6fa
#define public_6cfc749 _public_6cfc749
#define public_6cfc797 _public_6cfc797
#define public_6cfc7f1 _public_6cfc7f1
#define public_6cfc84f _public_6cfc84f
#define public_6cfc8a9 _public_6cfc8a9
#define public_6cfc907 _public_6cfc907
#define public_6cfc972 _public_6cfc972
#define public_6cfc9f6 _public_6cfc9f6
#define public_6cfca3a _public_6cfca3a
#define public_6cfca8e _public_6cfca8e
#define public_6cfca90 _public_6cfca90
#define public_6cfcad8 _public_6cfcad8
#define public_6cfcadc _public_6cfcadc
#define public_6cfcaec _public_6cfcaec
#define public_6cfcb03 _public_6cfcb03
#define public_6cfcb16 _public_6cfcb16

PROC_DECLARE(0x6cfc650, internal_6cfc650, public_6cfc650);
extern "C" NAKED register_t __cdecl internal_6cfc650()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60d89 @0x6cfc652*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60d89
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push ebp
        mov dword ptr ss : [esp+8], ecx
        call dword ptr ds : [public_6d64544]
        test al, al
        je public_6cfcb16
        push ebx
        push esi
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6d64540]
        test al, al
        je public_6cfcaec
        mov edi, dword ptr ds : [public_6d6453c]
        xor ebx, ebx
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6cfc6a0 : nop
        push offset public_6d66ed8 @0x6cfc6a0*/
  FIXUP public_6cfc6a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ed8
        mov ecx, ebp
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6cfc6fa
        push 0x30
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], ebx
        je public_6cfca8e
        mov ecx, esi
        call dword ptr ds : [public_6d64534]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_6d66ea8
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x30], 1
        call dword ptr ds : [public_6d644a8]
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi], offset public_6d66e70
        jmp public_6cfca90
/*FIXUP public_6cfc6fa : nop
        push offset public_6d66e5c @0x6cfc6fa*/
  FIXUP public_6cfc6fa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66e5c
        mov ecx, ebp
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6cfc749
        mov eax, dword ptr ss : [esp+0x10]
        push 0x28
        mov byte ptr ds : [eax+0x38], 1
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 2
        je public_6cfca8e
        mov ecx, esi
        call dword ptr ds : [public_6d64534]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_6d66e2c
        jmp public_6cfca90
/*FIXUP public_6cfc749 : nop
        push offset public_6d66e1c @0x6cfc749*/
  FIXUP public_6cfc749 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66e1c
        mov ecx, ebp
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6cfc797
        push 0x30
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 3
        je public_6cfca8e
        mov ecx, esi
        call dword ptr ds : [public_6d64534]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov byte ptr ds : [esi+0x2C], 1
        mov dword ptr ds : [esi], offset public_6d66de8
        jmp public_6cfca90
/*FIXUP public_6cfc797 : nop
        push offset public_6d66dd4 @0x6cfc797*/
  FIXUP public_6cfc797 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66dd4
        mov ecx, ebp
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6cfc7f1
        push 0x30
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 4
        je public_6cfca8e
        mov ecx, esi
        call dword ptr ds : [public_6d64534]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_6d66ea8
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x30], 5
        call edi
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi], offset public_6d66da0
        jmp public_6cfca90
/*FIXUP public_6cfc7f1 : nop
        push offset public_6d66d8c @0x6cfc7f1*/
  FIXUP public_6cfc7f1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66d8c
        mov ecx, ebp
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6cfc84f
        push 0x34
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 6
        je public_6cfca8e
        mov ecx, esi
        call dword ptr ds : [public_6d64534]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_6d66ea8
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x30], 7
        call edi
        mov dword ptr ds : [esi+0x2C], ebx
        mov byte ptr ds : [esi+0x30], 1
        mov dword ptr ds : [esi], offset public_6d66d58
        jmp public_6cfca90
/*FIXUP public_6cfc84f : nop
        push offset public_6d66d3c @0x6cfc84f*/
  FIXUP public_6cfc84f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66d3c
        mov ecx, ebp
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6cfc8a9
        push 0x30
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 8
        je public_6cfca8e
        mov ecx, esi
        call dword ptr ds : [public_6d64534]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_6d66ea8
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x30], 9
        call edi
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi], offset public_6d66d08
        jmp public_6cfca90
/*FIXUP public_6cfc8a9 : nop
        push offset public_6d66cec @0x6cfc8a9*/
  FIXUP public_6cfc8a9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66cec
        mov ecx, ebp
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6cfc907
        push 0x34
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 0xA
        je public_6cfca8e
        mov ecx, esi
        call dword ptr ds : [public_6d64534]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_6d66ea8
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x30], 0xB
        call edi
        mov dword ptr ds : [esi+0x2C], ebx
        mov byte ptr ds : [esi+0x30], 1
        mov dword ptr ds : [esi], offset public_6d66cb8
        jmp public_6cfca90
/*FIXUP public_6cfc907 : nop
        push offset public_6d66cac @0x6cfc907*/
  FIXUP public_6cfc907 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66cac
        mov ecx, ebp
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6cfc972
        push 0x44
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 0xC
        je public_6cfca8e
        mov ecx, esi
        call dword ptr ds : [public_6d64534]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_6d66ea8
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x30], 0xD
        call edi
        push ebx
        push ebx
        push ebx
        lea ecx, ds:[esi+0x38]
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        call public_6ce7c10
        mov dword ptr ds : [esi], offset public_6d66c78
        jmp public_6cfca90
/*FIXUP public_6cfc972 : nop
        push offset public_6d66c6c @0x6cfc972*/
  FIXUP public_6cfc972 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66c6c
        mov ecx, ebp
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6cfc9f6
        push 0x50
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 0xE
        je public_6cfca8e
        mov ecx, esi
        call dword ptr ds : [public_6d64534]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_6d66ea8
        push ebx
        push ebx
        push ebx
        lea ecx, ds:[esi+0x2C]
        mov byte ptr ss : [esp+0x3C], 0xF
        mov dword ptr ds : [esi+0x28], 0x3F800000
        call public_6ce7c10
        push 0x3F800000
        push 0x3F800000
        push 0x3F800000
        lea ecx, ds:[esi+0x38]
        call public_6ce7c10
        mov byte ptr ds : [esi+0x4C], bl
        mov dword ptr ds : [esi], offset public_6d66c38
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x44], ebx
        jmp public_6cfca90
/*FIXUP public_6cfc9f6 : nop
        push offset public_6d66c24 @0x6cfc9f6*/
  FIXUP public_6cfc9f6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66c24
        mov ecx, ebp
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6cfca3a
        push 0x2C
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 0x10
        je public_6cfca8e
        mov ecx, esi
        call dword ptr ds : [public_6d64534]
        mov dword ptr ds : [esi+0x24], ebx
        mov byte ptr ds : [esi+0x28], 1
        mov dword ptr ds : [esi], offset public_6d66bf0
        jmp public_6cfca90
/*FIXUP public_6cfca3a : nop
        push offset public_6d66be0 @0x6cfca3a*/
  FIXUP public_6cfca3a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66be0
        mov ecx, ebp
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6cfcb03
        push 0x2C
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 0x11
        je public_6cfca8e
        mov ecx, esi
        call dword ptr ds : [public_6d64534]
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi], offset public_6d66ea8
        lea ecx, ds:[esi+0x28]
        mov byte ptr ss : [esp+0x30], 0x12
        call edi
        mov dword ptr ds : [esi], offset public_6d66bac
        jmp public_6cfca90
        public_6cfca8e : nop
        xor esi, esi
        public_6cfca90 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        je public_6cfcadc
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        je public_6cfcad8
        fld dword ptr ds : [esi+4]
        mov ebp, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        lea ecx, ss:[ebp+0x10]
        mov dword ptr ss : [esp+0x24], esi
        call public_6cfd7e0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        test al, al
        je public_6cfcad8
        mov byte ptr ss : [ebp+0x24], 1
        public_6cfcad8 : nop
        mov ebp, dword ptr ss : [esp+0x38]
        public_6cfcadc : nop
        mov ecx, ebp
        call dword ptr ds : [public_6d64540]
        test al, al
        jne public_6cfc6a0
        public_6cfcaec : nop
        pop edi
        pop esi
        pop ebx
        mov al, 1
        pop ebp
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
/*FIXUP public_6cfcb03 : nop
        push offset public_6d66ba0 @0x6cfcb03*/
  FIXUP public_6cfcb03 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ba0
        mov ecx, ebp
        call dword ptr ds : [public_6d64538]
        test al, al
        jne public_6cfcaec
        jmp public_6cfcadc
        public_6cfcb16 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        xor al, al
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6cfc650)
    }
}

#undef public_6cfc6a0
#undef public_6cfc6fa
#undef public_6cfc749
#undef public_6cfc797
#undef public_6cfc7f1
#undef public_6cfc84f
#undef public_6cfc8a9
#undef public_6cfc907
#undef public_6cfc972
#undef public_6cfc9f6
#undef public_6cfca3a
#undef public_6cfca8e
#undef public_6cfca90
#undef public_6cfcad8
#undef public_6cfcadc
#undef public_6cfcaec
#undef public_6cfcb03
#undef public_6cfcb16
