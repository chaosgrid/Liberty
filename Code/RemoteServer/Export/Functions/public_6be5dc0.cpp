#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be5dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6be5e00);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be5dea _public_6be5dea

PROC_DECLARE(0x6be5dc0, internal_6be5dc0, public_6be5dc0);
extern "C" NAKED register_t __cdecl internal_6be5dc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x48
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be5dea
        mov ecx, eax
        call public_6be5e00
        test eax, eax
        je public_6be5dea
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be5dea : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be5dc0)
    }
}

#undef public_6be5dea
