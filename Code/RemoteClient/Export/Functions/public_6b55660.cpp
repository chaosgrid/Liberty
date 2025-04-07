#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b55660);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b5567c _public_6b5567c

PROC_DECLARE(0x6b55660, internal_6b55660, public_6b55660);
extern "C" NAKED register_t __cdecl internal_6b55660()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x220]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6b6cc00
        je public_6b5567c
        push eax
        call public_6b6a092
        add esp, 4
        public_6b5567c : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b55660)
    }
}

#undef public_6b5567c
