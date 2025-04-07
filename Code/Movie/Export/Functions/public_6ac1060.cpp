#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1000);
CLANG_FORWARD_PROC_SYMBOL(public_6ac1060);

PROC_DECLARE(0x6ac1060, internal_6ac1060, public_6ac1060);
extern "C" NAKED register_t __cdecl internal_6ac1060()
{
    __asm
    {
        sub esp, 0x30
        push edi
        mov ecx, 0xC
        xor eax, eax
        lea edi, ss:[esp+4]
        rep stosd
        push eax
        mov dword ptr ss : [esp+8], 0x30
        mov dword ptr ss : [esp+0xC], 0xA0
        mov dword ptr ss : [esp+0x10], offset _public_6ac1000
        call dword ptr ds : [public_6ada064]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+4]
        push eax
        mov dword ptr ss : [esp+0x30], offset public_6ada1d4
        call dword ptr ds : [public_6ada180]
        pop edi
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x6ac1060)
    }
}
