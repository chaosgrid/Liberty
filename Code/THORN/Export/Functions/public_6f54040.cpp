#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52990);
CLANG_FORWARD_PROC_SYMBOL(public_6f533d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53650);
CLANG_FORWARD_PROC_SYMBOL(public_6f54040);
CLANG_FORWARD_PROC_SYMBOL(public_6f540b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f541a0);

#define public_6f54083 _public_6f54083

PROC_DECLARE(0x6f54040, internal_6f54040, public_6f54040);
extern "C" NAKED register_t __cdecl internal_6f54040()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push 0x25
        push esi
        call public_6f52990
        add esp, 8
        test eax, eax
        je public_6f54083
        push esi
        call public_6f53650
        push eax
        push esi
        call public_6f540b0
        mov edi, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        push edi
        push esi
        mov dword ptr ds : [edi], 4
        mov dword ptr ds : [edi+4], 0
        call public_6f541a0
        add esp, 8
        pop edi
        pop esi
        ret 
        public_6f54083 : nop
        mov edi, dword ptr ss : [esp+0x10]
        push 0
        push edi
        push esi
        call public_6f53650
        add esp, 4
        push eax
        push esi
        call public_6f533d0
        add esp, 0x10
        push edi
        push esi
        call public_6f541a0
        add esp, 8
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54040)
    }
}

#undef public_6f54083
