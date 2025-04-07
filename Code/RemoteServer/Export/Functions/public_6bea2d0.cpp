#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6beb120);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea2fd _public_6bea2fd

PROC_DECLARE(0x6bea2d0, internal_6bea2d0, public_6bea2d0);
extern "C" NAKED register_t __cdecl internal_6bea2d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0xB0
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bea2fd
        mov ecx, eax
        call public_6beb120
        test eax, eax
        je public_6bea2fd
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea2fd : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea2d0)
    }
}

#undef public_6bea2fd
