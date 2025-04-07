#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);

#define public_62cf141 _public_62cf141

PROC_DECLARE(0x62cf0f0, internal_62cf0f0, public_62cf0f0);
extern "C" NAKED register_t __cdecl internal_62cf0f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dl, byte ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x24]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea eax, ds:[edi+0xC]
        and dl, 0xFE
        push eax
        add ecx, 0x34
        mov byte ptr ds : [esi+0x28], dl
        call public_62e74a0
        lea ecx, ds:[edi+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x34
        mov dword ptr ds : [esi+0x34], eax
        call public_62e74a0
        mov dword ptr ds : [esi+0x38], eax
        mov eax, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [edi+0x14]
        test eax, eax
        mov al, byte ptr ds : [esi+0x28]
        mov dword ptr ds : [esi+0x58], edx
        je public_62cf141
        or al, 2
        mov byte ptr ds : [esi+0x28], al
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62cf141 : nop
        and al, 0xFD
        mov byte ptr ds : [esi+0x28], al
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cf0f0)
    }
}

#undef public_62cf141
