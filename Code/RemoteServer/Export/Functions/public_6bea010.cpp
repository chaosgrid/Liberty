#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea010);
CLANG_FORWARD_PROC_SYMBOL(public_6bead30);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea03a _public_6bea03a

PROC_DECLARE(0x6bea010, internal_6bea010, public_6bea010);
extern "C" NAKED register_t __cdecl internal_6bea010()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bea03a
        mov ecx, eax
        call public_6bead30
        test eax, eax
        je public_6bea03a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea03a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea010)
    }
}

#undef public_6bea03a
