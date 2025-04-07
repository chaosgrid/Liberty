#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

PROC_DECLARE(0x6ec4640, internal_6ec4640, public_6ec4640);
extern "C" NAKED register_t __cdecl internal_6ec4640()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0x10]
        push eax
        call public_6f15b90
        lea ecx, ds:[esi+0x44]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x78], eax
        call public_6f15b90
        mov dword ptr ds : [esi+0x7C], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec4640)
    }
}
