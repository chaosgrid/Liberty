#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b527f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b52809 _public_6b52809

PROC_DECLARE(0x6b527f0, internal_6b527f0, public_6b527f0);
extern "C" NAKED register_t __cdecl internal_6b527f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6b6cac0
        je public_6b52809
        push eax
        call public_6b6a092
        add esp, 4
        public_6b52809 : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b527f0)
    }
}

#undef public_6b52809
