#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0deb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f320);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f810);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f950);
CLANG_FORWARD_PROC_SYMBOL(public_6f2faf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fb70);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fc10);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fc50);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fc80);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ab40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae872);

#define public_6f2f39b _public_6f2f39b
#define public_6f2f3dd _public_6f2f3dd
#define public_6f2f445 _public_6f2f445
#define public_6f2f546 _public_6f2f546

PROC_DECLARE(0x6f2f320, internal_6f2f320, public_6f2f320);
extern "C" NAKED register_t __cdecl internal_6f2f320()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae872 @0x6f2f322*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae872
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], 0
        je public_6f2f546
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        push esi
        add ebx, 4
        push edi
        lea esi, ss:[ebp+8]
        lea edi, ds:[ebx+4]
        mov ecx, 0x11
        rep movsd
        mov ecx, dword ptr ds : [public_6fb3064]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [ebx+0x48], edx
        mov eax, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [ebx+0x4C], eax
        mov cl, byte ptr ss : [ebp+0x54]
        lea edi, ss:[ebp+0x54]
        lea esi, ds:[ebx+0x50]
        mov byte ptr ds : [esi], cl
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], ebx
        call public_6f2fb70
        test eax, eax
        jge public_6f2f39b
        xor eax, eax
        public_6f2f39b : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6f2fba0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dl, byte ptr ss : [ebp+0x64]
        lea edi, ss:[ebp+0x64]
        lea esi, ds:[ebx+0x60]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi], dl
        call public_6f2fbe0
        test eax, eax
        jge public_6f2f3dd
        xor eax, eax
        public_6f2f3dd : nop
        imul eax, 0x5C
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6f2fc10
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        lea eax, ss:[ebp+0x74]
        lea ecx, ds:[ebx+0x70]
        push eax
        mov byte ptr ss : [esp+0x20], 2
        call public_6f2f950
        mov ecx, dword ptr ss : [ebp+0x88]
        mov dword ptr ds : [ebx+0x84], ecx
        mov dl, byte ptr ss : [ebp+0x8C]
        lea edi, ss:[ebp+0x8C]
        lea esi, ds:[ebx+0x88]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 3
        mov byte ptr ds : [esi], dl
        call public_6f2fc50
        test eax, eax
        jge public_6f2f445
        xor eax, eax
        public_6f2f445 : nop
        imul eax, 0x548
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6f2fc80
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        lea eax, ss:[ebp+0x9C]
        push eax
        lea ecx, ds:[ebx+0x98]
        mov byte ptr ss : [esp+0x20], 4
        call public_6eb35b0
        lea ecx, ss:[ebp+0xAC]
        push ecx
        lea ecx, ds:[ebx+0xA8]
        mov byte ptr ss : [esp+0x20], 5
        call public_6eb35b0
        lea edx, ss:[ebp+0xBC]
        push edx
        lea ecx, ds:[ebx+0xB8]
        mov byte ptr ss : [esp+0x20], 6
        call public_6eb35b0
        lea eax, ss:[ebp+0xCC]
        push eax
        lea ecx, ds:[ebx+0xC8]
        mov byte ptr ss : [esp+0x20], 7
        call public_6f7a9f0
        lea ecx, ss:[ebp+0xE0]
        push ecx
        lea ecx, ds:[ebx+0xDC]
        mov byte ptr ss : [esp+0x20], 8
        call public_6f0deb0
        lea edx, ss:[ebp+0xEC]
        push edx
        lea ecx, ds:[ebx+0xE8]
        mov byte ptr ss : [esp+0x20], 9
        call public_6f2f810
        lea eax, ss:[ebp+0xFC]
        push eax
        lea ecx, ds:[ebx+0xF8]
        mov byte ptr ss : [esp+0x20], 0xA
        call public_6f7ab40
        lea ecx, ss:[ebp+0x110]
        push ecx
        lea ecx, ds:[ebx+0x10C]
        mov byte ptr ss : [esp+0x20], 0xB
        call public_6f2faf0
        mov dl, byte ptr ss : [ebp+0x120]
        pop edi
        mov byte ptr ds : [ebx+0x11C], dl
        mov eax, dword ptr ss : [ebp+0x124]
        pop esi
        mov dword ptr ds : [ebx+0x120], eax
        mov dword ptr ds : [ebx], offset public_6fb93c4
        pop ebp
        public_6f2f546 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f2f320)
    }
}

#undef public_6f2f39b
#undef public_6f2f3dd
#undef public_6f2f445
#undef public_6f2f546
