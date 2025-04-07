#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4ccd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4cd10);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4ccfa _public_6b4ccfa

PROC_DECLARE(0x6b4ccd0, internal_6b4ccd0, public_6b4ccd0);
extern "C" NAKED register_t __cdecl internal_6b4ccd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x78
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4ccfa
        mov ecx, eax
        call public_6b4cd10
        test eax, eax
        je public_6b4ccfa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4ccfa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4ccd0)
    }
}

#undef public_6b4ccfa
