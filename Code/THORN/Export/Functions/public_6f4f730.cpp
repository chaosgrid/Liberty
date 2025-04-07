#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f730);

#define public_6f4f753 _public_6f4f753

PROC_DECLARE(0x6f4f730, internal_6f4f730, public_6f4f730);
extern "C" NAKED register_t __cdecl internal_6f4f730()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6f4b090
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6f4f753
/*FIXUP push offset public_6f6097c @0x6f4f745*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6097c
        push edi
        call public_6f4f570
        add esp, 8
        public_6f4f753 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f730)
    }
}

#undef public_6f4f753
