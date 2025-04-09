#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4068d0);

PROC_DECLARE(0x4068d0, internal_4068d0, public_4068d0);
extern "C" NAKED register_t __cdecl internal_4068d0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov eax, 0xBF800000
        xor edi, edi
        lea ecx, ds:[esi+0x10]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        call dword ptr ds : [public_5c69a0]
        mov al, byte ptr ss : [esp+0xB]
        mov cl, byte ptr ss : [esp+0xB]
        mov dl, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov byte ptr ds : [esi+0x20], al
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov byte ptr ds : [esi+0x30], cl
        mov dword ptr ds : [esi+0x44], edi
        mov dword ptr ds : [esi+0x48], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov byte ptr ds : [esi+0x40], dl
        mov dword ptr ds : [esi+0x50], edi
        pop edi
        mov dword ptr ds : [esi], offset public_5c7734
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4068d0)
    }
}
