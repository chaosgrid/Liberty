#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62811b0);
CLANG_FORWARD_PROC_SYMBOL(public_62819b0);
CLANG_FORWARD_PROC_SYMBOL(public_6281a30);
CLANG_FORWARD_PROC_SYMBOL(public_6282da0);
CLANG_FORWARD_PROC_SYMBOL(public_6282dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6282e00);
CLANG_FORWARD_PROC_SYMBOL(public_6319070);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392eb4);

#define public_6281279 _public_6281279

PROC_DECLARE(0x62811b0, internal_62811b0, public_62811b0);
extern "C" NAKED register_t __cdecl internal_62811b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392eb4 @0x62811b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392eb4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp+4], eax
        push esi
        push edi
        lea eax, ds:[ebx+8]
        lea edx, ss:[ebp+8]
        mov esi, eax
        mov edi, edx
        mov ecx, 9
        rep movsd
        lea ecx, ds:[ebx+0x2C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ss:[ebp+0x2C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov esi, eax
        mov edi, edx
        mov ecx, 0xC
        rep movsd
        mov edx, dword ptr ds : [ebx+0x38]
        mov dword ptr ss : [ebp+0x38], edx
        lea eax, ds:[ebx+0x3C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x3C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp+0x48], ecx
        mov dword ptr ss : [ebp], offset public_639b5bc
        mov edx, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [ebp+0x4C], edx
        mov eax, dword ptr ds : [ebx+0x50]
        mov dword ptr ss : [ebp+0x50], eax
        mov ecx, dword ptr ds : [ebx+0x54]
        mov dword ptr ss : [ebp+0x54], ecx
        mov edx, dword ptr ds : [ebx+0x58]
        mov dword ptr ss : [ebp+0x58], edx
        mov eax, dword ptr ds : [ebx+0x5C]
        mov dword ptr ss : [ebp+0x5C], eax
        mov ecx, dword ptr ds : [ebx+0x60]
        mov dword ptr ss : [ebp+0x60], ecx
        mov dl, byte ptr ds : [ebx+0x64]
        lea edi, ds:[ebx+0x64]
        lea esi, ss:[ebp+0x64]
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0
        mov byte ptr ds : [esi], dl
        call public_6282da0
        test eax, eax
        jge public_6281279
        xor eax, eax
        public_6281279 : nop
        lea eax, ds:[eax+eax*2]
        shl eax, 2
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6282dc0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x74]
        lea edx, ds:[ebx+0x78]
        mov dword ptr ss : [ebp+0x74], ecx
        push edx
        lea ecx, ss:[ebp+0x78]
        mov byte ptr ss : [esp+0x20], 1
        call public_62819b0
        mov eax, dword ptr ds : [ebx+0x84]
        mov dword ptr ss : [ebp+0x84], eax
        mov ecx, dword ptr ds : [ebx+0x88]
        lea edx, ds:[ebx+0x8C]
        mov dword ptr ss : [ebp+0x88], ecx
        push edx
        lea ecx, ss:[ebp+0x8C]
        mov byte ptr ss : [esp+0x20], 2
        call public_6281a30
        mov eax, dword ptr ds : [ebx+0x98]
        mov dword ptr ss : [ebp+0x98], eax
        mov dword ptr ss : [ebp], offset public_639b66c
        mov ecx, dword ptr ds : [ebx+0x9C]
        mov dword ptr ss : [esp+0x1C], 3
        mov dword ptr ss : [ebp+0x9C], ecx
        mov dl, byte ptr ds : [ebx+0xA0]
        mov al, byte ptr ss : [ebp+0xA0]
        xor dl, al
        and dl, 1
        xor dl, al
        mov byte ptr ss : [ebp+0xA0], dl
        mov eax, dword ptr ds : [ebx+0xA4]
        mov dword ptr ss : [ebp+0xA4], eax
        mov ecx, dword ptr ds : [ebx+0xA8]
        mov dword ptr ss : [ebp+0xA8], ecx
        mov edx, dword ptr ds : [ebx+0xAC]
        mov dword ptr ss : [ebp+0xAC], edx
        mov eax, dword ptr ds : [ebx+0xB0]
        mov dword ptr ss : [ebp+0xB0], eax
        mov ecx, dword ptr ds : [ebx+0xB4]
        mov dword ptr ss : [ebp+0xB4], ecx
        mov edx, dword ptr ds : [ebx+0xB8]
        mov dword ptr ss : [ebp+0xB8], edx
        mov al, byte ptr ds : [ebx+0xBC]
        lea edi, ds:[ebx+0xBC]
        lea esi, ss:[ebp+0xBC]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [edi+0xC]
        push 0x14
        mov byte ptr ss : [esp+0x20], 4
        mov byte ptr ds : [esi+0xC], dl
        call public_6391d9c
        mov byte ptr ds : [eax+0x10], 1
        add esp, 4
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x11], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push eax
        mov ecx, esi
        call public_6319070
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push edi
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], 0
        call public_6282e00
        lea ecx, ds:[ebx+0xD0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp+0xD0]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [ebx+0xDC]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+0xDC], edx
        mov eax, dword ptr ds : [ebx+0xE0]
        pop edi
        mov dword ptr ss : [ebp+0xE0], eax
        pop esi
        mov dword ptr ss : [ebp], offset public_639b884
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62811b0)
    }
}

#undef public_6281279
