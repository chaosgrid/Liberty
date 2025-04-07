#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be5c60);
CLANG_FORWARD_PROC_SYMBOL(public_6be5ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be5c8a _public_6be5c8a

PROC_DECLARE(0x6be5c60, internal_6be5c60, public_6be5c60);
extern "C" NAKED register_t __cdecl internal_6be5c60()
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
        je public_6be5c8a
        mov ecx, eax
        call public_6be5ca0
        test eax, eax
        je public_6be5c8a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be5c8a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be5c60)
    }
}

#undef public_6be5c8a
