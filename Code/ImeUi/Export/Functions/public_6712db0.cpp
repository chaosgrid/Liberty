#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67111c0);
CLANG_FORWARD_PROC_SYMBOL(public_67117d0);
CLANG_FORWARD_PROC_SYMBOL(public_6712db0);
CLANG_FORWARD_PROC_SYMBOL(public_67144c0);
CLANG_FORWARD_PROC_SYMBOL(public_6715460);

#define public_6712dd3 _public_6712dd3
#define public_6712de8 _public_6712de8

PROC_DECLARE(0x6712db0, internal_6712db0, public_6712db0);
extern "C" NAKED register_t __cdecl internal_6712db0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x7C]
        test al, al
        je public_6712de8
        call public_67111c0
        test eax, eax
        je public_6712dd3
        mov ecx, eax
        call public_67117d0
        push eax
        call public_6715460
        add esp, 4
        public_6712dd3 : nop
        mov ecx, dword ptr ds : [esi+0x90]
        lea eax, ds:[esi+0x1C]
        push eax
        push 0
        push ecx
        call public_67144c0
        add esp, 0xC
        public_6712de8 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6712db0)
    }
}

#undef public_6712dd3
#undef public_6712de8
