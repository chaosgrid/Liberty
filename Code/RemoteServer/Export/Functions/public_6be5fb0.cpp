#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be5fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6be5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be5fda _public_6be5fda

PROC_DECLARE(0x6be5fb0, internal_6be5fb0, public_6be5fb0);
extern "C" NAKED register_t __cdecl internal_6be5fb0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be5fda
        mov ecx, eax
        call public_6be5ff0
        test eax, eax
        je public_6be5fda
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be5fda : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be5fb0)
    }
}

#undef public_6be5fda
