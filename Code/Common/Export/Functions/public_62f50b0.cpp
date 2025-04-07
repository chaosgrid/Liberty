#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4260);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);

#define public_62f50e9 _public_62f50e9
#define public_62f510a _public_62f510a
#define public_62f512e _public_62f512e
#define public_62f514f _public_62f514f
#define public_62f5170 _public_62f5170
#define public_62f5194 _public_62f5194
#define public_62f51b1 _public_62f51b1
#define public_62f51b8 _public_62f51b8

PROC_DECLARE(0x62f50b0, internal_62f50b0, public_62f50b0);
extern "C" NAKED register_t __cdecl internal_62f50b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        mov edi, ecx
        call public_62f4260
        test al, al
        jne public_62f51b1
/*FIXUP push offset public_63a1934 @0x62f50c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1934
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f50e9
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x78]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f50e9 : nop
        push offset public_63a19d4 @0x62f50e9*/
  FIXUP public_62f50e9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a19d4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f510a
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x7C]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f510a : nop
        push offset public_63a19c0 @0x62f510a*/
  FIXUP public_62f510a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a19c0
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f512e
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x80]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f512e : nop
        push offset public_63a19b4 @0x62f512e*/
  FIXUP public_62f512e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a19b4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f514f
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x70]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f514f : nop
        push offset public_63a1670 @0x62f514f*/
  FIXUP public_62f514f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1670
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f5170
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x74]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f5170 : nop
        push offset public_63a19a4 @0x62f5170*/
  FIXUP public_62f5170 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a19a4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f5194
        push 0
        call public_63105b0
        mov byte ptr ds : [edi+0x84], al
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f5194 : nop
        push offset public_63a1990 @0x62f5194*/
  FIXUP public_62f5194 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1990
        call public_6310410
        test al, al
        je public_62f51b8
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+0x88]
        public_62f51b1 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f51b8 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f50b0)
    }
}

#undef public_62f50e9
#undef public_62f510a
#undef public_62f512e
#undef public_62f514f
#undef public_62f5170
#undef public_62f5194
#undef public_62f51b1
#undef public_62f51b8
