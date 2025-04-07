#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x627b1d0, internal_627b1d0, public_627b1d0);
extern "C" NAKED register_t __cdecl internal_627b1d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+8]
        push edi
        call public_6334430
        xor ecx, ecx
        add esp, 4
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [edi], ecx
        pop edi
        mov byte ptr ds : [esi], cl
        mov byte ptr ds : [esi+1], cl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0xC], eax
        mov byte ptr ds : [esi+0x10], cl
        mov dword ptr ds : [esi+0x20], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x627b1d0)
    }
}
