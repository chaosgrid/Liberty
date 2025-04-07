#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be6510);
CLANG_FORWARD_PROC_SYMBOL(public_6be6550);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be653a _public_6be653a

PROC_DECLARE(0x6be6510, internal_6be6510, public_6be6510);
extern "C" NAKED register_t __cdecl internal_6be6510()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x30
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be653a
        mov ecx, eax
        call public_6be6550
        test eax, eax
        je public_6be653a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be653a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be6510)
    }
}

#undef public_6be653a
