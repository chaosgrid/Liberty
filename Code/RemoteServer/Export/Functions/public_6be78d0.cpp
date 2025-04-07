#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be78d0);
CLANG_FORWARD_PROC_SYMBOL(public_6be7910);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be78fa _public_6be78fa

PROC_DECLARE(0x6be78d0, internal_6be78d0, public_6be78d0);
extern "C" NAKED register_t __cdecl internal_6be78d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x78
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be78fa
        mov ecx, eax
        call public_6be7910
        test eax, eax
        je public_6be78fa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be78fa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be78d0)
    }
}

#undef public_6be78fa
