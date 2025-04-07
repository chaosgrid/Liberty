#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b52c90);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b52ca9 _public_6b52ca9

PROC_DECLARE(0x6b52c90, internal_6b52c90, public_6b52c90);
extern "C" NAKED register_t __cdecl internal_6b52c90()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6b6cad0
        je public_6b52ca9
        push eax
        call public_6b6a092
        add esp, 4
        public_6b52ca9 : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b52c90)
    }
}

#undef public_6b52ca9
