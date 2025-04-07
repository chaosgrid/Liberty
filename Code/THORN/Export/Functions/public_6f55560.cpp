#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f55560);
CLANG_FORWARD_PROC_SYMBOL(public_6f55590);

#define public_6f55583 _public_6f55583

PROC_DECLARE(0x6f55560, internal_6f55560, public_6f55560);
extern "C" NAKED register_t __cdecl internal_6f55560()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6f55590
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6f55583
/*FIXUP push offset public_6f61888 @0x6f55575*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61888
        push edi
        call public_6f4f570
        add esp, 8
        public_6f55583 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f55560)
    }
}

#undef public_6f55583
