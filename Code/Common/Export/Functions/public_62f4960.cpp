#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4260);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);

#define public_62f4995 _public_62f4995
#define public_62f49b6 _public_62f49b6
#define public_62f49d0 _public_62f49d0
#define public_62f49d7 _public_62f49d7

PROC_DECLARE(0x62f4960, internal_62f4960, public_62f4960);
extern "C" NAKED register_t __cdecl internal_62f4960()
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
        jne public_62f49d0
/*FIXUP push offset public_63a1934 @0x62f4972*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1934
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f4995
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x70]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f4995 : nop
        push offset public_63a192c @0x62f4995*/
  FIXUP public_62f4995 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a192c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f49b6
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x74]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f49b6 : nop
        push offset public_63a1918 @0x62f49b6*/
  FIXUP public_62f49b6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1918
        call public_6310410
        test al, al
        je public_62f49d7
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+0x78]
        public_62f49d0 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f49d7 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f4960)
    }
}

#undef public_62f4995
#undef public_62f49b6
#undef public_62f49d0
#undef public_62f49d7
