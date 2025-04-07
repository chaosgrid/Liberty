#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628a4e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ad4f0);

PROC_DECLARE(0x62ad4f0, internal_62ad4f0, public_62ad4f0);
extern "C" NAKED register_t __cdecl internal_62ad4f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push esi
        call public_628a4e0
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62ad4f0)
    }
}
