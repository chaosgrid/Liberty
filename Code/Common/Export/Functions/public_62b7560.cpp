#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a92e0);
CLANG_FORWARD_PROC_SYMBOL(public_62aadc0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5d00);
CLANG_FORWARD_PROC_SYMBOL(public_62b7750);
CLANG_FORWARD_PROC_SYMBOL(public_62b7d90);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_62b75ae _public_62b75ae
#define public_62b7696 _public_62b7696
#define public_62b76fc _public_62b76fc
#define public_62b770c _public_62b770c
#define public_62b7726 _public_62b7726
#define public_62b773b _public_62b773b

PROC_DECLARE(0x62b7560, internal_62b7560, public_62b7560);
extern "C" NAKED register_t __cdecl internal_62b7560()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        mov esi, ecx
        call public_62a92e0
        mov eax, dword ptr ds : [edi+0xB8]
        mov dword ptr ds : [esi+0x1A4], eax
        mov cl, byte ptr ds : [edi+0xC4]
        mov byte ptr ds : [esi+0x1A8], cl
        mov dl, byte ptr ds : [edi+0xC5]
        mov byte ptr ds : [esi+0x1A9], dl
        call public_6303220
        test al, al
        jne public_62b75ae
        mov al, byte ptr ds : [esi+0x1A9]
        test al, al
        jne public_62b75ae
        mov byte ptr ds : [esi+0x15C], 1
        public_62b75ae : nop
        mov eax, dword ptr ds : [edi+0xC8]
        mov dword ptr ds : [esi+0x1B4], eax
        mov ecx, dword ptr ds : [edi+0xCC]
        mov dword ptr ds : [esi+0x1B8], ecx
        mov edx, dword ptr ds : [edi+0xD0]
        mov dword ptr ds : [esi+0x1D8], edx
        mov eax, dword ptr ds : [edi+0xD4]
        mov dword ptr ds : [esi+0x1DC], eax
        mov ecx, dword ptr ds : [edi+0xD8]
        mov dword ptr ds : [esi+0x1E0], ecx
        mov edx, dword ptr ds : [edi+0xDC]
        mov dword ptr ds : [esi+0x1AC], edx
        mov al, byte ptr ds : [edi+0xBC]
        mov byte ptr ds : [esi+0x1E4], al
        mov eax, dword ptr ds : [esi+0x1B4]
        test eax, eax
        mov ecx, dword ptr ds : [edi+0xC0]
        mov dword ptr ds : [esi+0x1E8], ecx
        je public_62b7696
        mov eax, dword ptr ds : [esi+0x88]
        mov ebp, dword ptr ds : [eax+0xA0]
        cmp byte ptr ss : [ebp], 0
        je public_62b7696
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x44]
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        push 0
        push 0
        mov dword ptr ss : [esp+0x1C], edx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push ebp
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x1C0], eax
        jne public_62b7696
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x1C]
        call public_62b7750
        mov ecx, dword ptr ds : [esi+0x88]
        add ecx, 8
        mov ebx, eax
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        mov eax, dword ptr ds : [ebx]
        push ebp
        push 0xE3
/*FIXUP push offset public_639e820 @0x62b7686*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e820
/*FIXUP push offset public_639e2e0 @0x62b768b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e2e0
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_62b7696 : nop
        mov edx, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x160], edx
        mov eax, dword ptr ds : [edi+0xE0]
        mov dword ptr ds : [esi+0x164], eax
        mov eax, dword ptr ds : [esi+0xE0]
        test eax, 0x600D60
        je public_62b76fc
        test al, 2
        jne public_62b76fc
        mov ecx, dword ptr ds : [edi+0xE0]
        mov eax, 0x3FFFFFFF
        test eax, ecx
        jne public_62b76fc
        test dword ptr ds : [esi+0x1B4], eax
        jne public_62b76fc
        lea ecx, ds:[edi+0xB8]
        mov ebx, 0x100001
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x6D
/*FIXUP push offset public_639e820 @0x62b76ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e820
/*FIXUP push offset public_639e7c8 @0x62b76f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e7c8
        push ebx
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_62b76fc : nop
        test byte ptr ds : [esi+0xE0], 0x84
        je public_62b770c
        mov byte ptr ds : [esi+0x1E4], 1
        public_62b770c : nop
        mov edx, dword ptr ds : [edi+0xE0]
        push edx
        mov ecx, esi
        call public_62aadc0
        mov eax, dword ptr ds : [edi+0xE8]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_62b773b
        public_62b7726 : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        mov ecx, esi
        call public_62b7d90
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edi+0xE8]
        jne public_62b7726
        public_62b773b : nop
        push 0
        push 0
        mov ecx, esi
        call public_62b5d00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62b7560)
    }
}

#undef public_62b75ae
#undef public_62b7696
#undef public_62b76fc
#undef public_62b770c
#undef public_62b7726
#undef public_62b773b
