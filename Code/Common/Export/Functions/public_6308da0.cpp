#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e1f0);

PROC_DECLARE(0x6308da0, internal_6308da0, public_6308da0);
extern "C" NAKED register_t __cdecl internal_6308da0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov cl, byte ptr ds : [eax+8]
        add eax, 0xC
        mov byte ptr ds : [esi+8], cl
        push eax
        lea ecx, ds:[esi+0xC]
        call public_630e1f0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6308da0)
    }
}
