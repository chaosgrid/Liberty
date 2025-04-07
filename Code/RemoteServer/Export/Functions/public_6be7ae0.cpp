#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be7ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6be7b20);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be7b0a _public_6be7b0a

PROC_DECLARE(0x6be7ae0, internal_6be7ae0, public_6be7ae0);
extern "C" NAKED register_t __cdecl internal_6be7ae0()
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
        je public_6be7b0a
        mov ecx, eax
        call public_6be7b20
        test eax, eax
        je public_6be7b0a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be7b0a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be7ae0)
    }
}

#undef public_6be7b0a
