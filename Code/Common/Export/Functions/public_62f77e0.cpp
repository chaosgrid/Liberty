#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f6de0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);

#define public_62f781c _public_62f781c
#define public_62f7840 _public_62f7840
#define public_62f7864 _public_62f7864
#define public_62f7888 _public_62f7888
#define public_62f78a5 _public_62f78a5
#define public_62f78ac _public_62f78ac

PROC_DECLARE(0x62f77e0, internal_62f77e0, public_62f77e0);
extern "C" NAKED register_t __cdecl internal_62f77e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        mov edi, ecx
        call public_62f6de0
        test al, al
        jne public_62f78a5
/*FIXUP push offset public_63a1670 @0x62f77f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1670
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f781c
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x80]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f781c : nop
        push offset public_63a1cc8 @0x62f781c*/
  FIXUP public_62f781c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1cc8
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f7840
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x84]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f7840 : nop
        push offset public_63a1d98 @0x62f7840*/
  FIXUP public_62f7840 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d98
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f7864
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x88]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f7864 : nop
        push offset public_63a1d88 @0x62f7864*/
  FIXUP public_62f7864 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d88
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f7888
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x8C]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f7888 : nop
        push offset public_63a1d7c @0x62f7888*/
  FIXUP public_62f7888 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1d7c
        call public_6310410
        test al, al
        je public_62f78ac
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+0x90]
        public_62f78a5 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f78ac : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f77e0)
    }
}

#undef public_62f781c
#undef public_62f7840
#undef public_62f7864
#undef public_62f7888
#undef public_62f78a5
#undef public_62f78ac
