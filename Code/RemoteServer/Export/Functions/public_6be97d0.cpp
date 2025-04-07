#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be97d0);
CLANG_FORWARD_PROC_SYMBOL(public_6beb660);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be97fd _public_6be97fd

PROC_DECLARE(0x6be97d0, internal_6be97d0, public_6be97d0);
extern "C" NAKED register_t __cdecl internal_6be97d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x90
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be97fd
        mov ecx, eax
        call public_6beb660
        test eax, eax
        je public_6be97fd
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be97fd : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be97d0)
    }
}

#undef public_6be97fd
