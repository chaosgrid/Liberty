#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53530);
CLANG_FORWARD_PROC_SYMBOL(public_6f53a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f53a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f53a80);

#define public_6f53a41 _public_6f53a41

PROC_DECLARE(0x6f53a00, internal_6f53a00, public_6f53a00);
extern "C" NAKED register_t __cdecl internal_6f53a00()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+4]
        push eax
        push esi
        call public_6f53a80
        lea ecx, ss:[esp+0xC]
        push ecx
        push esi
        call public_6f53530
        mov edx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6f610f8 @0x6f53a21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f610f8
        push edx
        call public_6f53a50
        add esp, 0x18
        test eax, eax
        jge public_6f53a41
/*FIXUP push offset public_6f61320 @0x6f53a33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61320
        push esi
        call public_6f511c0
        add esp, 8
        public_6f53a41 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f53a00)
    }
}

#undef public_6f53a41
