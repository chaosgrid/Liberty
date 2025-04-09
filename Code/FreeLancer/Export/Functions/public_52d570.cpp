#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52c830);
CLANG_FORWARD_PROC_SYMBOL(public_52d570);

PROC_DECLARE(0x52d570, internal_52d570, public_52d570);
extern "C" NAKED register_t __cdecl internal_52d570()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_52c830
        mov dword ptr ds : [esi], offset public_5dd564
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x52d570)
    }
}
