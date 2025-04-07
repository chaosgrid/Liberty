#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6beab80);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be9efa _public_6be9efa

PROC_DECLARE(0x6be9ed0, internal_6be9ed0, public_6be9ed0);
extern "C" NAKED register_t __cdecl internal_6be9ed0()
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
        je public_6be9efa
        mov ecx, eax
        call public_6beab80
        test eax, eax
        je public_6be9efa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be9efa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be9ed0)
    }
}

#undef public_6be9efa
