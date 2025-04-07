#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f0deb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f810);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f950);
CLANG_FORWARD_PROC_SYMBOL(public_6f2faf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fc10);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fc80);
CLANG_FORWARD_PROC_SYMBOL(public_6f79d30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ab40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb05a1);

#define public_6f79d9c _public_6f79d9c
#define public_6f79da2 _public_6f79da2
#define public_6f79df8 _public_6f79df8
#define public_6f79dfe _public_6f79dfe
#define public_6f79e78 _public_6f79e78
#define public_6f79e7e _public_6f79e7e
#define public_6f79ecd _public_6f79ecd
#define public_6f79ed8 _public_6f79ed8
#define public_6f79ee0 _public_6f79ee0
#define public_6f79f35 _public_6f79f35

PROC_DECLARE(0x6f79d30, internal_6f79d30, public_6f79d30);
extern "C" NAKED register_t __cdecl internal_6f79d30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb05a1 @0x6f79d32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb05a1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        mov ebp, ecx
        push esi
        push edi
        lea esi, ds:[ebx+4]
        lea edi, ss:[ebp+4]
        mov ecx, 0x11
        rep movsd
        mov eax, dword ptr ds : [public_6fb3064]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [ebp+0x48], ecx
        mov edx, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [ebp+0x4C], edx
        mov al, byte ptr ds : [ebx+0x50]
        lea esi, ss:[ebp+0x50]
        mov byte ptr ds : [esi], al
        mov eax, dword ptr ds : [ebx+0x54]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        je public_6f79d9c
        mov ecx, dword ptr ds : [ebx+0x58]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f79d9c : nop
        test eax, eax
        jge public_6f79da2
        xor eax, eax
        public_6f79da2 : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x58]
        mov edx, dword ptr ds : [ebx+0x54]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6f2fba0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dl, byte ptr ds : [ebx+0x60]
        lea esi, ss:[ebp+0x60]
        mov byte ptr ds : [esi], dl
        mov eax, dword ptr ds : [ebx+0x64]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0
        je public_6f79df8
        mov ecx, dword ptr ds : [ebx+0x68]
        sub ecx, eax
        mov eax, 0xB21642C9
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6f79df8 : nop
        test eax, eax
        jge public_6f79dfe
        xor eax, eax
        public_6f79dfe : nop
        imul eax, 0x5C
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x68]
        mov edx, dword ptr ds : [ebx+0x64]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6f2fc10
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        lea edx, ds:[ebx+0x70]
        lea ecx, ss:[ebp+0x70]
        push edx
        mov byte ptr ss : [esp+0x20], 1
        call public_6f2f950
        mov eax, dword ptr ds : [ebx+0x84]
        mov dword ptr ss : [ebp+0x84], eax
        mov cl, byte ptr ds : [ebx+0x88]
        lea esi, ss:[ebp+0x88]
        mov byte ptr ds : [esi], cl
        mov eax, dword ptr ds : [ebx+0x8C]
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 2
        je public_6f79e78
        mov ecx, dword ptr ds : [ebx+0x90]
        sub ecx, eax
        mov eax, 0x60F25DEB
        imul ecx
        sar edx, 9
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6f79e78 : nop
        test eax, eax
        jge public_6f79e7e
        xor eax, eax
        public_6f79e7e : nop
        imul eax, 0x548
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x90]
        mov edx, dword ptr ds : [ebx+0x8C]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6f2fc80
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov cl, byte ptr ds : [ebx+0x98]
        lea esi, ss:[ebp+0x98]
        mov byte ptr ds : [esi], cl
        mov eax, dword ptr ds : [ebx+0x9C]
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 3
        jne public_6f79ecd
        xor ecx, ecx
        jmp public_6f79ed8
        public_6f79ecd : nop
        mov ecx, dword ptr ds : [ebx+0xA0]
        sub ecx, eax
        sar ecx, 2
        public_6f79ed8 : nop
        test ecx, ecx
        mov eax, ecx
        jge public_6f79ee0
        xor eax, eax
        public_6f79ee0 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0xA0]
        mov edx, dword ptr ds : [ebx+0x9C]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov al, byte ptr ds : [ebx+0xA8]
        lea edi, ds:[ebx+0xA8]
        lea esi, ss:[ebp+0xA8]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 4
        mov byte ptr ds : [esi], al
        call public_6fa3db0
        test eax, eax
        jge public_6f79f35
        xor eax, eax
        public_6f79f35 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        lea edx, ds:[ebx+0xB8]
        lea ecx, ss:[ebp+0xB8]
        push edx
        mov byte ptr ss : [esp+0x20], 5
        call public_6eb35b0
        lea eax, ds:[ebx+0xC8]
        lea ecx, ss:[ebp+0xC8]
        push eax
        mov byte ptr ss : [esp+0x20], 6
        call public_6f7a9f0
        lea ecx, ds:[ebx+0xDC]
        push ecx
        lea ecx, ss:[ebp+0xDC]
        mov byte ptr ss : [esp+0x20], 7
        call public_6f0deb0
        lea edx, ds:[ebx+0xE8]
        push edx
        lea ecx, ss:[ebp+0xE8]
        mov byte ptr ss : [esp+0x20], 8
        call public_6f2f810
        lea eax, ds:[ebx+0xF8]
        lea ecx, ss:[ebp+0xF8]
        push eax
        mov byte ptr ss : [esp+0x20], 9
        call public_6f7ab40
        lea ecx, ds:[ebx+0x10C]
        push ecx
        lea ecx, ss:[ebp+0x10C]
        mov byte ptr ss : [esp+0x20], 0xA
        call public_6f2faf0
        mov dl, byte ptr ds : [ebx+0x11C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [ebp+0x11C], dl
        mov eax, dword ptr ds : [ebx+0x120]
        pop edi
        mov dword ptr ss : [ebp+0x120], eax
        pop esi
        mov dword ptr ss : [ebp], offset public_6fb93c4
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f79d30)
    }
}

#undef public_6f79d9c
#undef public_6f79da2
#undef public_6f79df8
#undef public_6f79dfe
#undef public_6f79e78
#undef public_6f79e7e
#undef public_6f79ecd
#undef public_6f79ed8
#undef public_6f79ee0
#undef public_6f79f35
