#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f53b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);

#define public_62f5f78 _public_62f5f78
#define public_62f5f95 _public_62f5f95
#define public_62f5f9c _public_62f5f9c

PROC_DECLARE(0x62f5f40, internal_62f5f40, public_62f5f40);
extern "C" NAKED register_t __cdecl internal_62f5f40()
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
        jne public_62f5f95
/*FIXUP push offset public_63a1934 @0x62f5f52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1934
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f5f78
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x88]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f5f78 : nop
        push offset public_63a19b4 @0x62f5f78*/
  FIXUP public_62f5f78 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a19b4
        call public_6310410
        test al, al
        je public_62f5f9c
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+0x8C]
        public_62f5f95 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f5f9c : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f5f40)
    }
}

#undef public_62f5f78
#undef public_62f5f95
#undef public_62f5f9c
