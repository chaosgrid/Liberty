#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be6780);
CLANG_FORWARD_PROC_SYMBOL(public_6be67c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be67aa _public_6be67aa

PROC_DECLARE(0x6be6780, internal_6be6780, public_6be6780);
extern "C" NAKED register_t __cdecl internal_6be6780()
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
        je public_6be67aa
        mov ecx, eax
        call public_6be67c0
        test eax, eax
        je public_6be67aa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be67aa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be6780)
    }
}

#undef public_6be67aa
