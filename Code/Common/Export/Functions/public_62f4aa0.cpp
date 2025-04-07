#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4260);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);

#define public_62f4ad5 _public_62f4ad5
#define public_62f4aef _public_62f4aef
#define public_62f4af6 _public_62f4af6

PROC_DECLARE(0x62f4aa0, internal_62f4aa0, public_62f4aa0);
extern "C" NAKED register_t __cdecl internal_62f4aa0()
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
        jne public_62f4aef
/*FIXUP push offset public_63a1950 @0x62f4ab2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1950
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f4ad5
        push 0
        call public_63105b0
        mov byte ptr ds : [edi+0x70], al
        pop edi
        mov al, 1
        pop esi
        ret 4
/*FIXUP public_62f4ad5 : nop
        push offset public_63a1940 @0x62f4ad5*/
  FIXUP public_62f4ad5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1940
        call public_6310410
        test al, al
        je public_62f4af6
        push 0
        mov ecx, esi
        call public_63105b0
        mov byte ptr ds : [edi+0x71], al
        public_62f4aef : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f4af6 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f4aa0)
    }
}

#undef public_62f4ad5
#undef public_62f4aef
#undef public_62f4af6
