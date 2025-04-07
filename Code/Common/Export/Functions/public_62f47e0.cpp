#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4260);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);

#define public_62f4815 _public_62f4815
#define public_62f4836 _public_62f4836
#define public_62f4857 _public_62f4857
#define public_62f4871 _public_62f4871
#define public_62f4878 _public_62f4878

PROC_DECLARE(0x62f47e0, internal_62f47e0, public_62f47e0);
extern "C" NAKED register_t __cdecl internal_62f47e0()
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
        jne public_62f4871
/*FIXUP push offset public_63a190c @0x62f47f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a190c
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f4815
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x70]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f4815 : nop
        push offset public_63a1900 @0x62f4815*/
  FIXUP public_62f4815 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1900
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f4836
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x74]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f4836 : nop
        push offset public_63a18f0 @0x62f4836*/
  FIXUP public_62f4836 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a18f0
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f4857
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x78]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f4857 : nop
        push offset public_63a18dc @0x62f4857*/
  FIXUP public_62f4857 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a18dc
        call public_6310410
        test al, al
        je public_62f4878
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+0x7C]
        public_62f4871 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f4878 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f47e0)
    }
}

#undef public_62f4815
#undef public_62f4836
#undef public_62f4857
#undef public_62f4871
#undef public_62f4878
