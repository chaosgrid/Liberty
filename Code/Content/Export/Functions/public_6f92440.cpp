#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f92440);
CLANG_FORWARD_PROC_SYMBOL(public_6f93080);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1571);

#define public_6f924bc _public_6f924bc
#define public_6f924c2 _public_6f924c2
#define public_6f924f0 _public_6f924f0
#define public_6f92616 _public_6f92616
#define public_6f9263d _public_6f9263d

PROC_DECLARE(0x6f92440, internal_6f92440, public_6f92440);
extern "C" NAKED register_t __cdecl internal_6f92440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1571 @0x6f92442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1571
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x34]
        mov al, byte ptr ds : [ebx+4]
        push ebp
        mov ebp, ecx
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
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6f924bc
        mov ecx, dword ptr ds : [ebx+0x58]
        sub ecx, eax
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f924bc : nop
        test eax, eax
        jge public_6f924c2
        xor eax, eax
        public_6f924c2 : nop
        imul eax, 0x108
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+0x54], eax
        mov ecx, dword ptr ds : [ebx+0x58]
        mov edx, dword ptr ds : [ebx+0x54]
        add esp, 4
        cmp edx, ecx
        mov ebx, eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6f9263d
        lea ebp, ds:[edx+0x38]
        nop 
        public_6f924f0 : nop
        mov dword ptr ss : [esp+0x20], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x38], 0
        je public_6f92616
        lea esi, ss:[ebp-0x38]
        mov ecx, 0xD
        mov edi, ebx
        rep movsd
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ebx+0x34], edx
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx+0x38], eax
        lea esi, ss:[ebp+4]
        lea edi, ds:[ebx+0x3C]
        mov ecx, 0x1A
        rep movsd
        lea esi, ss:[ebp+0x6C]
        lea edi, ds:[ebx+0xA4]
        mov ecx, 0xD
        rep movsd
        lea ecx, ss:[ebp+0xA0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0xD8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov dl, byte ptr ss : [ebp+0xAC]
        mov byte ptr ds : [ebx+0xE4], dl
        mov eax, dword ptr ss : [ebp+0xB0]
        mov dword ptr ds : [ebx+0xE8], eax
        mov cl, byte ptr ss : [ebp+0xB4]
        lea edi, ss:[ebp+0xB4]
        lea esi, ds:[ebx+0xEC]
        push 0
        mov byte ptr ds : [esi], cl
        push 0
        mov ecx, esi
        call public_6f93790
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        call public_6f93080
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_6f1df30
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        mov edi, eax
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6ed0230
        mov cx, word ptr ss : [ebp+0xC0]
        mov word ptr ds : [ebx+0xF8], cx
        mov dl, byte ptr ss : [ebp+0xC2]
        mov byte ptr ds : [ebx+0xFA], dl
        mov eax, dword ptr ss : [ebp+0xC4]
        mov dword ptr ds : [ebx+0xFC], eax
        mov ecx, dword ptr ss : [ebp+0xC8]
        mov dword ptr ds : [ebx+0x100], ecx
        mov edx, dword ptr ss : [ebp+0xCC]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+0x104], edx
        public_6f92616 : nop
        add ebp, 0x108
        add ebx, 0x108
        lea eax, ss:[ebp-0x38]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], ebx
        jne public_6f924f0
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6f9263d : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [ebp+0x58], ebx
        mov dword ptr ss : [ebp+0x5C], ebx
        mov dword ptr ss : [ebp], offset public_6fbc7c8
        mov ecx, dword ptr ds : [eax+0x60]
        mov dword ptr ss : [ebp+0x60], ecx
        mov edx, dword ptr ds : [eax+0x64]
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x64], edx
        mov dword ptr ss : [ebp], offset public_6fbc878
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x6f92440)
    }
}

#undef public_6f924bc
#undef public_6f924c2
#undef public_6f924f0
#undef public_6f92616
#undef public_6f9263d
