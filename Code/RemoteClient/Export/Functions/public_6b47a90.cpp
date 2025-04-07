#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47a90);
CLANG_FORWARD_PROC_SYMBOL(public_6b48b00);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b47abd _public_6b47abd

PROC_DECLARE(0x6b47a90, internal_6b47a90, public_6b47a90);
extern "C" NAKED register_t __cdecl internal_6b47a90()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x220
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b47abd
        mov ecx, eax
        call public_6b48b00
        test eax, eax
        je public_6b47abd
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b47abd : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47a90)
    }
}

#undef public_6b47abd
