#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b58e69 _public_6b58e69

PROC_DECLARE(0x6b58e50, internal_6b58e50, public_6b58e50);
extern "C" NAKED register_t __cdecl internal_6b58e50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6b6cd50
        je public_6b58e69
        push eax
        call public_6b6a092
        add esp, 4
        public_6b58e69 : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b58e50)
    }
}

#undef public_6b58e69
