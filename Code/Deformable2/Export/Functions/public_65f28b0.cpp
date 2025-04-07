#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f28b0);

PROC_DECLARE(0x65f28b0, internal_65f28b0, public_65f28b0);
extern "C" NAKED register_t __cdecl internal_65f28b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        push 0x2000
        push esi
        call dword ptr ds : [public_6601044]
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65f28b0)
    }
}
