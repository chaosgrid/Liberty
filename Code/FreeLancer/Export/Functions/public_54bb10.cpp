#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51e3b0);
CLANG_FORWARD_PROC_SYMBOL(public_549e70);
CLANG_FORWARD_PROC_SYMBOL(public_54bb10);

#define public_54bb43 _public_54bb43

PROC_DECLARE(0x54bb10, internal_54bb10, public_54bb10);
extern "C" NAKED register_t __cdecl internal_54bb10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push edx
        mov ecx, offset public_6792f8
        call public_51e3b0
        mov al, byte ptr ds : [public_678ba0]
        test al, al
        je public_54bb43
        push 0
/*FIXUP push offset public_5cacd8 @0x54bb34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cacd8
        mov ecx, offset public_678b98
        call public_549e70
        public_54bb43 : nop
        mov byte ptr ds : [public_679740], 1
        ret 
        UNREACHABLE_TRAP(0x54bb10)
    }
}

#undef public_54bb43
