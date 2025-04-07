#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4bd00);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4bcea _public_6b4bcea

PROC_DECLARE(0x6b4bcc0, internal_6b4bcc0, public_6b4bcc0);
extern "C" NAKED register_t __cdecl internal_6b4bcc0()
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
        je public_6b4bcea
        mov ecx, eax
        call public_6b4bd00
        test eax, eax
        je public_6b4bcea
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4bcea : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4bcc0)
    }
}

#undef public_6b4bcea
