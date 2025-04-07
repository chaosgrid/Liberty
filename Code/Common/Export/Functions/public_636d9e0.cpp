#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_636d9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_636d9fa _public_636d9fa

PROC_DECLARE(0x636d9e0, internal_636d9e0, public_636d9e0);
extern "C" NAKED register_t __cdecl internal_636d9e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_636d9fa
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0x18], 0
        public_636d9fa : nop
        mov eax, dword ptr ds : [esi+0x1C]
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [esi+0x1C], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636d9e0)
    }
}

#undef public_636d9fa
