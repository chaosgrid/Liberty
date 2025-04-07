#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6280b40);
CLANG_FORWARD_PROC_SYMBOL(public_62811b0);
CLANG_FORWARD_PROC_SYMBOL(public_6286fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6287810);
CLANG_FORWARD_PROC_SYMBOL(public_62878f0);
CLANG_FORWARD_PROC_SYMBOL(public_6287a00);
CLANG_FORWARD_PROC_SYMBOL(public_6288080);
CLANG_FORWARD_PROC_SYMBOL(public_628e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_628ef80);
CLANG_FORWARD_PROC_SYMBOL(public_628efc0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63931b8);

#define public_6287d8b _public_6287d8b
#define public_6287dd4 _public_6287dd4
#define public_6287ddf _public_6287ddf
#define public_6287de5 _public_6287de5
#define public_6287e46 _public_6287e46
#define public_6287e88 _public_6287e88
#define public_6287ed7 _public_6287ed7
#define public_6287f56 _public_6287f56
#define public_6287f58 _public_6287f58

PROC_DECLARE(0x6287bb0, internal_6287bb0, public_6287bb0);
extern "C" NAKED register_t __cdecl internal_6287bb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63931b8 @0x6287bb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63931b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov ebx, ecx
        push ebp
        mov dword ptr ss : [esp+0x14], ebx
        call public_62811b0
        lea eax, ss:[ebp+0xE4]
        push eax
        lea ecx, ds:[ebx+0xE4]
        mov dword ptr ss : [esp+0x20], 0
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
        mov byte ptr ss : [esp+0x20], 1
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
        mov dword ptr ds : [ebx+0x170], edx
        lea eax, ss:[ebp+0x174]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x174]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[ebp+0x180]
        push ecx
        lea ecx, ds:[ebx+0x180]
        mov byte ptr ss : [esp+0x20], 2
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
        mov dword ptr ds : [ebx+0x1A4], offset public_639b62c
        mov ecx, dword ptr ss : [ebp+0x1A8]
        mov dword ptr ds : [ebx+0x1A8], ecx
        mov edx, dword ptr ss : [ebp+0x1AC]
        mov dword ptr ds : [ebx+0x1AC], edx
        mov eax, dword ptr ss : [ebp+0x1B0]
        mov dword ptr ss : [esp+0x1C], 3
        mov dword ptr ds : [ebx+0x1B0], eax
        mov dword ptr ds : [ebx+0x1A4], offset public_639b60c
        mov ecx, dword ptr ss : [ebp+0x1B4]
        mov dword ptr ds : [ebx+0x1B4], ecx
        lea ecx, ds:[ebx+0x1B8]
        xor edi, edi
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ds : [ecx], edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ss : [ebp+0x1B8]
        cmp eax, edi
        mov byte ptr ss : [esp+0x1C], 5
        je public_6287d8b
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_6287d8b
        add eax, 8
        cmp eax, edi
        je public_6287d8b
        push eax
        call public_6341610
        public_6287d8b : nop
        lea edx, ss:[ebp+0x1C0]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0x1C0]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp+0x1CC]
        mov dword ptr ds : [ebx+0x1CC], eax
        mov cl, byte ptr ss : [ebp+0x1D0]
        lea esi, ds:[ebx+0x1D0]
        mov byte ptr ds : [esi], cl
        mov ecx, dword ptr ss : [ebp+0x1D4]
        cmp ecx, edi
        mov byte ptr ss : [esp+0x1C], 6
        jne public_6287dd4
        xor eax, eax
        jmp public_6287ddf
        public_6287dd4 : nop
        mov eax, dword ptr ss : [ebp+0x1D8]
        sub eax, ecx
        sar eax, 3
        public_6287ddf : nop
        cmp eax, edi
        jge public_6287de5
        xor eax, eax
        public_6287de5 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+0x1D8]
        mov edx, dword ptr ss : [ebp+0x1D4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_628ef80
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        lea ecx, ds:[ebx+0x1E0]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ds : [ecx], edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ss : [ebp+0x1E0]
        cmp eax, edi
        mov byte ptr ss : [esp+0x1C], 8
        je public_6287e46
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_6287e46
        add eax, 8
        cmp eax, edi
        je public_6287e46
        push eax
        call public_6341610
        public_6287e46 : nop
        lea eax, ss:[ebp+0x1E8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x1E8]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ss : [ebp+0x1F4]
        lea edi, ss:[ebp+0x1F4]
        lea esi, ds:[ebx+0x1F4]
        mov byte ptr ds : [esi], cl
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 9
        call public_626a5e0
        test eax, eax
        jge public_6287e88
        xor eax, eax
        public_6287e88 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_628ef80
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov al, byte ptr ss : [ebp+0x204]
        lea edi, ss:[ebp+0x204]
        lea esi, ds:[ebx+0x204]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0xA
        mov byte ptr ds : [esi], al
        call public_626a5e0
        test eax, eax
        jge public_6287ed7
        xor eax, eax
        public_6287ed7 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_628efc0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dl, byte ptr ss : [ebp+0x214]
        mov byte ptr ds : [ebx+0x214], dl
        mov eax, dword ptr ss : [ebp+0x218]
        mov dword ptr ds : [ebx+0x218], eax
        mov ecx, dword ptr ss : [ebp+0x21C]
        mov dword ptr ds : [ebx+0x21C], ecx
        lea ecx, ds:[ebx+0x220]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [ecx+4], 0
        mov eax, dword ptr ss : [ebp+0x220]
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 0xC
        je public_6287f56
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_6287f56
        add eax, 8
        jmp public_6287f58
        public_6287f56 : nop
        xor eax, eax
        public_6287f58 : nop
        push eax
        call public_6280b40
        mov dx, word ptr ss : [ebp+0x228]
        lea ecx, ss:[ebp+0x230]
        mov word ptr ds : [ebx+0x228], dx
        mov eax, dword ptr ss : [ebp+0x22C]
        push ecx
        lea ecx, ds:[ebx+0x230]
        mov dword ptr ds : [ebx+0x22C], eax
        call public_6287810
        lea edx, ss:[ebp+0x258]
        push edx
        lea ecx, ds:[ebx+0x258]
        call public_62878f0
        lea eax, ss:[ebp+0x280]
        push eax
        lea ecx, ds:[ebx+0x280]
        call public_6287a00
        mov ecx, dword ptr ss : [ebp+0x29C]
        mov dword ptr ds : [ebx+0x29C], ecx
        mov edx, dword ptr ss : [ebp+0x2A0]
        mov dword ptr ds : [ebx+0x2A0], edx
        mov eax, dword ptr ss : [ebp+0x2A4]
        mov dword ptr ds : [ebx+0x2A4], eax
        mov ecx, dword ptr ss : [ebp+0x2A8]
        mov dword ptr ds : [ebx+0x2A8], ecx
        mov edx, dword ptr ss : [ebp+0x2AC]
        mov dword ptr ds : [ebx+0x2AC], edx
        mov eax, dword ptr ss : [ebp+0x2B0]
        mov dword ptr ds : [ebx+0x2B0], eax
        mov ecx, dword ptr ss : [ebp+0x2B4]
        mov dword ptr ds : [ebx+0x2B4], ecx
        mov edx, dword ptr ss : [ebp+0x2B8]
        mov dword ptr ds : [ebx+0x2B8], edx
        mov al, byte ptr ss : [ebp+0x2BC]
        mov byte ptr ds : [ebx+0x2BC], al
        mov cl, byte ptr ss : [ebp+0x2BD]
        mov byte ptr ds : [ebx+0x2BD], cl
        mov edx, dword ptr ss : [ebp+0x2C0]
        mov dword ptr ds : [ebx+0x2C0], edx
        mov al, byte ptr ss : [ebp+0x2C4]
        mov byte ptr ds : [ebx+0x2C4], al
        lea esi, ss:[ebp+0x2C8]
        lea edi, ds:[ebx+0x2C8]
        mov ecx, 5
        rep movsd
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [ebx], offset public_639c02c
        mov dword ptr ds : [ebx+0x1A4], offset public_639c00c
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6287bb0)
    }
}

#undef public_6287d8b
#undef public_6287dd4
#undef public_6287ddf
#undef public_6287de5
#undef public_6287e46
#undef public_6287e88
#undef public_6287ed7
#undef public_6287f56
#undef public_6287f58
