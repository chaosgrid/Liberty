#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b42f00);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b42f20 _public_6b42f20

PROC_DECLARE(0x6b42f00, internal_6b42f00, public_6b42f00);
extern "C" NAKED register_t __cdecl internal_6b42f00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6b6c238
        je public_6b42f20
        push eax
        call public_6b6a092
        add esp, 4
        mov dword ptr ds : [esi+0x20], 0
        public_6b42f20 : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b42f00)
    }
}

#undef public_6b42f20
