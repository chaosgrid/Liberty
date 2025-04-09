#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_40d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b8058);

#define public_40c676 _public_40c676

PROC_DECLARE(0x40c4d0, internal_40c4d0, public_40c4d0);
extern "C" NAKED register_t __cdecl internal_40c4d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        push 0
/*FIXUP push offset public_61046c @0x40c4d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_61046c
/*FIXUP push offset public_6101f0 @0x40c4de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101f0
        push 0
        push eax
        mov esi, ecx
        call public_5b8058
        mov ebx, dword ptr ds : [esi+0x18]
        mov edi, eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], edx
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [edi+0x1C]
        add esp, 0x14
        lea edx, ds:[edi+0x20]
        mov dword ptr ds : [esi+0x1C], ecx
        push edx
        lea ecx, ds:[esi+0x20]
        call public_40d2c0
        lea eax, ds:[edi+0x30]
        push eax
        lea ecx, ds:[esi+0x30]
        call public_5595c0
        lea ecx, ds:[edi+0x40]
        push ecx
        lea ecx, ds:[esi+0x40]
        call public_40d4b0
        mov al, byte ptr ds : [edi+0x50]
        mov cl, byte ptr ds : [esi+0x50]
        xor al, cl
        and al, 1
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov cl, byte ptr ds : [edi+0x50]
        xor cl, al
        and cl, 2
        xor cl, al
        mov byte ptr ds : [esi+0x50], cl
        mov al, byte ptr ds : [edi+0x50]
        xor al, cl
        and al, 4
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov cl, byte ptr ds : [edi+0x50]
        xor cl, al
        and cl, 8
        xor cl, al
        mov byte ptr ds : [esi+0x50], cl
        mov dl, byte ptr ds : [edi+0x50]
        xor dl, cl
        and dl, 0x10
        xor dl, cl
        mov byte ptr ds : [esi+0x50], dl
        mov eax, dword ptr ds : [edi+0x50]
        mov dword ptr ds : [esi+0x50], eax
        mov ecx, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [esi+0x54], ecx
        mov edx, dword ptr ds : [edi+0x58]
        mov dword ptr ds : [esi+0x58], edx
        mov eax, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x5C], eax
        mov ecx, dword ptr ds : [edi+0x60]
        mov dword ptr ds : [esi+0x60], ecx
        mov edx, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [esi+0x64], edx
        mov eax, dword ptr ds : [edi+0x68]
        mov dword ptr ds : [esi+0x68], eax
        mov ecx, dword ptr ds : [edi+0x6C]
        mov dword ptr ds : [esi+0x6C], ecx
        mov edx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], edx
        mov eax, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], eax
        mov ecx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], ecx
        mov edx, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], edx
        mov eax, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], eax
        mov ecx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x84], ecx
        mov edx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], edx
        mov eax, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], eax
        mov ecx, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x90], ecx
        mov edx, dword ptr ds : [edi+0x94]
        mov dword ptr ds : [esi+0x94], edx
        mov eax, dword ptr ds : [edi+0x98]
        mov dword ptr ds : [esi+0x98], eax
        mov ecx, dword ptr ds : [edi+0x9C]
        mov dword ptr ds : [esi+0x9C], ecx
        mov edx, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [esi+0xA0], edx
        mov eax, dword ptr ds : [edi+0xA4]
        mov dword ptr ds : [esi+0xA4], eax
        mov ecx, dword ptr ds : [edi+0xA8]
        mov dword ptr ds : [esi+0xA8], ecx
        mov edx, dword ptr ds : [edi+0xAC]
        mov dword ptr ds : [esi+0xAC], edx
        mov eax, dword ptr ds : [edi+0xB0]
        mov dword ptr ds : [esi+0xB0], eax
        lea eax, ds:[esi+0xB4]
        sub edi, esi
        mov ecx, 5
        public_40c676 : nop
        mov edx, dword ptr ds : [edi+eax]
        mov dword ptr ds : [eax], edx
        add eax, 4
        dec ecx
        jne public_40c676
        pop edi
        mov dword ptr ds : [esi+0x18], ebx
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40c4d0)
    }
}

#undef public_40c676
