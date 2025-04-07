#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9850);
CLANG_FORWARD_PROC_SYMBOL(public_6beb750);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be987a _public_6be987a

PROC_DECLARE(0x6be9850, internal_6be9850, public_6be9850);
extern "C" NAKED register_t __cdecl internal_6be9850()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x20
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be987a
        mov ecx, eax
        call public_6beb750
        test eax, eax
        je public_6be987a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be987a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be9850)
    }
}

#undef public_6be987a
