#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8de8);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8f74);

#define public_6ee8dfd _public_6ee8dfd

PROC_DECLARE(0x6ee8de8, internal_6ee8de8, public_6ee8de8);
extern "C" NAKED register_t __cdecl internal_6ee8de8()
{
    __asm
    {
        cmp dword ptr ds : [public_6eec010], 0xFFFFFFFF
        jne public_6ee8dfd
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_6ee90b4]
        pop ecx
        ret 
/*FIXUP public_6ee8dfd : nop
        push offset public_6eec00c @0x6ee8dfd*/
  FIXUP public_6ee8dfd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eec00c
/*FIXUP push offset public_6eec010 @0x6ee8e02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eec010
        push dword ptr ss : [esp+0xC]
        call public_6ee8f74
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ee8de8)
    }
}

#undef public_6ee8dfd
