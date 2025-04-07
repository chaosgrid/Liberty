#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6805fe0);
CLANG_FORWARD_PROC_SYMBOL(public_680a800);

#define public_680a82d _public_680a82d

PROC_DECLARE(0x680a800, internal_680a800, public_680a800);
extern "C" NAKED register_t __cdecl internal_680a800()
{
    __asm
    {
        sub esp, 0x50
        push esi
        mov esi, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+0x10]
        push 0x50
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        call public_6805fe0
        mov eax, dword ptr ss : [esp+0x6C]
        mov cl, byte ptr ds : [eax]
        add esp, 0xC
        test cl, cl
        jne public_680a82d
        mov eax, offset public_680e48c
        public_680a82d : nop
        mov edx, dword ptr ds : [esi+0x1C]
        lea ecx, ss:[esp+4]
        push ecx
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x68]
        push eax
/*FIXUP push offset public_680e454 @0x680a83c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e454
        call public_6805fb0
        UNREACHABLE_TRAP(0x680a800)
    }
}

#undef public_680a82d
