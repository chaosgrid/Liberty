#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09cdc);
CLANG_FORWARD_PROC_SYMBOL(public_6c09f00);

#define public_6c09cf1 _public_6c09cf1

PROC_DECLARE(0x6c09cdc, internal_6c09cdc, public_6c09cdc);
extern "C" NAKED register_t __cdecl internal_6c09cdc()
{
    __asm
    {
        cmp dword ptr ds : [public_6c14334], 0xFFFFFFFF
        jne public_6c09cf1
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6c0b1d0]
        pop ecx
        ret 
/*FIXUP public_6c09cf1 : nop
        push offset public_6c14330 @0x6c09cf1*/
  FIXUP public_6c09cf1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c14330
/*FIXUP push offset public_6c14334 @0x6c09cf6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c14334
        push dword ptr ss : [esp+0xC]
        call public_6c09f00
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6c09cdc)
    }
}

#undef public_6c09cf1
