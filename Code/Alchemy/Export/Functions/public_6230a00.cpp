#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a0d0);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b390);
CLANG_FORWARD_PROC_SYMBOL(public_620b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_620b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6225a50);
CLANG_FORWARD_PROC_SYMBOL(public_6230840);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_6243ff0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62499ac);

#define public_6230a39 _public_6230a39
#define public_6230a59 _public_6230a59
#define public_6230a5d _public_6230a5d
#define public_6230a62 _public_6230a62
#define public_6230b27 _public_6230b27
#define public_6230b29 _public_6230b29
#define public_6230b45 _public_6230b45
#define public_6230b90 _public_6230b90
#define public_6230bb1 _public_6230bb1
#define public_6230c2c _public_6230c2c
#define public_6230c39 _public_6230c39
#define public_6230c3f _public_6230c3f
#define public_6230c41 _public_6230c41

PROC_DECLARE(0x6230a00, internal_6230a00, public_6230a00);
extern "C" NAKED register_t __cdecl internal_6230a00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62499ac @0x6230a08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62499ac
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp ecx, 8
        jne public_6230c2c
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        public_6230a39 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6230a5d
        test cl, cl
        je public_6230a59
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6230a5d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6230a39
        public_6230a59 : nop
        xor eax, eax
        jmp public_6230a62
        public_6230a5d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6230a62 : nop
        cmp eax, ebx
        jne public_6230c2c
        push 0xA8
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x28], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x20], ebx
        je public_6230b27
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624ba48
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], esi
        call public_6243ff0
        lea ecx, ds:[esi+0x64]
        call public_6230840
        mov ebp, offset public_624bd84
        mov dword ptr ds : [esi+0x5C], ebp
        lea ecx, ds:[esi+0x84]
        call public_6230840
        mov dword ptr ds : [esi+0x7C], ebp
        lea ecx, ds:[esi+0x64]
/*FIXUP push offset public_6257a70 @0x6230abe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257a70
        mov byte ptr ss : [esp+0x24], 3
        mov dword ptr ds : [esi], offset public_624e4d8
        call public_6225a50
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        call public_623ef70
        add esp, 4
        lea ecx, ds:[esi+0x84]
        mov dword ptr ds : [esi+0x60], eax
/*FIXUP push offset public_6257a70 @0x6230ae8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257a70
        call public_6225a50
        mov eax, dword ptr ds : [esi+0x8C]
        push eax
        call public_623ef70
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x9C], ebx
        add esp, 4
        mov dword ptr ds : [edi], offset public_624e730
        mov dword ptr ds : [esi], offset public_624e790
        mov dword ptr ds : [edi+0xA4], 1
        mov ebp, edi
        jmp public_6230b29
        public_6230b27 : nop
        xor ebp, ebp
        public_6230b29 : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        jne public_6230b45
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], ebp
        jmp public_6230c41
        public_6230b45 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [ebp+4]
        lea edi, ss:[ebp+4]
        push eax
        push edi
        call dword ptr ds : [edx]
        mov ebx, eax
        test ebx, ebx
        je public_6230c39
        mov esi, offset public_624bd84
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ds : [edi+0x7C], esi
        mov eax, dword ptr ds : [edi+0x88]
        test eax, eax
        mov dword ptr ds : [edi+0x84], offset public_624bd80
        je public_6230b90
        mov eax, dword ptr ds : [edi+0x8C]
        test eax, eax
        je public_6230b90
        push eax
        call public_62460e0
        add esp, 4
        public_6230b90 : nop
        mov dword ptr ds : [edi+0x5C], esi
        mov eax, dword ptr ds : [edi+0x68]
        test eax, eax
        mov dword ptr ds : [edi+0x64], offset public_624bd80
        je public_6230bb1
        mov eax, dword ptr ds : [edi+0x6C]
        test eax, eax
        je public_6230bb1
        push eax
        call public_62460e0
        add esp, 4
        public_6230bb1 : nop
        lea ecx, ds:[edi+0x58]
        mov dword ptr ss : [esp+0x20], 5
        call public_620a0d0
        mov eax, dword ptr ds : [edi+0x50]
        lea esi, ds:[edi+0x4C]
        push eax
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x24], 4
        call public_620b3f0
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_620b390
        mov eax, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_620b3a0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_62460e0
        xor eax, eax
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_620b260
        push ebp
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x34]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edx], eax
        jmp public_6230c3f
        public_6230c2c : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_6230c41
        public_6230c39 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx], ebp
        public_6230c3f : nop
        mov eax, ebx
        public_6230c41 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6230a00)
    }
}

#undef public_6230a39
#undef public_6230a59
#undef public_6230a5d
#undef public_6230a62
#undef public_6230b27
#undef public_6230b29
#undef public_6230b45
#undef public_6230b90
#undef public_6230bb1
#undef public_6230c2c
#undef public_6230c39
#undef public_6230c3f
#undef public_6230c41
