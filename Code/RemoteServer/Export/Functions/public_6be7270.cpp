#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be7270);
CLANG_FORWARD_PROC_SYMBOL(public_6be72b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be729a _public_6be729a

PROC_DECLARE(0x6be7270, internal_6be7270, public_6be7270);
extern "C" NAKED register_t __cdecl internal_6be7270()
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
        je public_6be729a
        mov ecx, eax
        call public_6be72b0
        test eax, eax
        je public_6be729a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be729a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be7270)
    }
}

#undef public_6be729a
