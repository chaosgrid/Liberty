#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e430);

PROC_DECLARE(0x42e430, internal_42e430, public_42e430);
extern "C" NAKED register_t __cdecl internal_42e430()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_5c69a0]
        xor eax, eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x54], eax
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [esi+0x60], eax
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi+0x68], eax
        mov dword ptr ds : [esi+0x6C], eax
        mov dword ptr ds : [esi+0x70], eax
        mov dword ptr ds : [esi+0x74], eax
        mov dword ptr ds : [esi+0x78], eax
        mov dword ptr ds : [esi+0x7C], eax
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42e430)
    }
}
