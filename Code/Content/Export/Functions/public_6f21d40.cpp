#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f21d40);
CLANG_FORWARD_PROC_SYMBOL(public_6f21fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f21ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fade5b);

#define public_6f21e35 _public_6f21e35
#define public_6f21e3b _public_6f21e3b
#define public_6f21e71 _public_6f21e71
#define public_6f21f81 _public_6f21f81
#define public_6f21fa5 _public_6f21fa5
#define public_6f21fb4 _public_6f21fb4

PROC_DECLARE(0x6f21d40, internal_6f21d40, public_6f21d40);
extern "C" NAKED register_t __cdecl internal_6f21d40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fade5b @0x6f21d42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fade5b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0xC], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x28], 0
        je public_6f21fb4
        push ebp
        mov ebp, dword ptr ss : [esp+0x38]
        push esi
        push edi
        mov ecx, 0xD
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov eax, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [ebx+0x34], eax
        lea edi, ds:[ebx+0x38]
        lea esi, ss:[ebp+0x38]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x68]
        mov dword ptr ds : [ebx+0x68], ecx
        lea esi, ss:[ebp+0x6C]
        lea edi, ds:[ebx+0x6C]
        mov ecx, 0xD
        rep movsd
        mov edx, dword ptr ss : [ebp+0xA0]
        mov dword ptr ds : [ebx+0xA0], edx
        mov al, byte ptr ss : [ebp+0xA4]
        mov byte ptr ds : [ebx+0xA4], al
        mov cl, byte ptr ss : [ebp+0xA5]
        mov byte ptr ds : [ebx+0xA5], cl
        lea esi, ss:[ebp+0xA8]
        lea edi, ds:[ebx+0xA8]
        mov ecx, 0xD
        rep movsd
        mov edx, dword ptr ss : [ebp+0xDC]
        mov dword ptr ds : [ebx+0xDC], edx
        mov eax, dword ptr ss : [ebp+0xE0]
        mov dword ptr ds : [ebx+0xE0], eax
        mov ecx, dword ptr ss : [ebp+0xE4]
        mov dword ptr ds : [ebx+0xE4], ecx
        mov dl, byte ptr ss : [ebp+0xE8]
        mov byte ptr ds : [ebx+0xE8], dl
        mov eax, dword ptr ss : [ebp+0xEC]
        test eax, eax
        je public_6f21e35
        mov ecx, dword ptr ss : [ebp+0xF0]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6f21e35 : nop
        test eax, eax
        jge public_6f21e3b
        xor eax, eax
        public_6f21e3b : nop
        imul eax, 0x88
        push eax
        call public_6fa912a
        mov dword ptr ds : [ebx+0xEC], eax
        mov ecx, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0xEC]
        add esp, 4
        cmp edx, ecx
        mov ebp, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ebp
        je public_6f21fa5
        lea ebx, ds:[edx+4]
        public_6f21e71 : nop
        mov dword ptr ss : [esp+0x1C], ebp
        test ebp, ebp
        mov byte ptr ss : [esp+0x34], 1
        je public_6f21f81
        lea edi, ss:[ebp+4]
        mov ecx, 0xD
        mov esi, ebx
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [ebp+0x38], ecx
        mov dl, byte ptr ds : [ebx+0x38]
        lea esi, ss:[ebp+0x3C]
        lea edi, ds:[ebx+0x38]
        push 0
        push 0
        mov ecx, esi
        mov byte ptr ds : [esi], dl
        call public_6f93790
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        lea ecx, ss:[esp+0x44]
        call public_6f21ff0
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_6f1df30
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov edi, eax
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6ed0230
        mov cl, byte ptr ds : [ebx+0x44]
        mov byte ptr ss : [ebp+0x48], cl
        mov dl, byte ptr ds : [ebx+0x45]
        mov byte ptr ss : [ebp+0x49], dl
        mov eax, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [ebp+0x4C], eax
        mov cl, byte ptr ds : [ebx+0x4C]
        mov byte ptr ss : [ebp+0x50], cl
        mov edx, dword ptr ds : [ebx+0x50]
        lea esi, ss:[ebp+0x58]
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x38], 2
        mov dword ptr ss : [ebp+0x54], edx
        mov dword ptr ss : [esp+0x2C], esi
        call public_6f93460
        lea ecx, ds:[ebx+0x54]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x38], 3
        call public_6f20230
        mov edx, dword ptr ds : [ebx+0x60]
        lea eax, ds:[ebx+0x64]
        push eax
        lea ecx, ss:[ebp+0x68]
        mov byte ptr ss : [esp+0x38], 4
        mov dword ptr ss : [ebp+0x64], edx
        call public_6f21fd0
        lea ecx, ds:[ebx+0x68]
        push ecx
        lea ecx, ss:[ebp+0x6C]
        mov byte ptr ss : [esp+0x38], 5
        call public_6f55880
        mov edx, dword ptr ds : [ebx+0x78]
        mov dword ptr ss : [ebp+0x7C], edx
        mov eax, dword ptr ds : [ebx+0x7C]
        mov dword ptr ss : [ebp+0x80], eax
        mov ecx, dword ptr ds : [ebx+0x80]
        mov dword ptr ss : [ebp+0x84], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp], offset public_6fb60a8
        public_6f21f81 : nop
        add ebx, 0x88
        add ebp, 0x88
        lea edx, ds:[ebx-4]
        cmp edx, ecx
        mov byte ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x14], ebp
        jne public_6f21e71
        mov ebx, dword ptr ss : [esp+0x3C]
        public_6f21fa5 : nop
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0xF0], ebp
        mov dword ptr ds : [ebx+0xF4], ebp
        pop ebp
        public_6f21fb4 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6f21d40)
    }
}

#undef public_6f21e35
#undef public_6f21e3b
#undef public_6f21e71
#undef public_6f21f81
#undef public_6f21fa5
#undef public_6f21fb4
