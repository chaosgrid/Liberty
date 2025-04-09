#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e250);

PROC_DECLARE(0x40e250, internal_40e250, public_40e250);
extern "C" NAKED register_t __cdecl internal_40e250()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [esi], ebx
        call dword ptr ds : [public_5c6030]
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+8], ebx
        call dword ptr ds : [public_5c69a0]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+0x20], bl
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x4C], 0xFFFFFFFF
        mov eax, esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x40e250)
    }
}
