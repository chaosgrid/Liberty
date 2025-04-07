#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9180);
CLANG_FORWARD_PROC_SYMBOL(public_6be91c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be91aa _public_6be91aa

PROC_DECLARE(0x6be9180, internal_6be9180, public_6be9180);
extern "C" NAKED register_t __cdecl internal_6be9180()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x38
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be91aa
        mov ecx, eax
        call public_6be91c0
        test eax, eax
        je public_6be91aa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be91aa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be9180)
    }
}

#undef public_6be91aa
