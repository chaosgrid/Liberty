#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f51170);

#define public_6f5119d _public_6f5119d

PROC_DECLARE(0x6f51170, internal_6f51170, public_6f51170);
extern "C" NAKED register_t __cdecl internal_6f51170()
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
        call public_6f4f7d0
        mov eax, dword ptr ss : [esp+0x6C]
        mov cl, byte ptr ds : [eax]
        add esp, 0xC
        test cl, cl
        jne public_6f5119d
        mov eax, offset public_6f60f84
        public_6f5119d : nop
        mov edx, dword ptr ds : [esi+0x1C]
        lea ecx, ss:[esp+4]
        push ecx
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x68]
        push eax
/*FIXUP push offset public_6f60f4c @0x6f511ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60f4c
        call public_6f4f7a0
        add esp, 0x14
        pop esi
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x6f51170)
    }
}

#undef public_6f5119d
