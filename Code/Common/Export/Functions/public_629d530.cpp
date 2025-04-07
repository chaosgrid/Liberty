#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6274100);
CLANG_FORWARD_PROC_SYMBOL(public_62819b0);
CLANG_FORWARD_PROC_SYMBOL(public_6281a30);
CLANG_FORWARD_PROC_SYMBOL(public_6282da0);
CLANG_FORWARD_PROC_SYMBOL(public_6282dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6282e00);
CLANG_FORWARD_PROC_SYMBOL(public_6318590);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63939e4);

#define public_629d5f5 _public_629d5f5

PROC_DECLARE(0x629d530, internal_629d530, public_629d530);
extern "C" NAKED register_t __cdecl internal_629d530()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63939e4 @0x629d532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63939e4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp+4]
        push esi
        mov dword ptr ds : [ebx+4], eax
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
        push eax
        mov ecx, edx
        mov dword ptr ss : [esp+0x14], ebx
        call public_6274100
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
        lea edi, ss:[ebp+0x64]
        lea esi, ds:[ebx+0x64]
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0
        mov byte ptr ds : [esi], dl
        call public_6282da0
        test eax, eax
        jge public_629d5f5
        xor eax, eax
        public_629d5f5 : nop
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
        mov ecx, dword ptr ss : [ebp+0x74]
        lea edx, ss:[ebp+0x78]
        mov dword ptr ds : [ebx+0x74], ecx
        push edx
        lea ecx, ds:[ebx+0x78]
        mov byte ptr ss : [esp+0x20], 1
        call public_62819b0
        mov eax, dword ptr ss : [ebp+0x84]
        mov dword ptr ds : [ebx+0x84], eax
        mov ecx, dword ptr ss : [ebp+0x88]
        lea edx, ss:[ebp+0x8C]
        mov dword ptr ds : [ebx+0x88], ecx
        push edx
        lea ecx, ds:[ebx+0x8C]
        mov byte ptr ss : [esp+0x20], 2
        call public_6281a30
        mov eax, dword ptr ss : [ebp+0x98]
        mov dword ptr ds : [ebx+0x98], eax
        mov dword ptr ds : [ebx], offset public_639b66c
        mov ecx, dword ptr ss : [ebp+0x9C]
        mov dword ptr ss : [esp+0x1C], 3
        mov dword ptr ds : [ebx+0x9C], ecx
        mov dl, byte ptr ss : [ebp+0xA0]
        mov al, byte ptr ds : [ebx+0xA0]
        xor dl, al
        and dl, 1
        xor dl, al
        mov byte ptr ds : [ebx+0xA0], dl
        mov eax, dword ptr ss : [ebp+0xA4]
        mov dword ptr ds : [ebx+0xA4], eax
        mov ecx, dword ptr ss : [ebp+0xA8]
        mov dword ptr ds : [ebx+0xA8], ecx
        mov edx, dword ptr ss : [ebp+0xAC]
        mov dword ptr ds : [ebx+0xAC], edx
        mov eax, dword ptr ss : [ebp+0xB0]
        mov dword ptr ds : [ebx+0xB0], eax
        mov ecx, dword ptr ss : [ebp+0xB4]
        mov dword ptr ds : [ebx+0xB4], ecx
        mov edx, dword ptr ss : [ebp+0xB8]
        mov dword ptr ds : [ebx+0xB8], edx
        mov al, byte ptr ss : [ebp+0xBC]
        lea edi, ss:[ebp+0xBC]
        lea esi, ds:[ebx+0xBC]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [edi+0xC]
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 4
        mov byte ptr ds : [esi+0xC], dl
        call public_6318590
        push edi
        mov ecx, esi
        call public_6282e00
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
        mov dword ptr ds : [ebx], offset public_639b884
        mov dword ptr ds : [ebx+0xE0], edx
        mov eax, dword ptr ss : [ebp+0xE4]
        mov dword ptr ds : [ebx+0xE4], eax
        mov ecx, dword ptr ss : [ebp+0xE8]
        mov dword ptr ds : [ebx+0xE8], ecx
        mov edx, dword ptr ss : [ebp+0xEC]
        mov dword ptr ds : [ebx+0xEC], edx
        mov eax, dword ptr ss : [ebp+0xF0]
        mov dword ptr ds : [ebx+0xF0], eax
        mov ecx, dword ptr ss : [ebp+0xF4]
        mov dword ptr ds : [ebx+0xF4], ecx
        mov edx, dword ptr ss : [ebp+0xF8]
        mov dword ptr ds : [ebx+0xF8], edx
        mov al, byte ptr ss : [ebp+0xFC]
        mov byte ptr ds : [ebx+0xFC], al
        mov cl, byte ptr ss : [ebp+0xFD]
        pop edi
        mov byte ptr ds : [ebx+0xFD], cl
        mov edx, dword ptr ss : [ebp+0x100]
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [ebx+0x100], edx
        mov dword ptr ds : [ebx], offset public_639d81c
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x629d530)
    }
}

#undef public_629d5f5
