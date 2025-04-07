#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2800);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4dae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f53960);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf4fb);

#define public_6f52a6a _public_6f52a6a
#define public_6f52a72 _public_6f52a72
#define public_6f52a78 _public_6f52a78
#define public_6f52aa0 _public_6f52aa0
#define public_6f52ab8 _public_6f52ab8
#define public_6f52afe _public_6f52afe
#define public_6f52b06 _public_6f52b06
#define public_6f52b0c _public_6f52b0c
#define public_6f52b56 _public_6f52b56
#define public_6f52b61 _public_6f52b61
#define public_6f52b69 _public_6f52b69
#define public_6f52c06 _public_6f52c06

PROC_DECLARE(0x6f52a20, internal_6f52a20, public_6f52a20);
extern "C" NAKED register_t __cdecl internal_6f52a20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf4fb @0x6f52a22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf4fb
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
        mov cl, byte ptr ds : [ebx+0x48]
        mov byte ptr ss : [ebp+0x48], cl
        mov ecx, dword ptr ds : [ebx+0x4C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6f52a6a
        xor eax, eax
        jmp public_6f52a72
        public_6f52a6a : nop
        mov eax, dword ptr ds : [ebx+0x50]
        sub eax, ecx
        sar eax, 2
        public_6f52a72 : nop
        test eax, eax
        jge public_6f52a78
        xor eax, eax
        public_6f52a78 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x4C], eax
        mov ecx, dword ptr ds : [ebx+0x50]
        mov edi, dword ptr ds : [ebx+0x4C]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov esi, eax
        je public_6f52ab8
        nop 
        lea esp, ss:[esp]
        public_6f52aa0 : nop
        push edi
        push esi
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x2C]
        add edi, 4
        add esp, 8
        add esi, 4
        cmp edi, eax
        jne public_6f52aa0
        public_6f52ab8 : nop
        mov dword ptr ss : [ebp+0x50], esi
        mov dword ptr ss : [ebp+0x54], esi
        mov eax, dword ptr ds : [ebx+0x58]
        lea esi, ds:[ebx+0x5C]
        lea edi, ss:[ebp+0x5C]
        push esi
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [ebp+0x58], eax
        call public_6f55880
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        mov dl, byte ptr ds : [esi+0x14]
        mov byte ptr ds : [edi+0x14], dl
        mov al, byte ptr ds : [ebx+0x74]
        lea esi, ss:[ebp+0x74]
        mov byte ptr ds : [esi], al
        mov ecx, dword ptr ds : [ebx+0x78]
        test ecx, ecx
        mov byte ptr ss : [esp+0x1C], 1
        jne public_6f52afe
        xor eax, eax
        jmp public_6f52b06
        public_6f52afe : nop
        mov eax, dword ptr ds : [ebx+0x7C]
        sub eax, ecx
        sar eax, 2
        public_6f52b06 : nop
        test eax, eax
        jge public_6f52b0c
        xor eax, eax
        public_6f52b0c : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x7C]
        mov edx, dword ptr ds : [ebx+0x78]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dl, byte ptr ds : [ebx+0x84]
        lea esi, ss:[ebp+0x84]
        mov byte ptr ds : [esi], dl
        mov eax, dword ptr ds : [ebx+0x88]
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 2
        jne public_6f52b56
        xor ecx, ecx
        jmp public_6f52b61
        public_6f52b56 : nop
        mov ecx, dword ptr ds : [ebx+0x8C]
        sub ecx, eax
        sar ecx, 2
        public_6f52b61 : nop
        test ecx, ecx
        mov eax, ecx
        jge public_6f52b69
        xor eax, eax
        public_6f52b69 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x8C]
        mov edx, dword ptr ds : [ebx+0x88]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x94]
        mov dword ptr ss : [ebp+0x94], ecx
        mov dl, byte ptr ds : [ebx+0x98]
        mov byte ptr ss : [ebp+0x98], dl
        mov al, byte ptr ds : [ebx+0x9C]
        lea edi, ds:[ebx+0x9C]
        lea esi, ss:[ebp+0x9C]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [edi+0xC]
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 3
        mov byte ptr ds : [esi+0xC], dl
        call public_6f4dae0
        push edi
        mov ecx, esi
        call public_6f53960
        mov al, byte ptr ds : [ebx+0xB0]
        lea edi, ds:[ebx+0xB0]
        lea esi, ss:[ebp+0xB0]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 4
        mov byte ptr ds : [esi], al
        call public_6ed2800
        test eax, eax
        jge public_6f52c06
        xor eax, eax
        public_6f52c06 : nop
        imul eax, 0x34
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
        call public_6f28e30
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        lea ecx, ds:[ebx+0xC0]
        push ecx
        lea ecx, ss:[ebp+0xC0]
        mov byte ptr ss : [esp+0x20], 5
        call public_6eb35b0
        mov edx, dword ptr ds : [ebx+0xD0]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xD0], edx
        mov dword ptr ss : [ebp], offset public_6fbb798
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f52a20)
    }
}

#undef public_6f52a6a
#undef public_6f52a72
#undef public_6f52a78
#undef public_6f52aa0
#undef public_6f52ab8
#undef public_6f52afe
#undef public_6f52b06
#undef public_6f52b0c
#undef public_6f52b56
#undef public_6f52b61
#undef public_6f52b69
#undef public_6f52c06
