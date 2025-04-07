#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f53b0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);

#define public_62f56ec _public_62f56ec
#define public_62f5710 _public_62f5710
#define public_62f5734 _public_62f5734
#define public_62f575f _public_62f575f
#define public_62f5783 _public_62f5783
#define public_62f578a _public_62f578a

PROC_DECLARE(0x62f56b0, internal_62f56b0, public_62f56b0);
extern "C" NAKED register_t __cdecl internal_62f56b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        mov edi, ecx
        call public_62f53b0
        test al, al
        jne public_62f5783
/*FIXUP push offset public_63a1934 @0x62f56c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1934
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f56ec
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x88]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f56ec : nop
        push offset public_63a1a64 @0x62f56ec*/
  FIXUP public_62f56ec : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a64
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f5710
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x8C]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f5710 : nop
        push offset public_63a1a54 @0x62f5710*/
  FIXUP public_62f5710 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a54
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f5734
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x90]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f5734 : nop
        push offset public_63a1a48 @0x62f5734*/
  FIXUP public_62f5734 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a48
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f575f
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+0x94], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f575f : nop
        push offset public_63a1a3c @0x62f575f*/
  FIXUP public_62f575f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a3c
        call public_6310410
        test al, al
        je public_62f578a
        mov ecx, esi
        call public_6310b70
        push eax
        call public_630d3f0
        mov dword ptr ds : [edi+0x98], eax
        add esp, 4
        public_62f5783 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f578a : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f56b0)
    }
}

#undef public_62f56ec
#undef public_62f5710
#undef public_62f5734
#undef public_62f575f
#undef public_62f5783
#undef public_62f578a
