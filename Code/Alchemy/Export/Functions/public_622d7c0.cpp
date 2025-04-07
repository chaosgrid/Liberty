#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ccc0);
CLANG_FORWARD_PROC_SYMBOL(public_622d220);
CLANG_FORWARD_PROC_SYMBOL(public_622d240);
CLANG_FORWARD_PROC_SYMBOL(public_622da40);
CLANG_FORWARD_PROC_SYMBOL(public_622dac0);
CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_6244b20);
CLANG_FORWARD_PROC_SYMBOL(public_6244b50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249651);

#define public_622d7fa _public_622d7fa
#define public_622d81a _public_622d81a
#define public_622d81e _public_622d81e
#define public_622d823 _public_622d823
#define public_622d8cb _public_622d8cb
#define public_622d8d1 _public_622d8d1
#define public_622d8ed _public_622d8ed
#define public_622d98b _public_622d98b
#define public_622d99b _public_622d99b
#define public_622d9d4 _public_622d9d4
#define public_622d9ed _public_622d9ed
#define public_622d9fa _public_622d9fa
#define public_622da00 _public_622da00

PROC_DECLARE(0x622d7c0, internal_622d7c0, public_622d7c0);
extern "C" NAKED register_t __cdecl internal_622d7c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249651 @0x622d7c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249651
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
        jne public_622d9ed
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_622d7fa : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_622d81e
        cmp cl, bl
        je public_622d81a
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_622d81e
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_622d7fa
        public_622d81a : nop
        xor eax, eax
        jmp public_622d823
        public_622d81e : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_622d823 : nop
        cmp eax, ebx
        jne public_622d9ed
        push 0x104
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x34], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        je public_622d8cb
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
        mov dword ptr ds : [esi], offset public_624e1b8
        mov dword ptr ds : [esi+0xE0], offset public_6257a9c
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [edi+0xB8], edi
        mov dword ptr ds : [edi+0x24], edi
        mov dword ptr ds : [edi], offset public_624e2d8
        mov dword ptr ds : [esi], offset public_624e248
        mov dword ptr ds : [edi+0x100], 1
        mov dword ptr ss : [esp+0x34], edi
        jmp public_622d8d1
        public_622d8cb : nop
        mov dword ptr ss : [esp+0x34], ebx
        mov edi, ebx
        public_622d8d1 : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        jne public_622d8ed
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_622da00
        public_622d8ed : nop
        mov edx, dword ptr ds : [edi+0xC]
        lea esi, ds:[edi+0xC]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_622d9fa
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
        call public_622d240
        push ecx
        mov byte ptr ss : [esp+0x34], 5
        mov ecx, esp
        mov dword ptr ss : [esp+0x28], esp
        push ecx
        mov ecx, ebp
        call public_622d220
        lea edx, ss:[esp+0x40]
        mov ecx, ebp
        push edx
        mov byte ptr ss : [esp+0x38], 4
        call public_622da40
        mov ecx, ebp
        mov dword ptr ss : [esp+0x38], ebx
        mov byte ptr ss : [esp+0x2C], 3
        call public_622dac0
        lea ecx, ds:[esi+0xB4]
        mov byte ptr ss : [esp+0x2C], 2
        call public_6244b50
        mov edi, dword ptr ds : [esi+0xA0]
        mov ebp, dword ptr ds : [esi+0x9C]
        cmp ebp, edi
        mov dword ptr ss : [esp+0x2C], 6
        je public_622d99b
        public_622d98b : nop
        push ebp
        call public_620ccc0
        add ebp, 4
        add esp, 4
        cmp ebp, edi
        jne public_622d98b
        public_622d99b : nop
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
        je public_622d9d4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_622d9d4 : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 4
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_622da00
        public_622d9ed : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_622da00
        public_622d9fa : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx], edi
        public_622da00 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x622d7c0)
    }
}

#undef public_622d7fa
#undef public_622d81a
#undef public_622d81e
#undef public_622d823
#undef public_622d8cb
#undef public_622d8d1
#undef public_622d8ed
#undef public_622d98b
#undef public_622d99b
#undef public_622d9d4
#undef public_622d9ed
#undef public_622d9fa
#undef public_622da00
