#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b49d80);
CLANG_FORWARD_PROC_SYMBOL(public_6b49dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b49daa _public_6b49daa

PROC_DECLARE(0x6b49d80, internal_6b49d80, public_6b49d80);
extern "C" NAKED register_t __cdecl internal_6b49d80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b49daa
        mov ecx, eax
        call public_6b49dc0
        test eax, eax
        je public_6b49daa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b49daa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b49d80)
    }
}

#undef public_6b49daa
