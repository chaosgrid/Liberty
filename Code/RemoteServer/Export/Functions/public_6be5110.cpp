#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be5110);
CLANG_FORWARD_PROC_SYMBOL(public_6be5150);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be513a _public_6be513a

PROC_DECLARE(0x6be5110, internal_6be5110, public_6be5110);
extern "C" NAKED register_t __cdecl internal_6be5110()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x28
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be513a
        mov ecx, eax
        call public_6be5150
        test eax, eax
        je public_6be513a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be513a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be5110)
    }
}

#undef public_6be513a
