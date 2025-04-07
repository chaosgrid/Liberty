#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0170);
CLANG_FORWARD_PROC_SYMBOL(public_62a0e00);
CLANG_FORWARD_PROC_SYMBOL(public_630e750);

PROC_DECLARE(0x62a0170, internal_62a0170, public_62a0170);
extern "C" NAKED register_t __cdecl internal_62a0170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi], eax
        xor eax, eax
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov byte ptr ds : [esi+0x20], al
        mov dword ptr ds : [esi+0x24], eax
        mov ecx, 1
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], eax
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        push ecx
        call public_630e750
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        fild dword ptr ds : [edx+0x10]
        add esp, 8
        mov ecx, esi
        fstp dword ptr ds : [esi+0xC]
        call public_62a0e00
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62a0170)
    }
}
