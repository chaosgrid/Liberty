#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_620a030);
CLANG_FORWARD_PROC_SYMBOL(public_620a0d0);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_620d1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6210900);
CLANG_FORWARD_PROC_SYMBOL(public_62455b0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a494);

#define public_623c779 _public_623c779
#define public_623c799 _public_623c799
#define public_623c79d _public_623c79d
#define public_623c7a2 _public_623c7a2
#define public_623c7fd _public_623c7fd
#define public_623c81d _public_623c81d
#define public_623c892 _public_623c892
#define public_623c894 _public_623c894
#define public_623c8b0 _public_623c8b0
#define public_623c8e0 _public_623c8e0
#define public_623c8f5 _public_623c8f5
#define public_623c94e _public_623c94e
#define public_623c963 _public_623c963
#define public_623c996 _public_623c996
#define public_623c9a3 _public_623c9a3
#define public_623c9a9 _public_623c9a9
#define public_623c9ab _public_623c9ab

PROC_DECLARE(0x623c740, internal_623c740, public_623c740);
extern "C" NAKED register_t __cdecl internal_623c740()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a494 @0x623c748*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a494
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        push esi
        mov eax, dword ptr ds : [ebx]
        push edi
        xor ebp, ebp
        xor edi, edi
        cmp eax, 8
        jne public_623c996
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx+4]
        public_623c779 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_623c79d
        test cl, cl
        je public_623c799
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_623c79d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_623c779
        public_623c799 : nop
        xor eax, eax
        jmp public_623c7a2
        public_623c79d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_623c7a2 : nop
        cmp eax, ebp
        jne public_623c996
        push 0x7C
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], edi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_623c892
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624ba48
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], esi
        call public_62455b0
        mov dword ptr ds : [esi+0x6C], ebp
        lea ebx, ds:[esi+0x70]
        mov dword ptr ds : [ebx], ebp
        mov dword ptr ds : [esi], offset public_624f248
        mov eax, dword ptr ds : [esi+0x6C]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x20], 3
        je public_623c7fd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], ebp
        public_623c7fd : nop
        push 0x20
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        cmp eax, ebp
        mov byte ptr ss : [esp+0x20], 4
        je public_623c81d
        mov ecx, eax
        call public_6206ce0
        mov ebp, eax
        public_623c81d : nop
        mov dword ptr ss : [esp+0x28], 0
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x20], 5
        call public_6209fd0
        lea edx, ss:[esp+0x28]
        push edx
        push 0
        call public_6209ad0
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [ebp]
        add esp, 8
        push ecx
        push 0
        push ebp
        call dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x28]
        mov dword ptr ds : [esi+0x6C], ebp
        mov byte ptr ss : [esp+0x20], 3
        call public_6209fd0
        mov ecx, ebx
        call public_620a030
        push ebx
        push 0x3F800000
        call public_6210900
        mov ebx, dword ptr ss : [esp+0x34]
        add esp, 8
        mov dword ptr ds : [edi], offset public_624f450
        mov dword ptr ds : [edi+4], offset public_624f3f8
        mov dword ptr ds : [edi+0x78], 1
        xor ebp, ebp
        jmp public_623c894
        public_623c892 : nop
        xor edi, edi
        public_623c894 : nop
        cmp edi, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        jne public_623c8b0
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], edi
        jmp public_623c9ab
        public_623c8b0 : nop
        mov eax, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        push ebx
        push esi
        call dword ptr ds : [eax]
        mov ebx, eax
        cmp ebx, ebp
        je public_623c9a3
        mov dword ptr ss : [esp+0x2C], esi
        mov eax, dword ptr ds : [esi+0x70]
        mov dword ptr ss : [esp+0x20], 7
        cmp eax, ebp
        je public_623c8e0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], ebp
        public_623c8e0 : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x20], 6
        cmp eax, ebp
        je public_623c8f5
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], ebp
        public_623c8f5 : nop
        lea ecx, ds:[esi+0x68]
        mov dword ptr ss : [esp+0x20], 0xE
        call public_620a0d0
        lea ecx, ds:[esi+0x60]
        mov byte ptr ss : [esp+0x20], 0xD
        call public_620a030
        lea ecx, ds:[esi+0x5C]
        mov byte ptr ss : [esp+0x20], 0xC
        call public_620a030
        lea ecx, ds:[esi+0x58]
        mov byte ptr ss : [esp+0x20], 0xB
        call public_620a030
        lea ecx, ds:[esi+0x54]
        mov byte ptr ss : [esp+0x20], 0xA
        call public_620a030
        mov eax, dword ptr ds : [esi+0x50]
        mov byte ptr ss : [esp+0x20], 9
        cmp eax, ebp
        je public_623c94e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x50], ebp
        public_623c94e : nop
        mov eax, dword ptr ds : [esi+0x4C]
        mov byte ptr ss : [esp+0x20], 8
        cmp eax, ebp
        je public_623c963
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x4C], ebp
        public_623c963 : nop
        lea ecx, ds:[esi+0x28]
        mov dword ptr ss : [esp+0x20], 0xF
        call public_620b300
        lea ecx, ds:[esi+0x24]
        call public_620d1d0
        lea ecx, ds:[esi+4]
        call public_620b300
        push edi
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_623c9a9
        public_623c996 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        jmp public_623c9ab
        public_623c9a3 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax], edi
        public_623c9a9 : nop
        mov eax, ebx
        public_623c9ab : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x623c740)
    }
}

#undef public_623c779
#undef public_623c799
#undef public_623c79d
#undef public_623c7a2
#undef public_623c7fd
#undef public_623c81d
#undef public_623c892
#undef public_623c894
#undef public_623c8b0
#undef public_623c8e0
#undef public_623c8f5
#undef public_623c94e
#undef public_623c963
#undef public_623c996
#undef public_623c9a3
#undef public_623c9a9
#undef public_623c9ab
