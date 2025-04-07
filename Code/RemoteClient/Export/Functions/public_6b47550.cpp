#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47550);
CLANG_FORWARD_PROC_SYMBOL(public_6b494c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4757a _public_6b4757a

PROC_DECLARE(0x6b47550, internal_6b47550, public_6b47550);
extern "C" NAKED register_t __cdecl internal_6b47550()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4757a
        mov ecx, eax
        call public_6b494c0
        test eax, eax
        je public_6b4757a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4757a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47550)
    }
}

#undef public_6b4757a
