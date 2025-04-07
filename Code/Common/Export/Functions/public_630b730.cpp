#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630b730);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x630b730, internal_630b730, public_630b730);
extern "C" NAKED register_t __cdecl internal_630b730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push edi
        xor edi, edi
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], 1
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], 0x461C4000
        push 0x10
        mov byte ptr ds : [esi+0x20], dl
        call public_6391d9c
        mov cl, byte ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x24], eax
        mov al, byte ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x30], 0x40A00000
        mov dword ptr ds : [esi+0x34], 0xBF800000
        mov byte ptr ds : [esi+0x40], al
        mov dword ptr ds : [esi+0x44], edi
        mov dword ptr ds : [esi+0x48], edi
        mov dword ptr ds : [esi+0x4C], edi
        add esp, 4
        mov dword ptr ds : [esi+0x54], edi
        mov dword ptr ds : [esi+0x58], edi
        mov dword ptr ds : [esi+0x5C], edi
        pop edi
        mov byte ptr ds : [esi+0x50], cl
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630b730)
    }
}
