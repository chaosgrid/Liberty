#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_503a50);

PROC_DECLARE(0x503a50, internal_503a50, public_503a50);
extern "C" NAKED register_t __cdecl internal_503a50()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_5c6030]
        mov esi, ecx
        call edi
        lea ecx, ds:[esi+4]
        call edi
        lea ecx, ds:[esi+8]
        call edi
        lea ecx, ds:[esi+0xC]
        call edi
        lea ecx, ds:[esi+0x10]
        call edi
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x503a50)
    }
}
