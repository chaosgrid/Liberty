#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4cd70);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4cd89 _public_6b4cd89

PROC_DECLARE(0x6b4cd70, internal_6b4cd70, public_6b4cd70);
extern "C" NAKED register_t __cdecl internal_6b4cd70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x64]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6b6dc44
        je public_6b4cd89
        push eax
        call public_6b6a092
        add esp, 4
        public_6b4cd89 : nop
        mov dword ptr ds : [esi+0x64], 0
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b4cd70)
    }
}

#undef public_6b4cd89
