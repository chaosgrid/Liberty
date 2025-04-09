#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_53c75b _public_53c75b

PROC_DECLARE(0x53c730, internal_53c730, public_53c730);
extern "C" NAKED register_t __cdecl internal_53c730()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53c75b
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        xor eax, eax
        mov al, byte ptr ds : [esi+6]
        push 0
        add esi, 4
        push eax
        push esi
        call dword ptr ds : [edx+0x4C]
        public_53c75b : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53c730)
    }
}

#undef public_53c75b
