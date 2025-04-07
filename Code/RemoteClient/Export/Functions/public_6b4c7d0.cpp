#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4c7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4c810);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4c7fd _public_6b4c7fd

PROC_DECLARE(0x6b4c7d0, internal_6b4c7d0, public_6b4c7d0);
extern "C" NAKED register_t __cdecl internal_6b4c7d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0xB8
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4c7fd
        mov ecx, eax
        call public_6b4c810
        test eax, eax
        je public_6b4c7fd
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4c7fd : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4c7d0)
    }
}

#undef public_6b4c7fd
