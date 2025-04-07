#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4260);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);

#define public_62f4fe7 _public_62f4fe7
#define public_62f4fee _public_62f4fee

PROC_DECLARE(0x62f4fb0, internal_62f4fb0, public_62f4fb0);
extern "C" NAKED register_t __cdecl internal_62f4fb0()
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
        jne public_62f4fe7
/*FIXUP push offset public_63a1980 @0x62f4fc2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1980
        mov ecx, edi
        call public_6310410
        test al, al
        je public_62f4fee
        mov ecx, edi
        call public_6310b70
        push 0
        push eax
        call public_6333ca0
        add esp, 8
        mov dword ptr ds : [esi+0x70], eax
        public_62f4fe7 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62f4fee : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f4fb0)
    }
}

#undef public_62f4fe7
#undef public_62f4fee
