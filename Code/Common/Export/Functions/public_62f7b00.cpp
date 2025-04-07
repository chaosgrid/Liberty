#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);

#define public_62f7b32 _public_62f7b32
#define public_62f7b53 _public_62f7b53
#define public_62f7b74 _public_62f7b74
#define public_62f7b95 _public_62f7b95

PROC_DECLARE(0x62f7b00, internal_62f7b00, public_62f7b00);
extern "C" NAKED register_t __cdecl internal_62f7b00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
/*FIXUP push offset public_63994e8 @0x62f7b08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f7b32
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f7b32 : nop
        push offset public_63a1dbc @0x62f7b32*/
  FIXUP public_62f7b32 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1dbc
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f7b53
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0xC]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f7b53 : nop
        push offset public_639ef48 @0x62f7b53*/
  FIXUP public_62f7b53 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ef48
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f7b74
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x10]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f7b74 : nop
        push offset public_63a1db4 @0x62f7b74*/
  FIXUP public_62f7b74 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1db4
        call public_6310410
        test al, al
        je public_62f7b95
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+8]
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f7b95 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f7b00)
    }
}

#undef public_62f7b32
#undef public_62f7b53
#undef public_62f7b74
#undef public_62f7b95
