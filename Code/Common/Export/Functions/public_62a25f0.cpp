#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6281a30);
CLANG_FORWARD_PROC_SYMBOL(public_628eed0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393c9e);

#define public_62a26b3 _public_62a26b3
#define public_62a26c8 _public_62a26c8
#define public_62a26d0 _public_62a26d0
#define public_62a26f0 _public_62a26f0
#define public_62a270c _public_62a270c
#define public_62a2716 _public_62a2716

PROC_DECLARE(0x62a25f0, internal_62a25f0, public_62a25f0);
extern "C" NAKED register_t __cdecl internal_62a25f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393c9e @0x62a25f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393c9e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], eax
        push esi
        push edi
        lea eax, ss:[ebp+8]
        lea edx, ds:[ebx+8]
        mov esi, eax
        mov edi, edx
        mov ecx, 9
        rep movsd
        lea ecx, ss:[ebp+0x2C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[ebx+0x2C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov esi, eax
        mov edi, edx
        mov ecx, 0xC
        rep movsd
        mov edx, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [ebx+0x38], edx
        lea eax, ss:[ebp+0x3C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x3C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+0x48]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx+0x48], ecx
        mov dword ptr ds : [ebx], offset public_639b5bc
        mov edx, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [ebx+0x4C], edx
        mov eax, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [ebx+0x50], eax
        mov ecx, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [ebx+0x54], ecx
        mov edx, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [ebx+0x58], edx
        mov eax, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [ebx+0x5C], eax
        mov ecx, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [ebx+0x60], ecx
        mov dl, byte ptr ss : [ebp+0x64]
        mov byte ptr ds : [ebx+0x64], dl
        mov eax, dword ptr ss : [ebp+0x68]
        test eax, eax
        mov dword ptr ss : [esp+0x24], 0
        jne public_62a26b3
        xor edx, edx
        jmp public_62a26c8
        public_62a26b3 : nop
        mov ecx, dword ptr ss : [ebp+0x6C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_62a26c8 : nop
        test edx, edx
        mov eax, edx
        jge public_62a26d0
        xor eax, eax
        public_62a26d0 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 2
        push ecx
        call public_6391d9c
        mov dword ptr ds : [ebx+0x68], eax
        mov edx, dword ptr ss : [ebp+0x6C]
        mov ecx, dword ptr ss : [ebp+0x68]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x2C], edx
        je public_62a2716
        public_62a26f0 : nop
        test eax, eax
        je public_62a270c
        mov edx, ecx
        mov edi, dword ptr ds : [edx]
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x2C]
        public_62a270c : nop
        add ecx, 0xC
        add eax, 0xC
        cmp ecx, edx
        jne public_62a26f0
        public_62a2716 : nop
        mov dword ptr ds : [ebx+0x6C], eax
        mov dword ptr ds : [ebx+0x70], eax
        mov eax, dword ptr ss : [ebp+0x74]
        mov dword ptr ds : [ebx+0x74], eax
        mov cl, byte ptr ss : [ebp+0x78]
        lea edi, ss:[ebp+0x78]
        lea esi, ds:[ebx+0x78]
        push 0xC
        mov byte ptr ss : [esp+0x28], 1
        mov byte ptr ds : [esi], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        mov edx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x30], edx
        call public_632c410
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov edi, eax
        call public_632c410
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [edi]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        mov ecx, esi
        call public_628eed0
        mov eax, dword ptr ss : [ebp+0x84]
        mov dword ptr ds : [ebx+0x84], eax
        mov ecx, dword ptr ss : [ebp+0x88]
        lea edx, ss:[ebp+0x8C]
        mov dword ptr ds : [ebx+0x88], ecx
        push edx
        lea ecx, ds:[ebx+0x8C]
        mov byte ptr ss : [esp+0x28], 2
        call public_6281a30
        mov eax, dword ptr ss : [ebp+0x98]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x98], eax
        mov dword ptr ds : [ebx], offset public_639dc3c
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62a25f0)
    }
}

#undef public_62a26b3
#undef public_62a26c8
#undef public_62a26d0
#undef public_62a26f0
#undef public_62a270c
#undef public_62a2716
