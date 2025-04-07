#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec1560);

PROC_DECLARE(0x6ec1560, internal_6ec1560, public_6ec1560);
extern "C" NAKED register_t __cdecl internal_6ec1560()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb3030]
        mov dword ptr ds : [esi], offset public_6fb5884
        mov byte ptr ds : [esi+0x14], 1
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec1560)
    }
}
