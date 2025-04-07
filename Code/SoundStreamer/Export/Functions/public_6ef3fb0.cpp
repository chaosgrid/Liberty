#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3f10);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4030);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4036);

#define public_6ef3ff8 _public_6ef3ff8

PROC_DECLARE(0x6ef3fb0, internal_6ef3fb0, public_6ef3fb0);
extern "C" NAKED register_t __cdecl internal_6ef3fb0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push 0
        lea ecx, ss:[esp+4]
        push ecx
/*FIXUP push offset _public_6ef3f10 @0x6ef3fbe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ef3f10
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], eax
        call public_6ef4036
        test eax, eax
        jne public_6ef3ff8
        mov edx, dword ptr ss : [esp+4]
        push eax
        mov dword ptr ss : [esp+0x10], eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_6ef4030
        test eax, eax
        jne public_6ef3ff8
        mov eax, dword ptr ss : [esp+0xC]
        add esp, 8
        ret 
        public_6ef3ff8 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ef3fb0)
    }
}

#undef public_6ef3ff8
