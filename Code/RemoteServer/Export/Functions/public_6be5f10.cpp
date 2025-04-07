#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be5f10);
CLANG_FORWARD_PROC_SYMBOL(public_6be5f50);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be5f3a _public_6be5f3a

PROC_DECLARE(0x6be5f10, internal_6be5f10, public_6be5f10);
extern "C" NAKED register_t __cdecl internal_6be5f10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x28
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be5f3a
        mov ecx, eax
        call public_6be5f50
        test eax, eax
        je public_6be5f3a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be5f3a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be5f10)
    }
}

#undef public_6be5f3a
