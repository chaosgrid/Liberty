#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0deb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f945f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1602);

#define public_6f9467e _public_6f9467e
#define public_6f94684 _public_6f94684
#define public_6f946b1 _public_6f946b1
#define public_6f9477e _public_6f9477e
#define public_6f947a2 _public_6f947a2
#define public_6f947c7 _public_6f947c7

PROC_DECLARE(0x6f945f0, internal_6f945f0, public_6f945f0);
extern "C" NAKED register_t __cdecl internal_6f945f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1602 @0x6f945f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1602
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xC], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x1C], 0
        je public_6f947c7
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        mov al, byte ptr ds : [ebx+4]
        mov byte ptr ss : [ebp+4], al
        push esi
        push edi
        lea esi, ds:[ebx+8]
        lea edi, ss:[ebp+8]
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x3C]
        mov dword ptr ss : [ebp+0x3C], ecx
        mov edx, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [ebp+0x40], edx
        mov eax, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [ebp+0x44], eax
        mov ecx, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [ebp+0x48], ecx
        mov edx, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [ebp+0x4C], edx
        mov al, byte ptr ds : [ebx+0x50]
        mov byte ptr ss : [ebp+0x50], al
        mov eax, dword ptr ds : [ebx+0x54]
        test eax, eax
        je public_6f9467e
        mov ecx, dword ptr ds : [ebx+0x58]
        sub ecx, eax
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f9467e : nop
        test eax, eax
        jge public_6f94684
        xor eax, eax
        public_6f94684 : nop
        imul eax, 0x108
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+0x54], eax
        mov ecx, dword ptr ds : [ebx+0x58]
        mov edx, dword ptr ds : [ebx+0x54]
        add esp, 4
        cmp edx, ecx
        mov ebp, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ebp
        je public_6f947a2
        lea ebx, ds:[edx+0x38]
        public_6f946b1 : nop
        mov dword ptr ss : [esp+0x1C], ebp
        test ebp, ebp
        mov byte ptr ss : [esp+0x28], 1
        je public_6f9477e
        lea esi, ds:[ebx-0x38]
        mov ecx, 0xD
        mov edi, ebp
        rep movsd
        mov edx, dword ptr ds : [ebx-4]
        mov dword ptr ss : [ebp+0x34], edx
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp+0x38], eax
        lea esi, ds:[ebx+4]
        lea edi, ss:[ebp+0x3C]
        mov ecx, 0x1A
        rep movsd
        lea esi, ds:[ebx+0x6C]
        lea edi, ss:[ebp+0xA4]
        mov ecx, 0xD
        rep movsd
        lea ecx, ds:[ebx+0xA0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp+0xD8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov dl, byte ptr ds : [ebx+0xAC]
        lea ecx, ds:[ebx+0xB4]
        mov byte ptr ss : [ebp+0xE4], dl
        mov eax, dword ptr ds : [ebx+0xB0]
        push ecx
        lea ecx, ss:[ebp+0xEC]
        mov dword ptr ss : [ebp+0xE8], eax
        call public_6f0deb0
        mov dx, word ptr ds : [ebx+0xC0]
        mov word ptr ss : [ebp+0xF8], dx
        mov al, byte ptr ds : [ebx+0xC2]
        mov byte ptr ss : [ebp+0xFA], al
        mov ecx, dword ptr ds : [ebx+0xC4]
        mov dword ptr ss : [ebp+0xFC], ecx
        mov edx, dword ptr ds : [ebx+0xC8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x100], edx
        mov eax, dword ptr ds : [ebx+0xCC]
        mov dword ptr ss : [ebp+0x104], eax
        public_6f9477e : nop
        add ebx, 0x108
        add ebp, 0x108
        lea edx, ds:[ebx-0x38]
        cmp edx, ecx
        mov byte ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x14], ebp
        jne public_6f946b1
        mov ebx, dword ptr ss : [esp+0x34]
        public_6f947a2 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+0x58], ebp
        mov dword ptr ds : [eax+0x5C], ebp
        mov dword ptr ds : [eax], offset public_6fbc7c8
        mov ecx, dword ptr ds : [ebx+0x60]
        pop edi
        mov dword ptr ds : [eax+0x60], ecx
        mov edx, dword ptr ds : [ebx+0x64]
        pop esi
        mov dword ptr ds : [eax+0x64], edx
        mov dword ptr ds : [eax], offset public_6fbc878
        pop ebx
        public_6f947c7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f945f0)
    }
}

#undef public_6f9467e
#undef public_6f94684
#undef public_6f946b1
#undef public_6f9477e
#undef public_6f947a2
#undef public_6f947c7
