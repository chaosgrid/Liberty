#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

PROC_DECLARE(0x6b4e5e0, internal_6b4e5e0, public_6b4e5e0);
extern "C" NAKED register_t __cdecl internal_6b4e5e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        push eax
        call public_6b6a092
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b4e5e0)
    }
}
