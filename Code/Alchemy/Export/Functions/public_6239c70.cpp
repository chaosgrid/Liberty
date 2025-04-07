#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ccc0);
CLANG_FORWARD_PROC_SYMBOL(public_62397e0);
CLANG_FORWARD_PROC_SYMBOL(public_6239800);
CLANG_FORWARD_PROC_SYMBOL(public_6239f00);
CLANG_FORWARD_PROC_SYMBOL(public_623a050);
CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_6244b20);
CLANG_FORWARD_PROC_SYMBOL(public_6244b50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a191);

#define public_6239caa _public_6239caa
#define public_6239cca _public_6239cca
#define public_6239cce _public_6239cce
#define public_6239cd3 _public_6239cd3
#define public_6239d7b _public_6239d7b
#define public_6239d81 _public_6239d81
#define public_6239d9d _public_6239d9d
#define public_6239e3b _public_6239e3b
#define public_6239e4b _public_6239e4b
#define public_6239e84 _public_6239e84
#define public_6239e9d _public_6239e9d
#define public_6239eaa _public_6239eaa
#define public_6239eb0 _public_6239eb0

PROC_DECLARE(0x6239c70, internal_6239c70, public_6239c70);
extern "C" NAKED register_t __cdecl internal_6239c70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a191 @0x6239c78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a191
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
        jne public_6239e9d
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6239caa : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6239cce
        cmp cl, bl
        je public_6239cca
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6239cce
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6239caa
        public_6239cca : nop
        xor eax, eax
        jmp public_6239cd3
        public_6239cce : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6239cd3 : nop
        cmp eax, ebx
        jne public_6239e9d
        push 0x104
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x34], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        je public_6239d7b
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
        mov dword ptr ds : [esi], offset public_624eee8
        mov dword ptr ds : [esi+0xE0], offset public_6257b68
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [edi+0xB8], edi
        mov dword ptr ds : [edi+0x24], edi
        mov dword ptr ds : [edi], offset public_624f008
        mov dword ptr ds : [esi], offset public_624ef78
        mov dword ptr ds : [edi+0x100], 1
        mov dword ptr ss : [esp+0x34], edi
        jmp public_6239d81
        public_6239d7b : nop
        mov dword ptr ss : [esp+0x34], ebx
        mov edi, ebx
        public_6239d81 : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        jne public_6239d9d
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_6239eb0
        public_6239d9d : nop
        mov edx, dword ptr ds : [edi+0xC]
        lea esi, ds:[edi+0xC]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6239eaa
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
        call public_6239800
        push ecx
        mov byte ptr ss : [esp+0x34], 5
        mov ecx, esp
        mov dword ptr ss : [esp+0x28], esp
        push ecx
        mov ecx, ebp
        call public_62397e0
        lea edx, ss:[esp+0x40]
        mov ecx, ebp
        push edx
        mov byte ptr ss : [esp+0x38], 4
        call public_6239f00
        mov ecx, ebp
        mov dword ptr ss : [esp+0x38], ebx
        mov byte ptr ss : [esp+0x2C], 3
        call public_623a050
        lea ecx, ds:[esi+0xB4]
        mov byte ptr ss : [esp+0x2C], 2
        call public_6244b50
        mov edi, dword ptr ds : [esi+0xA0]
        mov ebp, dword ptr ds : [esi+0x9C]
        cmp ebp, edi
        mov dword ptr ss : [esp+0x2C], 6
        je public_6239e4b
        public_6239e3b : nop
        push ebp
        call public_620ccc0
        add ebp, 4
        add esp, 4
        cmp ebp, edi
        jne public_6239e3b
        public_6239e4b : nop
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
        je public_6239e84
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_6239e84 : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 4
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6239eb0
        public_6239e9d : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_6239eb0
        public_6239eaa : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx], edi
        public_6239eb0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x6239c70)
    }
}

#undef public_6239caa
#undef public_6239cca
#undef public_6239cce
#undef public_6239cd3
#undef public_6239d7b
#undef public_6239d81
#undef public_6239d9d
#undef public_6239e3b
#undef public_6239e4b
#undef public_6239e84
#undef public_6239e9d
#undef public_6239eaa
#undef public_6239eb0
