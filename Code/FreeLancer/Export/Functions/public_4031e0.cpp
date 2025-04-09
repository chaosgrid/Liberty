#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4031e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x4031e0, internal_4031e0, public_4031e0);
extern "C" NAKED register_t __cdecl internal_4031e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_5b7e1d
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4031e0)
    }
}
