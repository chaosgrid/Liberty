#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4260);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);

#define public_62f52fe _public_62f52fe
#define public_62f5305 _public_62f5305

PROC_DECLARE(0x62f52d0, internal_62f52d0, public_62f52d0);
extern "C" NAKED register_t __cdecl internal_62f52d0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f4260
        test al, al
        jne public_62f52fe
/*FIXUP push offset public_63a19e8 @0x62f52e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a19e8
        mov ecx, edi
        call public_6310410
        test al, al
        je public_62f5305
        push 0
        mov ecx, edi
        call public_63108f0
        fstp dword ptr ds : [esi+0x70]
        public_62f52fe : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f5305 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f52d0)
    }
}

#undef public_62f52fe
#undef public_62f5305
