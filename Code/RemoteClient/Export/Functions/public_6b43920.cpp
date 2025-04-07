#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b43920);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b43934 _public_6b43934

PROC_DECLARE(0x6b43920, internal_6b43920, public_6b43920);
extern "C" NAKED register_t __cdecl internal_6b43920()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        push edi
        je public_6b43934
        push eax
        call public_6b6a092
        add esp, 4
        public_6b43934 : nop
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        call public_6b6a134
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push ecx
        push eax
        mov dword ptr ds : [esi+0x20], eax
        call dword ptr ds : [public_6b6b1b4]
        add esp, 0x10
        mov dword ptr ds : [esi+0x24], edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6b43920)
    }
}

#undef public_6b43934
