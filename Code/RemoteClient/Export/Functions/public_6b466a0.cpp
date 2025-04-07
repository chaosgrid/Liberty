#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b466a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);

#define public_6b466c8 _public_6b466c8

PROC_DECLARE(0x6b466a0, internal_6b466a0, public_6b466a0);
extern "C" NAKED register_t __cdecl internal_6b466a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6b6c308
        mov dword ptr ds : [esi+0x28], 0
        je public_6b466c8
        push eax
        call dword ptr ds : [public_6b6b1dc]
        add esp, 4
        mov dword ptr ds : [esi+0x24], 0
        public_6b466c8 : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b466a0)
    }
}

#undef public_6b466c8
