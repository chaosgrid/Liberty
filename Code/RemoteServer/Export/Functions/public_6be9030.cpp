#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9030);
CLANG_FORWARD_PROC_SYMBOL(public_6be9070);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be905a _public_6be905a

PROC_DECLARE(0x6be9030, internal_6be9030, public_6be9030);
extern "C" NAKED register_t __cdecl internal_6be9030()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x44
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be905a
        mov ecx, eax
        call public_6be9070
        test eax, eax
        je public_6be905a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be905a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be9030)
    }
}

#undef public_6be905a
