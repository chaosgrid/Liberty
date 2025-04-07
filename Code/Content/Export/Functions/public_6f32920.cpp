#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32920);

PROC_DECLARE(0x6f32920, internal_6f32920, public_6f32920);
extern "C" NAKED register_t __cdecl internal_6f32920()
{
    __asm
    {
        xor eax, eax
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x40]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3030]
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f32920)
    }
}
