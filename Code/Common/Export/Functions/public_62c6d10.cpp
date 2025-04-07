#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c6d10);
CLANG_FORWARD_PROC_SYMBOL(public_62fd620);

PROC_DECLARE(0x62c6d10, internal_62c6d10, public_62c6d10);
extern "C" NAKED register_t __cdecl internal_62c6d10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62fd620
        mov dword ptr ds : [esi], offset public_639f5dc
        mov byte ptr ds : [esi+0x2EB], 1
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c6d10)
    }
}
