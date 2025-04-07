#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f55330);
CLANG_FORWARD_PROC_SYMBOL(public_6f55510);
CLANG_FORWARD_PROC_SYMBOL(public_6f55660);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf5fc);

#define public_6f5539b _public_6f5539b
#define public_6f553a3 _public_6f553a3
#define public_6f553a9 _public_6f553a9
#define public_6f55410 _public_6f55410
#define public_6f5545f _public_6f5545f
#define public_6f554fb _public_6f554fb

PROC_DECLARE(0x6f55330, internal_6f55330, public_6f55330);
extern "C" NAKED register_t __cdecl internal_6f55330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf5fc @0x6f55332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf5fc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], 0
        je public_6f554fb
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp], eax
        push esi
        add ebp, 4
        push edi
        lea esi, ds:[ebx+8]
        lea edi, ss:[ebp+4]
        mov ecx, 0x11
        rep movsd
        mov ecx, dword ptr ds : [public_6fb3064]
        mov dword ptr ss : [ebp], ecx
        mov dl, byte ptr ds : [ebx+0x4C]
        lea esi, ss:[ebp+0x48]
        mov byte ptr ds : [esi], dl
        mov ecx, dword ptr ds : [ebx+0x50]
        test ecx, ecx
        mov dword ptr ss : [esp+0x28], ebp
        jne public_6f5539b
        xor eax, eax
        jmp public_6f553a3
        public_6f5539b : nop
        mov eax, dword ptr ds : [ebx+0x54]
        sub eax, ecx
        sar eax, 2
        public_6f553a3 : nop
        test eax, eax
        jge public_6f553a9
        xor eax, eax
        public_6f553a9 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x54]
        mov edx, dword ptr ds : [ebx+0x50]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ss : [ebp+0x58], ecx
        lea esi, ds:[ebx+0x60]
        lea edi, ss:[ebp+0x5C]
        push esi
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 1
        call public_6f55880
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        mov al, byte ptr ds : [esi+0x14]
        mov byte ptr ds : [edi+0x14], al
        mov cl, byte ptr ds : [ebx+0x78]
        lea edi, ds:[ebx+0x78]
        lea esi, ss:[ebp+0x74]
        mov byte ptr ds : [esi], cl
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 2
        call public_6fa3db0
        test eax, eax
        jge public_6f55410
        xor eax, eax
        public_6f55410 : nop
        lea edx, ds:[eax*4]
        push edx
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
        mov al, byte ptr ds : [ebx+0x88]
        lea edi, ds:[ebx+0x88]
        lea esi, ss:[ebp+0x84]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 3
        mov byte ptr ds : [esi], al
        call public_6fa3db0
        test eax, eax
        jge public_6f5545f
        xor eax, eax
        public_6f5545f : nop
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
        mov edx, dword ptr ds : [ebx+0x98]
        mov dword ptr ss : [ebp+0x94], edx
        mov al, byte ptr ds : [ebx+0x9C]
        lea edx, ds:[ebx+0xA0]
        lea ecx, ss:[ebp+0x9C]
        push edx
        mov byte ptr ss : [esp+0x20], 4
        mov byte ptr ss : [ebp+0x98], al
        call public_6f55510
        lea eax, ds:[ebx+0xB4]
        push eax
        lea ecx, ss:[ebp+0xB0]
        mov byte ptr ss : [esp+0x20], 5
        call public_6f55660
        lea ecx, ds:[ebx+0xC4]
        push ecx
        lea ecx, ss:[ebp+0xC0]
        mov byte ptr ss : [esp+0x20], 6
        call public_6eb35b0
        mov edx, dword ptr ds : [ebx+0xD4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xD0], edx
        mov dword ptr ss : [ebp], offset public_6fbb798
        pop ebx
        public_6f554fb : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f55330)
    }
}

#undef public_6f5539b
#undef public_6f553a3
#undef public_6f553a9
#undef public_6f55410
#undef public_6f5545f
#undef public_6f554fb
