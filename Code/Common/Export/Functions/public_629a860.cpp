#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627ce00);
CLANG_FORWARD_PROC_SYMBOL(public_627f280);
CLANG_FORWARD_PROC_SYMBOL(public_6286fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6288080);
CLANG_FORWARD_PROC_SYMBOL(public_628e870);
CLANG_FORWARD_PROC_SYMBOL(public_628e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63938d0);

#define public_629a89c _public_629a89c
#define public_629ab55 _public_629ab55
#define public_629ab72 _public_629ab72

PROC_DECLARE(0x629a860, internal_629a860, public_629a860);
extern "C" NAKED register_t __cdecl internal_629a860()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63938d0 @0x629a862*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63938d0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        push edi
        mov ebx, ecx
        push ebp
        mov dword ptr ss : [esp+0x18], ebx
        call public_627ce00
        xor eax, eax
        cmp ebp, eax
        mov dword ptr ss : [esp+0x24], eax
        je public_629a89c
        lea eax, ss:[ebp+0x9C]
        public_629a89c : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0x9C], eax
        mov cl, byte ptr ss : [ebp+0xA0]
        mov al, byte ptr ds : [ebx+0xA0]
        xor cl, al
        and cl, 1
        xor cl, al
        mov byte ptr ds : [ebx+0xA0], cl
        mov edx, dword ptr ss : [ebp+0xA4]
        mov dword ptr ds : [ebx+0xA4], edx
        mov eax, dword ptr ss : [ebp+0xA8]
        mov dword ptr ds : [ebx+0xA8], eax
        mov ecx, dword ptr ss : [ebp+0xAC]
        mov dword ptr ds : [ebx+0xAC], ecx
        mov edx, dword ptr ss : [ebp+0xB0]
        mov dword ptr ds : [ebx+0xB0], edx
        mov eax, dword ptr ss : [ebp+0xB4]
        mov dword ptr ds : [ebx+0xB4], eax
        mov ecx, dword ptr ss : [ebp+0xB8]
        lea edx, ss:[ebp+0xBC]
        mov dword ptr ds : [ebx+0xB8], ecx
        push edx
        lea ecx, ds:[ebx+0xBC]
        mov byte ptr ss : [esp+0x28], 1
        call public_628e870
        lea eax, ss:[ebp+0xD0]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0xD0]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+0xDC]
        mov dword ptr ds : [ebx+0xDC], ecx
        mov edx, dword ptr ss : [ebp+0xE0]
        mov dword ptr ds : [ebx+0xE0], edx
        mov dword ptr ds : [ebx], offset public_639b884
        lea eax, ss:[ebp+0xE4]
        push eax
        lea ecx, ds:[ebx+0xE4]
        mov dword ptr ss : [esp+0x28], 2
        call public_6286fb0
        mov ecx, dword ptr ss : [ebp+0x104]
        mov dword ptr ds : [ebx+0x104], ecx
        lea esi, ss:[ebp+0x108]
        lea edi, ds:[ebx+0x108]
        mov ecx, 0xD
        rep movsd
        mov edx, dword ptr ss : [ebp+0x13C]
        mov dword ptr ds : [ebx+0x13C], edx
        mov eax, dword ptr ss : [ebp+0x140]
        mov dword ptr ds : [ebx+0x140], eax
        mov ecx, dword ptr ss : [ebp+0x144]
        lea edx, ss:[ebp+0x148]
        mov dword ptr ds : [ebx+0x144], ecx
        push edx
        lea ecx, ds:[ebx+0x148]
        mov byte ptr ss : [esp+0x28], 3
        call public_6288080
        mov al, byte ptr ss : [ebp+0x15C]
        mov byte ptr ds : [ebx+0x15C], al
        mov ecx, dword ptr ss : [ebp+0x160]
        mov dword ptr ds : [ebx+0x160], ecx
        mov edx, dword ptr ss : [ebp+0x164]
        mov dword ptr ds : [ebx+0x164], edx
        mov eax, dword ptr ss : [ebp+0x168]
        mov dword ptr ds : [ebx+0x168], eax
        mov cl, byte ptr ss : [ebp+0x16C]
        mov byte ptr ds : [ebx+0x16C], cl
        mov edx, dword ptr ss : [ebp+0x170]
        lea eax, ss:[ebp+0x174]
        mov dword ptr ds : [ebx+0x170], edx
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x174]
        mov byte ptr ss : [esp+0x24], 4
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[ebp+0x180]
        push ecx
        lea ecx, ds:[ebx+0x180]
        call public_628e9c0
        mov edx, dword ptr ss : [ebp+0x190]
        mov dword ptr ds : [ebx+0x190], edx
        mov eax, dword ptr ss : [ebp+0x194]
        mov dword ptr ds : [ebx+0x194], eax
        mov ecx, dword ptr ss : [ebp+0x198]
        mov dword ptr ds : [ebx+0x198], ecx
        mov edx, dword ptr ss : [ebp+0x19C]
        mov dword ptr ds : [ebx+0x19C], edx
        mov eax, dword ptr ss : [ebp+0x1A0]
        mov dword ptr ds : [ebx+0x1A0], eax
        mov dword ptr ds : [ebx], offset public_639be5c
        mov ecx, dword ptr ss : [ebp+0x1A4]
        mov dword ptr ds : [ebx+0x1A4], ecx
        mov dl, byte ptr ss : [ebp+0x1A8]
        mov byte ptr ds : [ebx+0x1A8], dl
        mov al, byte ptr ss : [ebp+0x1A9]
        mov byte ptr ds : [ebx+0x1A9], al
        mov ecx, dword ptr ss : [ebp+0x1AC]
        mov dword ptr ds : [ebx+0x1AC], ecx
        mov edx, dword ptr ss : [ebp+0x1B0]
        mov dword ptr ds : [ebx+0x1B0], edx
        mov eax, dword ptr ss : [ebp+0x1B4]
        mov dword ptr ds : [ebx+0x1B4], eax
        mov ecx, dword ptr ss : [ebp+0x1B8]
        mov dword ptr ds : [ebx+0x1B8], ecx
        mov dl, byte ptr ss : [ebp+0x1BC]
        mov byte ptr ds : [ebx+0x1BC], dl
        mov eax, dword ptr ss : [ebp+0x1C0]
        mov dword ptr ss : [esp+0x24], 5
        mov dword ptr ds : [ebx+0x1C0], eax
        mov ecx, dword ptr ss : [ebp+0x1C4]
        mov dword ptr ds : [ebx+0x1C4], ecx
        mov edx, dword ptr ss : [ebp+0x1C8]
        mov dword ptr ds : [ebx+0x1C8], edx
        mov al, byte ptr ss : [ebp+0x1CC]
        lea edi, ds:[ebx+0x1CC]
        push 0xC
        mov byte ptr ss : [esp+0x28], 6
        mov byte ptr ds : [edi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov ecx, dword ptr ss : [ebp+0x1D0]
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x2C], edx
        je public_629ab72
        public_629ab55 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        lea eax, ds:[esi+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_627f280
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x10]
        jne public_629ab55
        public_629ab72 : nop
        mov eax, dword ptr ss : [ebp+0x1D8]
        mov dword ptr ds : [ebx+0x1D8], eax
        mov ecx, dword ptr ss : [ebp+0x1DC]
        mov dword ptr ds : [ebx+0x1DC], ecx
        mov edx, dword ptr ss : [ebp+0x1E0]
        mov dword ptr ds : [ebx+0x1E0], edx
        mov al, byte ptr ss : [ebp+0x1E4]
        mov byte ptr ds : [ebx+0x1E4], al
        mov ecx, dword ptr ss : [ebp+0x1E8]
        pop edi
        mov dword ptr ds : [ebx+0x1E8], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        mov dword ptr ds : [ebx], offset public_639d3c4
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x629a860)
    }
}

#undef public_629a89c
#undef public_629ab55
#undef public_629ab72
