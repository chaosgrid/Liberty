#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b680);
CLANG_FORWARD_PROC_SYMBOL(public_6b4b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4b6aa _public_6b4b6aa

PROC_DECLARE(0x6b4b680, internal_6b4b680, public_6b4b680);
extern "C" NAKED register_t __cdecl internal_6b4b680()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x44
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4b6aa
        mov ecx, eax
        call public_6b4b6c0
        test eax, eax
        je public_6b4b6aa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4b6aa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4b680)
    }
}

#undef public_6b4b6aa
