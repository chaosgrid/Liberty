#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);

PROC_DECLARE(0x6ec12f0, internal_6ec12f0, public_6ec12f0);
extern "C" NAKED register_t __cdecl internal_6ec12f0()
{
    __asm
    {
        xor eax, eax
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x90], eax
        mov dword ptr ds : [esi+0x88], eax
        mov dword ptr ds : [esi+0x94], eax
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15940
        lea ecx, ds:[esi+0x40]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x74], eax
        call public_6f15940
        mov dword ptr ds : [esi+0x78], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec12f0)
    }
}
