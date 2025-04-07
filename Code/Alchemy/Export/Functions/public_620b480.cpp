#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208570);
CLANG_FORWARD_PROC_SYMBOL(public_6208590);
CLANG_FORWARD_PROC_SYMBOL(public_620b750);
CLANG_FORWARD_PROC_SYMBOL(public_620b8a0);
CLANG_FORWARD_PROC_SYMBOL(public_620ccc0);
CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_6244b20);
CLANG_FORWARD_PROC_SYMBOL(public_6244b50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62477d1);

#define public_620b4b6 _public_620b4b6
#define public_620b4da _public_620b4da
#define public_620b4de _public_620b4de
#define public_620b4e3 _public_620b4e3
#define public_620b597 _public_620b597
#define public_620b59d _public_620b59d
#define public_620b5b9 _public_620b5b9
#define public_620b657 _public_620b657
#define public_620b667 _public_620b667
#define public_620b6a0 _public_620b6a0
#define public_620b6b9 _public_620b6b9
#define public_620b6c6 _public_620b6c6
#define public_620b6cc _public_620b6cc

PROC_DECLARE(0x620b480, internal_620b480, public_620b480);
extern "C" NAKED register_t __cdecl internal_620b480()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62477d1 @0x620b488*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62477d1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        xor ebx, ebx
        push esi
        push edi
        cmp dword ptr ss : [ebp], 8
        jne public_620b6b9
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [eax+8]
        public_620b4b6 : nop
        mov cl, byte ptr ds : [esi]
        mov dl, byte ptr ds : [edi]
        mov al, cl
        cmp cl, dl
        jne public_620b4de
        cmp al, bl
        je public_620b4da
        mov dl, byte ptr ds : [esi+1]
        mov cl, byte ptr ds : [edi+1]
        mov al, dl
        cmp dl, cl
        jne public_620b4de
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_620b4b6
        public_620b4da : nop
        xor eax, eax
        jmp public_620b4e3
        public_620b4de : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620b4e3 : nop
        cmp eax, ebx
        jne public_620b6b9
        push 0x104
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x34], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        je public_620b597
        lea esi, ds:[edi+0xC]
        mov dword ptr ds : [edi], offset public_624b8b0
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], esi
        call public_6244360
        lea ecx, ds:[esi+0xB8]
        mov byte ptr ss : [esp+0x2C], 1
        mov dword ptr ds : [esi+0xB4], ebx
        call public_6244b20
        mov ebp, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [esi+0xDC], ebx
        mov byte ptr ds : [esi+0xE0], bl
        mov byte ptr ds : [esi+0xE1], bl
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [esi], offset public_624b6b0
        mov dword ptr ds : [esi+0xEC], offset public_6257954
        mov dword ptr ds : [edi+0xB8], edi
        mov dword ptr ds : [edi+0x24], edi
        mov dword ptr ds : [edi], offset public_624b7d0
        mov dword ptr ds : [esi], offset public_624b740
        mov dword ptr ds : [edi+0x100], 1
        mov dword ptr ss : [esp+0x34], edi
        jmp public_620b59d
        public_620b597 : nop
        mov dword ptr ss : [esp+0x34], ebx
        mov edi, ebx
        public_620b59d : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        jne public_620b5b9
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_620b6cc
        public_620b5b9 : nop
        mov edx, dword ptr ds : [edi+0xC]
        lea esi, ds:[edi+0xC]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_620b6c6
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x2C], 2
        lea ebp, ds:[esi+0xE4]
        mov dword ptr ss : [esp+0x18], ebp
        push ecx
        mov ecx, ebp
        mov eax, esp
        mov dword ptr ss : [esp+0x20], esp
        push eax
        mov byte ptr ss : [esp+0x34], 4
        call public_6208590
        push ecx
        mov byte ptr ss : [esp+0x34], 5
        mov ecx, esp
        mov dword ptr ss : [esp+0x28], esp
        push ecx
        mov ecx, ebp
        call public_6208570
        lea edx, ss:[esp+0x40]
        mov ecx, ebp
        push edx
        mov byte ptr ss : [esp+0x38], 4
        call public_620b750
        mov ecx, ebp
        mov dword ptr ss : [esp+0x38], ebx
        mov byte ptr ss : [esp+0x2C], 3
        call public_620b8a0
        lea ecx, ds:[esi+0xB8]
        mov byte ptr ss : [esp+0x2C], 2
        call public_6244b50
        mov edi, dword ptr ds : [esi+0xA0]
        mov ebp, dword ptr ds : [esi+0x9C]
        cmp ebp, edi
        mov dword ptr ss : [esp+0x2C], 6
        je public_620b667
        public_620b657 : nop
        push ebp
        call public_620ccc0
        add ebp, 4
        add esp, 4
        cmp ebp, edi
        jne public_620b657
        public_620b667 : nop
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
        je public_620b6a0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_620b6a0 : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 4
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_620b6cc
        public_620b6b9 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], ebx
        jmp public_620b6cc
        public_620b6c6 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx], edi
        public_620b6cc : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x620b480)
    }
}

#undef public_620b4b6
#undef public_620b4da
#undef public_620b4de
#undef public_620b4e3
#undef public_620b597
#undef public_620b59d
#undef public_620b5b9
#undef public_620b657
#undef public_620b667
#undef public_620b6a0
#undef public_620b6b9
#undef public_620b6c6
#undef public_620b6cc
