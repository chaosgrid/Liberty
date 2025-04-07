#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0660);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);

#define public_62fa045 _public_62fa045
#define public_62fa066 _public_62fa066
#define public_62fa080 _public_62fa080
#define public_62fa087 _public_62fa087

PROC_DECLARE(0x62fa010, internal_62fa010, public_62fa010);
extern "C" NAKED register_t __cdecl internal_62fa010()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        mov edi, ecx
        call public_62f0660
        test al, al
        jne public_62fa080
/*FIXUP push offset public_63a2068 @0x62fa022*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2068
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62fa045
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x5C]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62fa045 : nop
        push offset public_63a2054 @0x62fa045*/
  FIXUP public_62fa045 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2054
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62fa066
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x60]
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62fa066 : nop
        push offset public_63a2044 @0x62fa066*/
  FIXUP public_62fa066 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2044
        call public_6310410
        test al, al
        je public_62fa087
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+0x64]
        public_62fa080 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62fa087 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62fa010)
    }
}

#undef public_62fa045
#undef public_62fa066
#undef public_62fa080
#undef public_62fa087
