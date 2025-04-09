#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51a7d0);
CLANG_FORWARD_PROC_SYMBOL(public_51d070);

PROC_DECLARE(0x51a730, internal_51a730, public_51a730);
extern "C" NAKED register_t __cdecl internal_51a730()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        push esi
        push edi
        push 0
        push ebp
        lea eax, ss:[esp+0x18]
        push eax
        mov ebx, ecx
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        call public_51a7d0
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        lea esi, ss:[esp+0x10]
        rep movsd
        push ebp
        mov ecx, ebx
        mov byte ptr ds : [ebx+0x34], 1
        call public_51d070
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x51a730)
    }
}
