#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04d60);

PROC_DECLARE(0x6d04d60, internal_6d04d60, public_6d04d60);
extern "C" NAKED register_t __cdecl internal_6d04d60()
{
    __asm
    {
        sub esp, 0x44
        xor eax, eax
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x68], eax
        mov byte ptr ss : [esp+8], al
        mov byte ptr ss : [esp+9], al
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x24], eax
        mov byte ptr ss : [esp+0xA], al
        mov eax, dword ptr ss : [esp+0x50]
        push edi
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+8], eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x50]
        lea edi, ds:[esi+0x64]
        push edi
        mov dword ptr ss : [esp+0x24], eax
        push edx
        lea eax, ss:[esp+0x10]
        lea ecx, ds:[esi+0x60]
        push eax
        mov dword ptr ss : [esp+0x54], ecx
        call dword ptr ds : [public_6d64448]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [esi+0x10]
        push ecx
        push edx
        call dword ptr ds : [public_6d64444]
        mov eax, dword ptr ds : [edi]
        push 1
        push eax
        call dword ptr ds : [public_6d6445c]
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 0x1C
        call dword ptr ds : [public_6d6419c]
        mov edi, eax
        lea ecx, ds:[edi+0x24]
        push ecx
        call dword ptr ds : [public_6d641a0]
        mov dword ptr ds : [esi+0x78], eax
        fld dword ptr ds : [edi+0x60]
        fstp dword ptr ds : [esi+0x84]
        fld dword ptr ds : [edi+0x64]
        add esp, 4
        fst dword ptr ds : [esi+0x80]
        pop edi
        fstp dword ptr ds : [esi+0x7C]
        pop esi
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x6d04d60)
    }
}
