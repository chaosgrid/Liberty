#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6274100);
CLANG_FORWARD_PROC_SYMBOL(public_62819b0);
CLANG_FORWARD_PROC_SYMBOL(public_6281a30);
CLANG_FORWARD_PROC_SYMBOL(public_6282e00);
CLANG_FORWARD_PROC_SYMBOL(public_628d570);
CLANG_FORWARD_PROC_SYMBOL(public_6318590);
CLANG_FORWARD_JUMP_SYMBOL(public_6393064);

PROC_DECLARE(0x62869c0, internal_62869c0, public_62869c0);
extern "C" NAKED register_t __cdecl internal_62869c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393064 @0x62869c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393064
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
        lea edx, ss:[ebp+0x64]
        mov dword ptr ds : [ebx+0x60], ecx
        push edx
        lea ecx, ds:[ebx+0x64]
        mov dword ptr ss : [esp+0x20], 0
        call public_628d570
        mov eax, dword ptr ss : [ebp+0x74]
        lea ecx, ss:[ebp+0x78]
        push ecx
        lea ecx, ds:[ebx+0x78]
        mov byte ptr ss : [esp+0x20], 1
        mov dword ptr ds : [ebx+0x74], eax
        call public_62819b0
        mov edx, dword ptr ss : [ebp+0x84]
        lea ecx, ss:[ebp+0x8C]
        mov dword ptr ds : [ebx+0x84], edx
        mov eax, dword ptr ss : [ebp+0x88]
        push ecx
        lea ecx, ds:[ebx+0x8C]
        mov byte ptr ss : [esp+0x20], 2
        mov dword ptr ds : [ebx+0x88], eax
        call public_6281a30
        mov edx, dword ptr ss : [ebp+0x98]
        mov dword ptr ds : [ebx+0x98], edx
        mov dword ptr ds : [ebx], offset public_639b66c
        mov eax, dword ptr ss : [ebp+0x9C]
        mov dword ptr ss : [esp+0x1C], 3
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
        mov dword ptr ds : [ebx+0xB8], ecx
        mov dl, byte ptr ss : [ebp+0xBC]
        lea edi, ss:[ebp+0xBC]
        lea esi, ds:[ebx+0xBC]
        mov byte ptr ds : [esi], dl
        mov al, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], al
        mov cl, byte ptr ds : [edi+0xC]
        mov byte ptr ds : [esi+0xC], cl
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 4
        call public_6318590
        push edi
        mov ecx, esi
        call public_6282e00
        lea edx, ss:[ebp+0xD0]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0xD0]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp+0xDC]
        mov dword ptr ds : [ebx+0xDC], eax
        mov ecx, dword ptr ss : [ebp+0xE0]
        mov dword ptr ds : [ebx+0xE0], ecx
        mov dword ptr ds : [ebx], offset public_639b884
        mov edx, dword ptr ss : [ebp+0xE4]
        mov dword ptr ds : [ebx+0xE4], edx
        mov eax, dword ptr ss : [ebp+0xE8]
        mov dword ptr ds : [ebx+0xE8], eax
        mov ecx, dword ptr ss : [ebp+0xEC]
        mov dword ptr ds : [ebx+0xEC], ecx
        mov dword ptr ds : [ebx], offset public_639bbbc
        mov edx, dword ptr ss : [ebp+0xF0]
        mov dword ptr ds : [ebx+0xF0], edx
        mov eax, dword ptr ss : [ebp+0xF4]
        mov dword ptr ds : [ebx+0xF4], eax
        lea ecx, ss:[ebp+0xF8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0xF8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edx, ss:[ebp+0x104]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0x104]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea eax, ss:[ebp+0x110]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x110]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ss : [ebp+0x11C]
        pop edi
        mov byte ptr ds : [ebx+0x11C], cl
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [ebx], offset public_639bd1c
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62869c0)
    }
}
