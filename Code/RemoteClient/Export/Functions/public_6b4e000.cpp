#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e000);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4e019 _public_6b4e019

PROC_DECLARE(0x6b4e000, internal_6b4e000, public_6b4e000);
extern "C" NAKED register_t __cdecl internal_6b4e000()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6b6e054
        je public_6b4e019
        push eax
        call public_6b6a092
        add esp, 4
        public_6b4e019 : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b4e000)
    }
}

#undef public_6b4e019
