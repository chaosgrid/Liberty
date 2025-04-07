#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd6e10);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd6e1f _public_6bd6e1f

PROC_DECLARE(0x6bd6e10, internal_6bd6e10, public_6bd6e10);
extern "C" NAKED register_t __cdecl internal_6bd6e10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        shl eax, 2
        test eax, eax
        jge public_6bd6e1f
        xor eax, eax
        public_6bd6e1f : nop
        push eax
        call public_6c09d26
        add esp, 4
        mov dword ptr ds : [esi+0x24], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bd6e10)
    }
}

#undef public_6bd6e1f
