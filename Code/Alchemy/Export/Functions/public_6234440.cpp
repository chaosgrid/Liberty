#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ccc0);
CLANG_FORWARD_PROC_SYMBOL(public_6233fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6233fe0);
CLANG_FORWARD_PROC_SYMBOL(public_62346d0);
CLANG_FORWARD_PROC_SYMBOL(public_6234820);
CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_6244b20);
CLANG_FORWARD_PROC_SYMBOL(public_6244b50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249ca1);

#define public_623447a _public_623447a
#define public_623449a _public_623449a
#define public_623449e _public_623449e
#define public_62344a3 _public_62344a3
#define public_623454b _public_623454b
#define public_6234551 _public_6234551
#define public_623456d _public_623456d
#define public_623460b _public_623460b
#define public_623461b _public_623461b
#define public_6234654 _public_6234654
#define public_623466d _public_623466d
#define public_623467a _public_623467a
#define public_6234680 _public_6234680

PROC_DECLARE(0x6234440, internal_6234440, public_6234440);
extern "C" NAKED register_t __cdecl internal_6234440()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249ca1 @0x6234448*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249ca1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        push esi
        push edi
        xor ebx, ebx
        mov eax, dword ptr ss : [ebp]
        xor edi, edi
        cmp eax, 8
        jne public_623466d
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_623447a : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_623449e
        cmp cl, bl
        je public_623449a
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_623449e
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_623447a
        public_623449a : nop
        xor eax, eax
        jmp public_62344a3
        public_623449e : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62344a3 : nop
        cmp eax, ebx
        jne public_623466d
        push 0x104
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x34], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        je public_623454b
        lea esi, ds:[edi+0xC]
        mov dword ptr ds : [edi], offset public_624b8b0
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], esi
        call public_6244360
        lea ecx, ds:[esi+0xB4]
        mov byte ptr ss : [esp+0x2C], 1
        call public_6244b20
        mov ebp, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi], offset public_624e8b0
        mov dword ptr ds : [esi+0xE0], offset public_6257b14
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [edi+0xB8], edi
        mov dword ptr ds : [edi+0x24], edi
        mov dword ptr ds : [edi], offset public_624e9d0
        mov dword ptr ds : [esi], offset public_624e940
        mov dword ptr ds : [edi+0x100], 1
        mov dword ptr ss : [esp+0x34], edi
        jmp public_6234551
        public_623454b : nop
        mov dword ptr ss : [esp+0x34], ebx
        mov edi, ebx
        public_6234551 : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        jne public_623456d
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_6234680
        public_623456d : nop
        mov edx, dword ptr ds : [edi+0xC]
        lea esi, ds:[edi+0xC]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_623467a
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x2C], 2
        lea ebp, ds:[esi+0xD8]
        mov dword ptr ss : [esp+0x18], ebp
        push ecx
        mov ecx, ebp
        mov eax, esp
        mov dword ptr ss : [esp+0x20], esp
        push eax
        mov byte ptr ss : [esp+0x34], 4
        call public_6233fe0
        push ecx
        mov byte ptr ss : [esp+0x34], 5
        mov ecx, esp
        mov dword ptr ss : [esp+0x28], esp
        push ecx
        mov ecx, ebp
        call public_6233fc0
        lea edx, ss:[esp+0x40]
        mov ecx, ebp
        push edx
        mov byte ptr ss : [esp+0x38], 4
        call public_62346d0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x38], ebx
        mov byte ptr ss : [esp+0x2C], 3
        call public_6234820
        lea ecx, ds:[esi+0xB4]
        mov byte ptr ss : [esp+0x2C], 2
        call public_6244b50
        mov edi, dword ptr ds : [esi+0xA0]
        mov ebp, dword ptr ds : [esi+0x9C]
        cmp ebp, edi
        mov dword ptr ss : [esp+0x2C], 6
        je public_623461b
        public_623460b : nop
        push ebp
        call public_620ccc0
        add ebp, 4
        add esp, 4
        cmp ebp, edi
        jne public_623460b
        public_623461b : nop
        mov eax, dword ptr ds : [esi+0x9C]
        push eax
        call public_62460e0
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov eax, dword ptr ds : [esi+0x7C]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6234654
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_6234654 : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 4
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6234680
        public_623466d : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_6234680
        public_623467a : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx], edi
        public_6234680 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x6234440)
    }
}

#undef public_623447a
#undef public_623449a
#undef public_623449e
#undef public_62344a3
#undef public_623454b
#undef public_6234551
#undef public_623456d
#undef public_623460b
#undef public_623461b
#undef public_6234654
#undef public_623466d
#undef public_623467a
#undef public_6234680
