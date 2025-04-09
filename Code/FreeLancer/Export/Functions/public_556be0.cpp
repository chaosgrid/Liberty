#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556280);
CLANG_FORWARD_PROC_SYMBOL(public_556be0);

PROC_DECLARE(0x556be0, internal_556be0, public_556be0);
extern "C" NAKED register_t __cdecl internal_556be0()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, dword ptr ds : [public_610854]
        push edi
        push 0x49742400
        push 0x3E800000
        push 0x420C0000
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], eax
        sub esp, 0x10
        mov dword ptr ss : [esp+0x28], 0
        mov ecx, dword ptr ss : [esp+0x28]
        xor eax, eax
        mov edi, esp
        mov dword ptr ds : [edi], eax
        mov dword ptr ss : [esp+0x2C], 0
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x34], ecx
        xor ecx, ecx
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [public_610850]
        mov dword ptr ds : [edi+4], ecx
        lea eax, ss:[esp+0x30]
        mov dword ptr ds : [edi+8], edx
        push eax
        mov dword ptr ss : [esp+0x60], 0x3F800000
        mov dword ptr ss : [esp+0x50], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ds : [edi+0xC], esi
        call public_556280
        add esp, 0x20
        pop edi
        pop esi
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x556be0)
    }
}
