#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea210);
CLANG_FORWARD_PROC_SYMBOL(public_6beb1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea23d _public_6bea23d

PROC_DECLARE(0x6bea210, internal_6bea210, public_6bea210);
extern "C" NAKED register_t __cdecl internal_6bea210()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x220
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bea23d
        mov ecx, eax
        call public_6beb1e0
        test eax, eax
        je public_6bea23d
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea23d : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea210)
    }
}

#undef public_6bea23d
