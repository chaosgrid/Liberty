#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8110);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8310);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac5b3);

#define public_6ef8175 _public_6ef8175
#define public_6ef817d _public_6ef817d
#define public_6ef8183 _public_6ef8183
#define public_6ef81c4 _public_6ef81c4
#define public_6ef81dc _public_6ef81dc
#define public_6ef81e4 _public_6ef81e4
#define public_6ef8203 _public_6ef8203
#define public_6ef821b _public_6ef821b
#define public_6ef8249 _public_6ef8249
#define public_6ef824e _public_6ef824e
#define public_6ef8254 _public_6ef8254
#define public_6ef8270 _public_6ef8270
#define public_6ef8284 _public_6ef8284
#define public_6ef82b3 _public_6ef82b3
#define public_6ef82f7 _public_6ef82f7

PROC_DECLARE(0x6ef8110, internal_6ef8110, public_6ef8110);
extern "C" NAKED register_t __cdecl internal_6ef8110()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac5b3 @0x6ef8112*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac5b3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], edi
        test edi, edi
        mov dword ptr ss : [esp+0x10], 0
        je public_6ef82f7
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        mov dl, byte ptr ds : [esi+0x14]
        lea ebx, ds:[edi+0x14]
        mov byte ptr ds : [ebx], dl
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        jne public_6ef8175
        xor eax, eax
        jmp public_6ef817d
        public_6ef8175 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        sub eax, ecx
        sar eax, 3
        public_6ef817d : nop
        test eax, eax
        jge public_6ef8183
        xor eax, eax
        public_6ef8183 : nop
        shl eax, 3
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x18]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_6ed2700
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edi+0x24], ecx
        mov dl, byte ptr ds : [esi+0x28]
        mov byte ptr ds : [edi+0x28], dl
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 1
        jne public_6ef81c4
        xor edx, edx
        jmp public_6ef81dc
        public_6ef81c4 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ef81dc : nop
        test edx, edx
        mov eax, edx
        jge public_6ef81e4
        xor eax, eax
        public_6ef81e4 : nop
        imul eax, 0x38
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x2C], eax
        mov ecx, dword ptr ds : [esi+0x30]
        mov ebp, dword ptr ds : [esi+0x2C]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov ebx, eax
        je public_6ef821b
        public_6ef8203 : nop
        push ebp
        push ebx
        call public_6ef7f40
        mov eax, dword ptr ss : [esp+0x30]
        add ebp, 0x38
        add esp, 8
        add ebx, 0x38
        cmp ebp, eax
        jne public_6ef8203
        public_6ef821b : nop
        mov dword ptr ds : [edi+0x30], ebx
        mov dword ptr ds : [edi+0x34], ebx
        mov ecx, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [edi+0x38], ecx
        mov edx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [edi+0x3C], edx
        mov eax, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [edi+0x40], eax
        mov cl, byte ptr ds : [esi+0x44]
        mov byte ptr ds : [edi+0x44], cl
        mov ecx, dword ptr ds : [esi+0x48]
        test ecx, ecx
        mov byte ptr ss : [esp+0x1C], 2
        jne public_6ef8249
        xor eax, eax
        jmp public_6ef824e
        public_6ef8249 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        sub eax, ecx
        public_6ef824e : nop
        test eax, eax
        jge public_6ef8254
        xor eax, eax
        public_6ef8254 : nop
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x48], eax
        mov ecx, dword ptr ds : [esi+0x4C]
        mov ebp, dword ptr ds : [esi+0x48]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov ebx, eax
        je public_6ef8284
        public_6ef8270 : nop
        push ebp
        push ebx
        call public_6ef8310
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 8
        inc ebx
        inc ebp
        cmp ebp, eax
        jne public_6ef8270
        public_6ef8284 : nop
        mov dword ptr ds : [edi+0x4C], ebx
        mov dword ptr ds : [edi+0x50], ebx
        mov edx, dword ptr ds : [esi+0x58]
        mov dword ptr ds : [edi+0x58], edx
        mov eax, dword ptr ds : [esi+0x5C]
        mov dword ptr ds : [edi+0x5C], eax
        mov cl, byte ptr ds : [esi+0x60]
        lea ebp, ds:[esi+0x60]
        lea ebx, ds:[edi+0x60]
        mov byte ptr ds : [ebx], cl
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1C], 3
        call public_6fa3db0
        test eax, eax
        jge public_6ef82b3
        xor eax, eax
        public_6ef82b3 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_6eed270
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ds : [esi+0x70]
        mov dword ptr ds : [edi+0x70], eax
        mov cl, byte ptr ds : [esi+0x74]
        mov byte ptr ds : [edi+0x74], cl
        mov edx, dword ptr ds : [esi+0x78]
        mov dword ptr ds : [edi+0x78], edx
        mov eax, dword ptr ds : [esi+0x7C]
        pop esi
        pop ebp
        mov dword ptr ds : [edi+0x7C], eax
        pop ebx
        public_6ef82f7 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ef8110)
    }
}

#undef public_6ef8175
#undef public_6ef817d
#undef public_6ef8183
#undef public_6ef81c4
#undef public_6ef81dc
#undef public_6ef81e4
#undef public_6ef8203
#undef public_6ef821b
#undef public_6ef8249
#undef public_6ef824e
#undef public_6ef8254
#undef public_6ef8270
#undef public_6ef8284
#undef public_6ef82b3
#undef public_6ef82f7
