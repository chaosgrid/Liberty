#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_473e00);
CLANG_FORWARD_PROC_SYMBOL(public_59da50);
CLANG_FORWARD_PROC_SYMBOL(public_5b0b00);

#define public_5b0b2c _public_5b0b2c
#define public_5b0b3e _public_5b0b3e

PROC_DECLARE(0x5b0b00, internal_5b0b00, public_5b0b00);
extern "C" NAKED register_t __cdecl internal_5b0b00()
{
    __asm
    {
        mov al, byte ptr ds : [public_679be5]
        test al, al
        je public_5b0b2c
        call public_59da50
        test eax, eax
        je public_5b0b2c
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_473e00
        xor ecx, ecx
        add esp, 4
        test al, al
        setne cl
        add ecx, 4
        mov eax, ecx
        ret 
        public_5b0b2c : nop
        mov cl, byte ptr ss : [esp+0xC]
        test cl, cl
        mov eax, 2
        jne public_5b0b3e
        mov eax, 0x12
        public_5b0b3e : nop
        mov edx, dword ptr ss : [esp+8]
        or eax, 2
        push eax
        mov eax, dword ptr ss : [esp+8]
        push edx
        push eax
        push 0
        call dword ptr ds : [public_5c72d4]
        ret 
        UNREACHABLE_TRAP(0x5b0b00)
    }
}

#undef public_5b0b2c
#undef public_5b0b3e
