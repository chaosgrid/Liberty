#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3d980);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3d999 _public_6b3d999

PROC_DECLARE(0x6b3d980, internal_6b3d980, public_6b3d980);
extern "C" NAKED register_t __cdecl internal_6b3d980()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6b6c104
        je public_6b3d999
        push eax
        call public_6b6a092
        add esp, 4
        public_6b3d999 : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b3d980)
    }
}

#undef public_6b3d999
