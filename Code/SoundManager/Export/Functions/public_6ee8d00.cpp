#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8c60);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d00);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d80);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d86);

#define public_6ee8d48 _public_6ee8d48

PROC_DECLARE(0x6ee8d00, internal_6ee8d00, public_6ee8d00);
extern "C" NAKED register_t __cdecl internal_6ee8d00()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push 0
        lea ecx, ss:[esp+4]
        push ecx
/*FIXUP push offset _public_6ee8c60 @0x6ee8d0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ee8c60
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], eax
        call public_6ee8d86
        test eax, eax
        jne public_6ee8d48
        mov edx, dword ptr ss : [esp+4]
        push eax
        mov dword ptr ss : [esp+0x10], eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_6ee8d80
        test eax, eax
        jne public_6ee8d48
        mov eax, dword ptr ss : [esp+0xC]
        add esp, 8
        ret 
        public_6ee8d48 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ee8d00)
    }
}

#undef public_6ee8d48
