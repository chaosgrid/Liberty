#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4311d0);

PROC_DECLARE(0x4311d0, internal_4311d0, public_4311d0);
extern "C" NAKED register_t __cdecl internal_4311d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+4]
        call dword ptr ds : [public_5c6030]
        xor eax, eax
        mov byte ptr ds : [esi+0x10], al
        mov byte ptr ds : [esi+0x11], al
        mov dword ptr ds : [esi+0xC], eax
        mov word ptr ds : [esi+0x12], ax
        mov dword ptr ds : [esi], offset public_5cabfc
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4311d0)
    }
}
