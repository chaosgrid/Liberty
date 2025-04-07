#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c30920);

PROC_DECLARE(0x6c30920, internal_6c30920, public_6c30920);
extern "C" NAKED register_t __cdecl internal_6c30920()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], offset public_6c366d0
        mov dword ptr ds : [esi+8], offset public_6c361dc
        mov dword ptr ds : [esi+0xC], offset public_6c361c0
        lea eax, ds:[esi+4]
        xor ecx, ecx
        mov dword ptr ds : [esi+0x18], ecx
        push eax
        mov dword ptr ds : [esi], offset public_6c366b0
        mov dword ptr ds : [eax], offset public_6c36638
        mov dword ptr ds : [esi+8], offset public_6c36628
        mov dword ptr ds : [esi+0xC], offset public_6c3660c
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x1C], ecx
        call public_6c2f5e0
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c30920)
    }
}
