#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

PROC_DECLARE(0x6d02070, internal_6d02070, public_6d02070);
extern "C" NAKED register_t __cdecl internal_6d02070()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx-4]
        push esi
        lea esi, ds:[ecx-4]
        mov ecx, esi
        mov dword ptr ss : [esp+4], eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+8], eax
        lea eax, ss:[esp+4]
        push eax
        push 0x26
        call public_6d43650
        mov edx, dword ptr ds : [esi]
        xor al, al
        mov byte ptr ss : [esp+0x19], al
        mov byte ptr ss : [esp+0x18], al
        add esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 2
        mov dword ptr ss : [esp+0x18], 0x3F800000
        call dword ptr ds : [edx+0x194]
        xor eax, eax
        pop esi
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6d02070)
    }
}
