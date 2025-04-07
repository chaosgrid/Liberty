#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9e90);
CLANG_FORWARD_PROC_SYMBOL(public_6beab20);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be9eba _public_6be9eba

PROC_DECLARE(0x6be9e90, internal_6be9e90, public_6be9e90);
extern "C" NAKED register_t __cdecl internal_6be9e90()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x3C
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be9eba
        mov ecx, eax
        call public_6beab20
        test eax, eax
        je public_6be9eba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be9eba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be9e90)
    }
}

#undef public_6be9eba
