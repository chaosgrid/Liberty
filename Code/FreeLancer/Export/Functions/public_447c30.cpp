#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412050);
CLANG_FORWARD_PROC_SYMBOL(public_412070);
CLANG_FORWARD_PROC_SYMBOL(public_447c30);
CLANG_FORWARD_PROC_SYMBOL(public_448270);
CLANG_FORWARD_PROC_SYMBOL(public_454eb0);
CLANG_FORWARD_PROC_SYMBOL(public_454f80);
CLANG_FORWARD_PROC_SYMBOL(public_456540);

PROC_DECLARE(0x447c30, internal_447c30, public_447c30);
extern "C" NAKED register_t __cdecl internal_447c30()
{
    __asm
    {
        sub esp, 0x30
        push esi
        push edi
        push 0x3F800000
        mov edi, ecx
        call public_412070
        fld dword ptr ds : [public_61650c]
        fdivr qword ptr ds : [public_5c89b8]
        fstp dword ptr ss : [esp]
        push 0
        call public_412050
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        push 0
        push eax
        mov ecx, offset public_66d2d0
        call public_456540
        lea ecx, ss:[esp+8]
        mov esi, eax
        call dword ptr ds : [public_5c6184]
        mov edx, dword ptr ss : [esp+0x3C]
        push 0
        lea ecx, ss:[esp+0xC]
        push ecx
        push 0
        push edx
        mov ecx, esi
        call public_454eb0
        mov eax, 1
        mov ecx, esi
        mov dword ptr ds : [esi], 0
        mov byte ptr ds : [esi+6], al
        mov byte ptr ds : [esi+8], al
        mov byte ptr ds : [esi+9], al
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x18], offset _public_448270
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], 0
        mov byte ptr ds : [esi+0x14], al
        call public_454f80
        mov dword ptr ds : [edi+0xAC], 2
        pop edi
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x447c30)
    }
}
