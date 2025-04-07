#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f52d90);
CLANG_FORWARD_PROC_SYMBOL(public_6f531a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f531e0);

#define public_6f531c2 _public_6f531c2

PROC_DECLARE(0x6f531a0, internal_6f531a0, public_6f531a0);
extern "C" NAKED register_t __cdecl internal_6f531a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], eax
        je public_6f531c2
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push eax
        push esi
        call public_6f531e0
        add esp, 0x10
        public_6f531c2 : nop
        push esi
        call public_6f52d90
        push esi
        call public_6f52920
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f531a0)
    }
}

#undef public_6f531c2
