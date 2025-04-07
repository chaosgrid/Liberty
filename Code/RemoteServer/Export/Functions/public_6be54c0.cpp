#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be54c0);
CLANG_FORWARD_PROC_SYMBOL(public_6be5500);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be54ea _public_6be54ea

PROC_DECLARE(0x6be54c0, internal_6be54c0, public_6be54c0);
extern "C" NAKED register_t __cdecl internal_6be54c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x68
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be54ea
        mov ecx, eax
        call public_6be5500
        test eax, eax
        je public_6be54ea
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be54ea : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be54c0)
    }
}

#undef public_6be54ea
