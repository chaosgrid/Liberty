#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b48ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b47cfa _public_6b47cfa

PROC_DECLARE(0x6b47cd0, internal_6b47cd0, public_6b47cd0);
extern "C" NAKED register_t __cdecl internal_6b47cd0()
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
        je public_6b47cfa
        mov ecx, eax
        call public_6b48ec0
        test eax, eax
        je public_6b47cfa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b47cfa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47cd0)
    }
}

#undef public_6b47cfa
