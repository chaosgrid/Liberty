#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e4a0);

#define public_42e4e8 _public_42e4e8
#define public_42e52e _public_42e52e
#define public_42e564 _public_42e564
#define public_42e59d _public_42e59d
#define public_42e5d6 _public_42e5d6
#define public_42e60f _public_42e60f
#define public_42e648 _public_42e648
#define public_42e66b _public_42e66b
#define public_42e68e _public_42e68e
#define public_42e6b1 _public_42e6b1
#define public_42e6d4 _public_42e6d4
#define public_42e6f7 _public_42e6f7
#define public_42e71a _public_42e71a
#define public_42e73d _public_42e73d
#define public_42e760 _public_42e760
#define public_42e783 _public_42e783
#define public_42e7a8 _public_42e7a8
#define public_42e7ba _public_42e7ba
#define public_42e7de _public_42e7de
#define public_42e827 _public_42e827
#define public_42e839 _public_42e839

PROC_DECLARE(0x42e4a0, internal_42e4a0, public_42e4a0);
extern "C" NAKED register_t __cdecl internal_42e4a0()
{
    __asm
    {
        sub esp, 0x18
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        push edi
        mov edi, dword ptr ds : [public_5c6cf4]
        mov ebp, ecx
/*FIXUP push offset public_5cab34 @0x42e4b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cab34
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_42e52e
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        add ebp, 0x10
        public_42e4e8 : nop
        fld dword ptr ss : [esp+0x18]
        pop edi
        fmul dword ptr ds : [public_5c7f68]
        pop esi
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [ebp], eax
        mov al, 1
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [ebp+4], ecx
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        add esp, 0x18
        ret 4
/*FIXUP public_42e52e : nop
        push offset public_5cab28 @0x42e52e*/
  FIXUP public_42e52e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cab28
        call edi
        test al, al
        mov ecx, esi
        je public_42e564
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        add ebp, 0x1C
        jmp public_42e4e8
/*FIXUP public_42e564 : nop
        push offset public_5cab1c @0x42e564*/
  FIXUP public_42e564 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cab1c
        call edi
        test al, al
        mov ecx, esi
        je public_42e59d
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        add ebp, 0x28
        jmp public_42e4e8
/*FIXUP public_42e59d : nop
        push offset public_5cab0c @0x42e59d*/
  FIXUP public_42e59d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cab0c
        call edi
        test al, al
        mov ecx, esi
        je public_42e5d6
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        add ebp, 0x34
        jmp public_42e4e8
/*FIXUP public_42e5d6 : nop
        push offset public_5caafc @0x42e5d6*/
  FIXUP public_42e5d6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caafc
        call edi
        test al, al
        mov ecx, esi
        je public_42e60f
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        add ebp, 0x40
        jmp public_42e4e8
/*FIXUP public_42e60f : nop
        push offset public_5caae8 @0x42e60f*/
  FIXUP public_42e60f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caae8
        call edi
        test al, al
        mov ecx, esi
        je public_42e648
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        add ebp, 0x4C
        jmp public_42e4e8
/*FIXUP public_42e648 : nop
        push offset public_5caadc @0x42e648*/
  FIXUP public_42e648 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caadc
        call edi
        test al, al
        mov ecx, esi
        je public_42e66b
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x60]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
/*FIXUP public_42e66b : nop
        push offset public_5caad0 @0x42e66b*/
  FIXUP public_42e66b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caad0
        call edi
        test al, al
        mov ecx, esi
        je public_42e68e
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x64]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
/*FIXUP public_42e68e : nop
        push offset public_5caac4 @0x42e68e*/
  FIXUP public_42e68e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caac4
        call edi
        test al, al
        mov ecx, esi
        je public_42e6b1
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x68]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
/*FIXUP public_42e6b1 : nop
        push offset public_5caab8 @0x42e6b1*/
  FIXUP public_42e6b1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caab8
        call edi
        test al, al
        mov ecx, esi
        je public_42e6d4
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x6C]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
/*FIXUP public_42e6d4 : nop
        push offset public_5caaa8 @0x42e6d4*/
  FIXUP public_42e6d4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caaa8
        call edi
        test al, al
        mov ecx, esi
        je public_42e6f7
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x70]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
/*FIXUP public_42e6f7 : nop
        push offset public_5caa98 @0x42e6f7*/
  FIXUP public_42e6f7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caa98
        call edi
        test al, al
        mov ecx, esi
        je public_42e71a
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x58]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
/*FIXUP public_42e71a : nop
        push offset public_5caa84 @0x42e71a*/
  FIXUP public_42e71a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caa84
        call edi
        test al, al
        mov ecx, esi
        je public_42e73d
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x5C]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
/*FIXUP public_42e73d : nop
        push offset public_5caa78 @0x42e73d*/
  FIXUP public_42e73d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caa78
        call edi
        test al, al
        mov ecx, esi
        je public_42e760
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x78]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
/*FIXUP public_42e760 : nop
        push offset public_5caa6c @0x42e760*/
  FIXUP public_42e760 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caa6c
        call edi
        test al, al
        mov ecx, esi
        je public_42e783
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x74]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
/*FIXUP public_42e783 : nop
        push offset public_5caa5c @0x42e783*/
  FIXUP public_42e783 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caa5c
        call edi
        test al, al
        mov ecx, esi
        je public_42e7de
        call dword ptr ds : [public_5c6698]
        mov edi, offset public_5caa54
        mov esi, eax
        mov ecx, 5
        xor edx, edx
        repe cmpsb
        jne public_42e7ba
        public_42e7a8 : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], 0
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
        public_42e7ba : nop
        mov esi, eax
        mov edi, offset public_5caa4c
        mov ecx, 5
        xor eax, eax
        repe cmpsb
        jne public_42e7a8
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], 1
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
/*FIXUP public_42e7de : nop
        push offset public_5caa3c @0x42e7de*/
  FIXUP public_42e7de : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caa3c
        call edi
        test al, al
        je public_42e839
        mov ecx, esi
        call dword ptr ds : [public_5c6698]
        mov edi, offset public_5caa34
        mov esi, eax
        mov ecx, 5
        xor edx, edx
        repe cmpsb
        je public_42e827
        mov esi, eax
        mov edi, offset public_5caa2c
        mov ecx, 5
        xor eax, eax
        repe cmpsb
        jne public_42e827
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xC], 1
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
        public_42e827 : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xC], 0
        mov al, 1
        pop ebp
        add esp, 0x18
        ret 4
        public_42e839 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x42e4a0)
    }
}

#undef public_42e4e8
#undef public_42e52e
#undef public_42e564
#undef public_42e59d
#undef public_42e5d6
#undef public_42e60f
#undef public_42e648
#undef public_42e66b
#undef public_42e68e
#undef public_42e6b1
#undef public_42e6d4
#undef public_42e6f7
#undef public_42e71a
#undef public_42e73d
#undef public_42e760
#undef public_42e783
#undef public_42e7a8
#undef public_42e7ba
#undef public_42e7de
#undef public_42e827
#undef public_42e839
