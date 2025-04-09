#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421050);
CLANG_FORWARD_PROC_SYMBOL(public_421070);
CLANG_FORWARD_PROC_SYMBOL(public_4c92b0);

PROC_DECLARE(0x4c92b0, internal_4c92b0, public_4c92b0);
extern "C" NAKED register_t __cdecl internal_4c92b0()
{
    __asm
    {
        mov eax, ecx
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea edx, ds:[eax+0x3C]
        mov edi, edx
        mov ecx, 0xC
        rep movsd
        lea esi, ds:[eax+0x7C]
        push edx
        mov ecx, esi
        call public_421050
        mov ecx, esi
        call public_421070
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4c92b0)
    }
}
