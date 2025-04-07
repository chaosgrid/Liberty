#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f53b0);
CLANG_FORWARD_PROC_SYMBOL(public_62f60f0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);

#define public_62f612c _public_62f612c
#define public_62f6150 _public_62f6150
#define public_62f6174 _public_62f6174
#define public_62f6198 _public_62f6198
#define public_62f61c3 _public_62f61c3
#define public_62f61e9 _public_62f61e9
#define public_62f61f0 _public_62f61f0

PROC_DECLARE(0x62f60f0, internal_62f60f0, public_62f60f0);
extern "C" NAKED register_t __cdecl internal_62f60f0()
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
        jne public_62f61e9
/*FIXUP push offset public_63a1b40 @0x62f6106*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1b40
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f612c
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x88]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f612c : nop
        push offset public_63a1934 @0x62f612c*/
  FIXUP public_62f612c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1934
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f6150
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x8C]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f6150 : nop
        push offset public_63a1b30 @0x62f6150*/
  FIXUP public_62f6150 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1b30
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f6174
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x90]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f6174 : nop
        push offset public_63a1b20 @0x62f6174*/
  FIXUP public_62f6174 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1b20
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f6198
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x94]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f6198 : nop
        push offset public_63a1b08 @0x62f6198*/
  FIXUP public_62f6198 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1b08
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f61c3
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+0x98], eax
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f61c3 : nop
        push offset public_63a1980 @0x62f61c3*/
  FIXUP public_62f61c3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1980
        call public_6310410
        test al, al
        je public_62f61f0
        mov ecx, esi
        call public_6310b70
        push 0
        push eax
        call public_6333ca0
        add esp, 8
        mov dword ptr ds : [edi+0x9C], eax
        public_62f61e9 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f61f0 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f60f0)
    }
}

#undef public_62f612c
#undef public_62f6150
#undef public_62f6174
#undef public_62f6198
#undef public_62f61c3
#undef public_62f61e9
#undef public_62f61f0
