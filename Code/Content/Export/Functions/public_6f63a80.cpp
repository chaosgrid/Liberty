#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead810);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7310);
CLANG_FORWARD_PROC_SYMBOL(public_6f63a80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafb4b);

#define public_6f63b39 _public_6f63b39
#define public_6f63b41 _public_6f63b41
#define public_6f63b4c _public_6f63b4c
#define public_6f63b54 _public_6f63b54
#define public_6f63b66 _public_6f63b66
#define public_6f63b92 _public_6f63b92
#define public_6f63baf _public_6f63baf
#define public_6f63bba _public_6f63bba
#define public_6f63bc2 _public_6f63bc2
#define public_6f63bca _public_6f63bca
#define public_6f63bd2 _public_6f63bd2
#define public_6f63be6 _public_6f63be6
#define public_6f63bf6 _public_6f63bf6
#define public_6f63c24 _public_6f63c24
#define public_6f63c4a _public_6f63c4a
#define public_6f63c5f _public_6f63c5f
#define public_6f63c84 _public_6f63c84
#define public_6f63ca9 _public_6f63ca9

PROC_DECLARE(0x6f63a80, internal_6f63a80, public_6f63a80);
extern "C" NAKED register_t __cdecl internal_6f63a80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafb4b @0x6f63a82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafb4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        mov cl, byte ptr ss : [esp+0x1C]
        push esi
        mov eax, 0x3F800000
        mov dword ptr ss : [ebp+0x30], eax
        mov dword ptr ss : [ebp+0x20], eax
        mov dword ptr ss : [ebp+0x10], eax
        xor eax, eax
        push edi
        lea edi, ss:[ebp+0x10]
        mov dword ptr ds : [edi+0x1C], eax
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+4], eax
        lea ebx, ss:[ebp+0x4C]
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x24], eax
        mov dword ptr ss : [esp+0x10], ebp
        mov byte ptr ds : [ebx], cl
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov ecx, dword ptr ss : [esp+0x28]
        mov dl, byte ptr ss : [esp+0x24]
        mov dword ptr ss : [ebp+4], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [ebp+8], ecx
        mov byte ptr ss : [ebp], dl
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [ebp+0xC], edx
        mov ecx, 0xC
        lea esi, ss:[esp+0x34]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x64]
        mov esi, dword ptr ss : [esp+0x70]
        cmp ebx, esi
        lea edx, ss:[ebp+0x40]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [edx+8], ecx
        je public_6f63ca9
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, eax
        jne public_6f63b39
        xor edi, edi
        jmp public_6f63b41
        public_6f63b39 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, ecx
        sar edi, 4
        public_6f63b41 : nop
        mov edx, dword ptr ds : [ebx+4]
        cmp edx, eax
        jne public_6f63b4c
        xor ecx, ecx
        jmp public_6f63b54
        public_6f63b4c : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 4
        public_6f63b54 : nop
        cmp edi, ecx
        ja public_6f63baf
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], ecx
        je public_6f63b92
        public_6f63b66 : nop
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edi, edx
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebp
        mov ebp, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ebp
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edi+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        add eax, 0x10
        add edx, 0x10
        cmp eax, ecx
        jne public_6f63b66
        mov ebp, dword ptr ss : [esp+0x10]
        public_6f63b92 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6f63c4a
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        shl esi, 4
        add esi, eax
        mov dword ptr ds : [ebx+8], esi
        jmp public_6f63ca9
        public_6f63baf : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, eax
        jne public_6f63bba
        xor edi, edi
        jmp public_6f63bc2
        public_6f63bba : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, ecx
        sar edi, 4
        public_6f63bc2 : nop
        cmp edx, eax
        jne public_6f63bca
        xor ecx, ecx
        jmp public_6f63bd2
        public_6f63bca : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 4
        public_6f63bd2 : nop
        cmp edi, ecx
        ja public_6f63c5f
        cmp edx, eax
        je public_6f63be6
        mov eax, dword ptr ds : [ebx+8]
        sub eax, edx
        sar eax, 4
        public_6f63be6 : nop
        mov ecx, dword ptr ds : [esi+4]
        shl eax, 4
        add eax, ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x24], edx
        je public_6f63c24
        public_6f63bf6 : nop
        mov edi, ecx
        mov ebp, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], ebp
        mov ebp, dword ptr ds : [edi+8]
        mov dword ptr ds : [edx+8], ebp
        mov edi, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edx+0xC], edi
        mov edx, dword ptr ss : [esp+0x24]
        add edx, 0x10
        add ecx, 0x10
        cmp ecx, eax
        mov dword ptr ss : [esp+0x24], edx
        jne public_6f63bf6
        mov ebp, dword ptr ss : [esp+0x10]
        public_6f63c24 : nop
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        push ecx
        push eax
        mov ecx, ebx
        call public_6eb7310
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6f63c4a
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        shl esi, 4
        add esi, eax
        mov dword ptr ds : [ebx+8], esi
        jmp public_6f63ca9
        public_6f63c4a : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar esi, 4
        shl esi, 4
        add esi, eax
        mov dword ptr ds : [ebx+8], esi
        jmp public_6f63ca9
        public_6f63c5f : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        push edx
        mov ecx, ebx
        call public_6ea1490
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov ecx, esi
        call public_6ead810
        test eax, eax
        jge public_6f63c84
        xor eax, eax
        public_6f63c84 : nop
        shl eax, 4
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        push eax
        push ecx
        push esi
        mov ecx, ebx
        call public_6eb7310
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        public_6f63ca9 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x50
        UNREACHABLE_TRAP(0x6f63a80)
    }
}

#undef public_6f63b39
#undef public_6f63b41
#undef public_6f63b4c
#undef public_6f63b54
#undef public_6f63b66
#undef public_6f63b92
#undef public_6f63baf
#undef public_6f63bba
#undef public_6f63bc2
#undef public_6f63bca
#undef public_6f63bd2
#undef public_6f63be6
#undef public_6f63bf6
#undef public_6f63c24
#undef public_6f63c4a
#undef public_6f63c5f
#undef public_6f63c84
#undef public_6f63ca9
