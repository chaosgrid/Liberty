#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51a7d0);
CLANG_FORWARD_PROC_SYMBOL(public_51cbb0);

PROC_DECLARE(0x51a6a0, internal_51a6a0, public_51a6a0);
extern "C" NAKED register_t __cdecl internal_51a6a0()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x34]
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        push eax
        mov dword ptr ds : [esi+0x10C], edi
        mov dword ptr ds : [esi+0x114], edi
        mov dword ptr ds : [esi+0x110], edi
        mov dword ptr ds : [esi+0x118], edi
        call public_51cbb0
        push 1
        push edi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x38], edi
        call public_51a7d0
        mov byte ptr ds : [esi+0x34], 1
        lea edi, ds:[esi+4]
        mov ecx, 0xC
        lea esi, ss:[esp+8]
        rep movsd
        pop edi
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x51a6a0)
    }
}
