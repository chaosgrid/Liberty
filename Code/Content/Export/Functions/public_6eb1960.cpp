#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaec70);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1960);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1b50);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1b80);
CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7310);
CLANG_FORWARD_PROC_SYMBOL(public_6f36ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9f6d);

#define public_6eb19d7 _public_6eb19d7
#define public_6eb19dd _public_6eb19dd
#define public_6eb1a00 _public_6eb1a00
#define public_6eb1a18 _public_6eb1a18
#define public_6eb1a34 _public_6eb1a34
#define public_6eb1a49 _public_6eb1a49
#define public_6eb1a51 _public_6eb1a51
#define public_6eb1a73 _public_6eb1a73
#define public_6eb1a8b _public_6eb1a8b
#define public_6eb1aa9 _public_6eb1aa9
#define public_6eb1ab1 _public_6eb1ab1
#define public_6eb1ab7 _public_6eb1ab7
#define public_6eb1af9 _public_6eb1af9
#define public_6eb1b38 _public_6eb1b38

PROC_DECLARE(0x6eb1960, internal_6eb1960, public_6eb1960);
extern "C" NAKED register_t __cdecl internal_6eb1960()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9f6d @0x6eb1962*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9f6d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], 0
        je public_6eb1b38
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp], eax
        push esi
        add ebx, 4
        add ebp, 4
        push edi
        mov ecx, 0x11
        mov esi, ebx
        mov edi, ebp
        rep movsd
        mov cl, byte ptr ds : [ebx+0x44]
        mov byte ptr ss : [ebp+0x44], cl
        mov eax, dword ptr ds : [ebx+0x48]
        test eax, eax
        mov dword ptr ss : [esp+0x14], ebp
        je public_6eb19d7
        mov ecx, dword ptr ds : [ebx+0x4C]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6eb19d7 : nop
        test eax, eax
        jge public_6eb19dd
        xor eax, eax
        public_6eb19dd : nop
        lea ecx, ds:[eax+eax*8]
        shl ecx, 2
        push ecx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x48], eax
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov edi, dword ptr ds : [ebx+0x48]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov esi, eax
        je public_6eb1a18
        nop 
        public_6eb1a00 : nop
        push edi
        push esi
        call public_6eb1b80
        mov eax, dword ptr ss : [esp+0x34]
        add edi, 0x24
        add esp, 8
        add esi, 0x24
        cmp edi, eax
        jne public_6eb1a00
        public_6eb1a18 : nop
        mov dword ptr ss : [ebp+0x4C], esi
        mov dword ptr ss : [ebp+0x50], esi
        mov dl, byte ptr ds : [ebx+0x54]
        mov byte ptr ss : [ebp+0x54], dl
        mov eax, dword ptr ds : [ebx+0x58]
        test eax, eax
        mov byte ptr ss : [esp+0x20], 1
        jne public_6eb1a34
        xor edx, edx
        jmp public_6eb1a49
        public_6eb1a34 : nop
        mov ecx, dword ptr ds : [ebx+0x5C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6eb1a49 : nop
        test edx, edx
        mov eax, edx
        jge public_6eb1a51
        xor eax, eax
        public_6eb1a51 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 2
        push ecx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x58], eax
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov edi, dword ptr ds : [ebx+0x58]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov esi, eax
        je public_6eb1a8b
        public_6eb1a73 : nop
        push edi
        push esi
        call public_6f36ef0
        mov eax, dword ptr ss : [esp+0x34]
        add edi, 0xC
        add esp, 8
        add esi, 0xC
        cmp edi, eax
        jne public_6eb1a73
        public_6eb1a8b : nop
        mov dword ptr ss : [ebp+0x5C], esi
        mov dword ptr ss : [ebp+0x60], esi
        mov dl, byte ptr ds : [ebx+0x64]
        lea esi, ss:[ebp+0x64]
        mov byte ptr ds : [esi], dl
        mov ecx, dword ptr ds : [ebx+0x68]
        test ecx, ecx
        mov byte ptr ss : [esp+0x20], 2
        jne public_6eb1aa9
        xor eax, eax
        jmp public_6eb1ab1
        public_6eb1aa9 : nop
        mov eax, dword ptr ds : [ebx+0x6C]
        sub eax, ecx
        sar eax, 4
        public_6eb1ab1 : nop
        test eax, eax
        jge public_6eb1ab7
        xor eax, eax
        public_6eb1ab7 : nop
        shl eax, 4
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edx, dword ptr ds : [ebx+0x68]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eb7310
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov al, byte ptr ds : [ebx+0x74]
        lea edi, ds:[ebx+0x74]
        lea esi, ss:[ebp+0x74]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 3
        mov byte ptr ds : [esi], al
        call public_6eb1b50
        test eax, eax
        jge public_6eb1af9
        xor eax, eax
        public_6eb1af9 : nop
        imul eax, 0x2C
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
        call public_6eaec70
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        add ebx, 0x84
        push ebx
        lea ecx, ss:[ebp+0x84]
        mov byte ptr ss : [esp+0x24], 4
        call public_6eb35b0
        pop edi
        pop esi
        pop ebx
        public_6eb1b38 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6eb1960)
    }
}

#undef public_6eb19d7
#undef public_6eb19dd
#undef public_6eb1a00
#undef public_6eb1a18
#undef public_6eb1a34
#undef public_6eb1a49
#undef public_6eb1a51
#undef public_6eb1a73
#undef public_6eb1a8b
#undef public_6eb1aa9
#undef public_6eb1ab1
#undef public_6eb1ab7
#undef public_6eb1af9
#undef public_6eb1b38
