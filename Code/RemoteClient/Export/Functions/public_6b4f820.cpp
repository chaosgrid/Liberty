#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4f820);

#define public_6b4f836 _public_6b4f836

PROC_DECLARE(0x6b4f820, internal_6b4f820, public_6b4f820);
extern "C" NAKED register_t __cdecl internal_6b4f820()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6b4f836
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xE
        rep movsd
        pop esi
        public_6b4f836 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6b4f820)
    }
}

#undef public_6b4f836
