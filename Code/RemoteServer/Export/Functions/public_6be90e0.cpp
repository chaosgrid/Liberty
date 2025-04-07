#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be90e0);
CLANG_FORWARD_PROC_SYMBOL(public_6be9120);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be910a _public_6be910a

PROC_DECLARE(0x6be90e0, internal_6be90e0, public_6be90e0);
extern "C" NAKED register_t __cdecl internal_6be90e0()
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
        je public_6be910a
        mov ecx, eax
        call public_6be9120
        test eax, eax
        je public_6be910a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be910a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be90e0)
    }
}

#undef public_6be910a
