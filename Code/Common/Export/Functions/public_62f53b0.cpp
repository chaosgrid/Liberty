#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4260);
CLANG_FORWARD_PROC_SYMBOL(public_62f53b0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);

#define public_62f53f2 _public_62f53f2
#define public_62f541c _public_62f541c
#define public_62f543d _public_62f543d
#define public_62f545e _public_62f545e
#define public_62f548d _public_62f548d
#define public_62f54aa _public_62f54aa
#define public_62f54b1 _public_62f54b1

PROC_DECLARE(0x62f53b0, internal_62f53b0, public_62f53b0);
extern "C" NAKED register_t __cdecl internal_62f53b0()
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
        jne public_62f54aa
/*FIXUP push offset public_63a1a24 @0x62f53c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a24
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f53f2
        push 0
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+0x70], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f53f2 : nop
        push offset public_63a1a18 @0x62f53f2*/
  FIXUP public_62f53f2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a18
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f541c
        push 0
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+0x74], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f541c : nop
        push offset public_63a1a08 @0x62f541c*/
  FIXUP public_62f541c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a08
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f543d
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x78]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f543d : nop
        push offset public_63a19f8 @0x62f543d*/
  FIXUP public_62f543d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a19f8
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f545e
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x7C]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f545e : nop
        push offset public_6399dec @0x62f545e*/
  FIXUP public_62f545e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399dec
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f548d
        push 0
        call public_6310a30
        push 0
        push eax
        call public_6333ca0
        add esp, 8
        mov dword ptr ds : [edi+0x80], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f548d : nop
        push offset public_63a180c @0x62f548d*/
  FIXUP public_62f548d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a180c
        call public_6310410
        test al, al
        je public_62f54b1
        push 0
        mov ecx, esi
        call public_63107c0
        mov dword ptr ds : [edi+0x84], eax
        public_62f54aa : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f54b1 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f53b0)
    }
}

#undef public_62f53f2
#undef public_62f541c
#undef public_62f543d
#undef public_62f545e
#undef public_62f548d
#undef public_62f54aa
#undef public_62f54b1
