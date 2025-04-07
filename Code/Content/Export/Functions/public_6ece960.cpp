#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece960);

PROC_DECLARE(0x6ece960, internal_6ece960, public_6ece960);
extern "C" NAKED register_t __cdecl internal_6ece960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb3030]
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0xC], eax
        xor eax, eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi], offset public_6fb6048
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ece960)
    }
}
