#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454e80);

PROC_DECLARE(0x454e80, internal_454e80, public_454e80);
extern "C" NAKED register_t __cdecl internal_454e80()
{
    __asm
    {
        push esi
        lea esi, ds:[ecx+0x120]
        push esi
        call dword ptr ds : [public_5c60c8]
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        push esi
        call dword ptr ds : [public_5c60cc]
        add esp, 0xC
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x454e80)
    }
}
