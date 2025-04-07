#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4dc30);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4dc49 _public_6b4dc49
#define public_6b4dc59 _public_6b4dc59

PROC_DECLARE(0x6b4dc30, internal_6b4dc30, public_6b4dc30);
extern "C" NAKED register_t __cdecl internal_6b4dc30()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6b6e004
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6b4dc49
        push eax
        call public_6b6a092
        add esp, 4
        public_6b4dc49 : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6b4dc59
        push eax
        call public_6b6a092
        add esp, 4
        public_6b4dc59 : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b4dc30)
    }
}

#undef public_6b4dc49
#undef public_6b4dc59
