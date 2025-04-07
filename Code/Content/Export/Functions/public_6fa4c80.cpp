#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f0deb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f21fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6f932b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4c80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb213b);

#define public_6fa4d46 _public_6fa4d46
#define public_6fa4d4c _public_6fa4d4c
#define public_6fa4d82 _public_6fa4d82
#define public_6fa4e7d _public_6fa4e7d
#define public_6fa4ea1 _public_6fa4ea1
#define public_6fa4ec0 _public_6fa4ec0

PROC_DECLARE(0x6fa4c80, internal_6fa4c80, public_6fa4c80);
extern "C" NAKED register_t __cdecl internal_6fa4c80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb213b @0x6fa4c82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb213b
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
        je public_6fa4ec0
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        mov al, byte ptr ds : [ebx]
        mov byte ptr ss : [ebp], al
        mov cl, byte ptr ds : [ebx+1]
        mov byte ptr ss : [ebp+1], cl
        mov dl, byte ptr ds : [ebx+2]
        mov byte ptr ss : [ebp+2], dl
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        push esi
        mov dword ptr ss : [ebp+0xC], edx
        push edi
        lea edi, ss:[ebp+0x10]
        lea esi, ds:[ebx+0x10]
        mov ecx, 0xC
        rep movsd
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [ebp+0x40], eax
        lea esi, ds:[ebx+0x44]
        lea edi, ss:[ebp+0x44]
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x78]
        mov dword ptr ss : [ebp+0x78], ecx
        mov edx, dword ptr ds : [ebx+0x7C]
        mov dword ptr ss : [ebp+0x7C], edx
        mov eax, dword ptr ds : [ebx+0x80]
        mov dword ptr ss : [ebp+0x80], eax
        mov cl, byte ptr ds : [ebx+0x84]
        mov byte ptr ss : [ebp+0x84], cl
        mov eax, dword ptr ds : [ebx+0x88]
        test eax, eax
        je public_6fa4d46
        mov ecx, dword ptr ds : [ebx+0x8C]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6fa4d46 : nop
        test eax, eax
        jge public_6fa4d4c
        xor eax, eax
        public_6fa4d4c : nop
        imul eax, 0xF0
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+0x88], eax
        mov ecx, dword ptr ds : [ebx+0x8C]
        mov edx, dword ptr ds : [ebx+0x88]
        add esp, 4
        cmp edx, ecx
        mov ebp, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ebp
        je public_6fa4ea1
        lea ebx, ds:[edx+0x38]
        public_6fa4d82 : nop
        mov dword ptr ss : [esp+0x1C], ebp
        test ebp, ebp
        mov byte ptr ss : [esp+0x28], 1
        je public_6fa4e7d
        lea esi, ds:[ebx-0x34]
        lea edi, ss:[ebp+4]
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ds : [ebx]
        lea edx, ds:[ebx+4]
        mov dword ptr ss : [ebp+0x38], ecx
        push edx
        lea ecx, ss:[ebp+0x3C]
        call public_6f0deb0
        mov al, byte ptr ds : [ebx+0x10]
        mov byte ptr ss : [ebp+0x48], al
        mov cl, byte ptr ds : [ebx+0x11]
        mov byte ptr ss : [ebp+0x49], cl
        mov edx, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp+0x4C], edx
        mov al, byte ptr ds : [ebx+0x18]
        mov byte ptr ss : [ebp+0x50], al
        mov ecx, dword ptr ds : [ebx+0x1C]
        lea edx, ds:[ebx+0x20]
        mov dword ptr ss : [ebp+0x54], ecx
        push edx
        lea ecx, ss:[ebp+0x58]
        mov byte ptr ss : [esp+0x2C], 2
        call public_6ef7e30
        mov eax, dword ptr ds : [ebx+0x2C]
        lea ecx, ds:[ebx+0x30]
        push ecx
        lea ecx, ss:[ebp+0x68]
        mov byte ptr ss : [esp+0x2C], 3
        mov dword ptr ss : [ebp+0x64], eax
        call public_6f21fd0
        lea edx, ds:[ebx+0x34]
        push edx
        lea ecx, ss:[ebp+0x6C]
        mov byte ptr ss : [esp+0x2C], 4
        call public_6f55880
        mov eax, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [ebp+0x7C], eax
        mov ecx, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [ebp+0x80], ecx
        mov edx, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [ebp+0x84], edx
        mov dword ptr ss : [ebp], offset public_6fb60a8
        lea esi, ds:[ebx+0x50]
        lea edi, ss:[ebp+0x88]
        mov ecx, 0x13
        rep movsd
        mov eax, dword ptr ds : [ebx+0x9C]
        mov dword ptr ss : [ebp+0xD4], eax
        mov ecx, dword ptr ds : [ebx+0xA0]
        mov dword ptr ss : [ebp+0xD8], ecx
        mov edx, dword ptr ds : [ebx+0xA4]
        lea eax, ds:[ebx+0xA8]
        push eax
        lea ecx, ss:[ebp+0xE0]
        mov byte ptr ss : [esp+0x2C], 5
        mov dword ptr ss : [ebp+0xDC], edx
        call public_6f932b0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp], offset public_6fbc7a0
        public_6fa4e7d : nop
        add ebx, 0xF0
        add ebp, 0xF0
        lea edx, ds:[ebx-0x38]
        cmp edx, ecx
        mov byte ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x14], ebp
        jne public_6fa4d82
        mov ebx, dword ptr ss : [esp+0x34]
        public_6fa4ea1 : nop
        mov eax, dword ptr ss : [esp+0x30]
        pop edi
        mov dword ptr ds : [eax+0x8C], ebp
        mov dword ptr ds : [eax+0x90], ebp
        mov ecx, dword ptr ds : [ebx+0x94]
        pop esi
        mov dword ptr ds : [eax+0x94], ecx
        pop ebx
        public_6fa4ec0 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6fa4c80)
    }
}

#undef public_6fa4d46
#undef public_6fa4d4c
#undef public_6fa4d82
#undef public_6fa4e7d
#undef public_6fa4ea1
#undef public_6fa4ec0
