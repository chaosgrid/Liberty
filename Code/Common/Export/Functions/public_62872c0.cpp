#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627ce00);
CLANG_FORWARD_PROC_SYMBOL(public_62819b0);
CLANG_FORWARD_PROC_SYMBOL(public_6282e00);
CLANG_FORWARD_PROC_SYMBOL(public_628edd0);
CLANG_FORWARD_PROC_SYMBOL(public_628eed0);
CLANG_FORWARD_PROC_SYMBOL(public_628ef30);
CLANG_FORWARD_PROC_SYMBOL(public_62b9490);
CLANG_FORWARD_PROC_SYMBOL(public_6318590);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6342820);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393115);

#define public_62872fb _public_62872fb
#define public_6287565 _public_6287565
#define public_6287570 _public_6287570
#define public_6287578 _public_6287578

PROC_DECLARE(0x62872c0, internal_62872c0, public_62872c0);
extern "C" NAKED register_t __cdecl internal_62872c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393115 @0x62872c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393115
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        push ebp
        push esi
        mov ebp, ecx
        push ebx
        mov dword ptr ss : [esp+0x14], ebp
        call public_627ce00
        xor eax, eax
        cmp ebx, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_62872fb
        lea eax, ds:[ebx+0x9C]
        public_62872fb : nop
        mov eax, dword ptr ds : [eax]
        push edi
        mov dword ptr ss : [ebp+0x9C], eax
        mov cl, byte ptr ds : [ebx+0xA0]
        mov al, byte ptr ss : [ebp+0xA0]
        xor cl, al
        and cl, 1
        xor cl, al
        mov byte ptr ss : [ebp+0xA0], cl
        mov edx, dword ptr ds : [ebx+0xA4]
        mov dword ptr ss : [ebp+0xA4], edx
        mov eax, dword ptr ds : [ebx+0xA8]
        mov dword ptr ss : [ebp+0xA8], eax
        mov ecx, dword ptr ds : [ebx+0xAC]
        mov dword ptr ss : [ebp+0xAC], ecx
        mov edx, dword ptr ds : [ebx+0xB0]
        mov dword ptr ss : [ebp+0xB0], edx
        mov eax, dword ptr ds : [ebx+0xB4]
        mov dword ptr ss : [ebp+0xB4], eax
        mov ecx, dword ptr ds : [ebx+0xB8]
        mov dword ptr ss : [ebp+0xB8], ecx
        mov dl, byte ptr ds : [ebx+0xBC]
        lea edi, ds:[ebx+0xBC]
        lea esi, ss:[ebp+0xBC]
        mov byte ptr ds : [esi], dl
        mov al, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], al
        mov cl, byte ptr ds : [edi+0xC]
        mov byte ptr ds : [esi+0xC], cl
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 1
        call public_6318590
        push edi
        mov ecx, esi
        call public_6282e00
        lea edx, ds:[ebx+0xD0]
        mov ecx, dword ptr ds : [edx]
        lea eax, ss:[ebp+0xD0]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [ebx+0xDC]
        mov dword ptr ss : [ebp+0xDC], eax
        mov ecx, dword ptr ds : [ebx+0xE0]
        mov dword ptr ss : [ebp+0xE0], ecx
        mov dword ptr ss : [ebp], offset public_639b884
        mov edx, dword ptr ds : [ebx+0xE4]
        lea edi, ss:[ebp+0xE4]
        mov dword ptr ds : [edi], edx
        mov al, byte ptr ds : [ebx+0xE8]
        lea esi, ds:[edi+4]
        push 0
        push 0
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 2
        mov dword ptr ss : [esp+0x20], edi
        mov byte ptr ds : [esi], al
        call public_62b9490
        mov dword ptr ds : [esi+4], eax
        lea ecx, ds:[ebx+0xE8]
        mov dword ptr ds : [esi+8], 0
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x38], edx
        call public_632c410
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_632c410
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [ecx]
        push edx
        push eax
        mov ecx, esi
        call public_628eed0
        lea ecx, ds:[ebx+0xF4]
        push ecx
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x30], 3
        call public_62819b0
        mov edx, dword ptr ds : [ebx+0x100]
        mov dword ptr ds : [edi+0x1C], edx
        mov eax, dword ptr ds : [ebx+0x104]
        mov dword ptr ss : [ebp+0x104], eax
        lea esi, ds:[ebx+0x108]
        lea edi, ss:[ebp+0x108]
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x13C]
        mov dword ptr ss : [ebp+0x13C], ecx
        mov edx, dword ptr ds : [ebx+0x140]
        mov dword ptr ss : [ebp+0x140], edx
        mov eax, dword ptr ds : [ebx+0x144]
        mov dword ptr ss : [ebp+0x144], eax
        mov cl, byte ptr ds : [ebx+0x148]
        lea edi, ds:[ebx+0x148]
        lea esi, ss:[ebp+0x148]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ds : [edi+0xC]
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 4
        mov byte ptr ds : [esi+0xC], al
        call public_6342820
        push edi
        mov ecx, esi
        call public_628edd0
        mov cl, byte ptr ds : [ebx+0x15C]
        mov byte ptr ss : [ebp+0x15C], cl
        mov edx, dword ptr ds : [ebx+0x160]
        mov dword ptr ss : [ebp+0x160], edx
        mov eax, dword ptr ds : [ebx+0x164]
        mov dword ptr ss : [ebp+0x164], eax
        mov ecx, dword ptr ds : [ebx+0x168]
        mov dword ptr ss : [ebp+0x168], ecx
        mov dl, byte ptr ds : [ebx+0x16C]
        mov byte ptr ss : [ebp+0x16C], dl
        mov eax, dword ptr ds : [ebx+0x170]
        mov dword ptr ss : [ebp+0x170], eax
        lea ecx, ds:[ebx+0x174]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp+0x174]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov dl, byte ptr ds : [ebx+0x180]
        lea esi, ss:[ebp+0x180]
        mov byte ptr ds : [esi], dl
        mov eax, dword ptr ds : [ebx+0x184]
        test eax, eax
        mov byte ptr ss : [esp+0x2C], 5
        pop edi
        jne public_6287565
        xor ecx, ecx
        jmp public_6287570
        public_6287565 : nop
        mov ecx, dword ptr ds : [ebx+0x188]
        sub ecx, eax
        sar ecx, 4
        public_6287570 : nop
        test ecx, ecx
        mov eax, ecx
        jge public_6287578
        xor eax, eax
        public_6287578 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x188]
        mov edx, dword ptr ds : [ebx+0x184]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_628ef30
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ds : [ebx+0x190]
        mov dword ptr ss : [ebp+0x190], eax
        mov ecx, dword ptr ds : [ebx+0x194]
        mov dword ptr ss : [ebp+0x194], ecx
        mov edx, dword ptr ds : [ebx+0x198]
        mov dword ptr ss : [ebp+0x198], edx
        mov eax, dword ptr ds : [ebx+0x19C]
        mov dword ptr ss : [ebp+0x19C], eax
        mov ecx, dword ptr ds : [ebx+0x1A0]
        mov dword ptr ss : [ebp+0x1A0], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        pop esi
        mov dword ptr ss : [ebp], offset public_639be5c
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x62872c0)
    }
}

#undef public_62872fb
#undef public_6287565
#undef public_6287570
#undef public_6287578
