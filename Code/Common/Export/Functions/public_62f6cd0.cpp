#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f60f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);

#define public_62f6d07 _public_62f6d07
#define public_62f6d0e _public_62f6d0e

PROC_DECLARE(0x62f6cd0, internal_62f6cd0, public_62f6cd0);
extern "C" NAKED register_t __cdecl internal_62f6cd0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f60f0
        test al, al
        jne public_62f6d07
/*FIXUP push offset public_63a1c78 @0x62f6ce2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1c78
        mov ecx, edi
        call public_6310410
        test al, al
        je public_62f6d0e
        push 0
        mov ecx, edi
        call public_63108f0
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [esi+0xA0]
        fstp st(0)
        public_62f6d07 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f6d0e : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f6cd0)
    }
}

#undef public_62f6d07
#undef public_62f6d0e
