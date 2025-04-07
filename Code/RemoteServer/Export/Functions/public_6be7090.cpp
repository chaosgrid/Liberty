#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be7090);
CLANG_FORWARD_PROC_SYMBOL(public_6be70d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be70ba _public_6be70ba

PROC_DECLARE(0x6be7090, internal_6be7090, public_6be7090);
extern "C" NAKED register_t __cdecl internal_6be7090()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be70ba
        mov ecx, eax
        call public_6be70d0
        test eax, eax
        je public_6be70ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be70ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be7090)
    }
}

#undef public_6be70ba
