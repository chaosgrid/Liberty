#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6212db0);
CLANG_FORWARD_PROC_SYMBOL(public_6212e00);
CLANG_FORWARD_PROC_SYMBOL(public_62144a0);
CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624808a);

#define public_6213e4e _public_6213e4e
#define public_6213e7e _public_6213e7e
#define public_6213e80 _public_6213e80
#define public_6213eb4 _public_6213eb4
#define public_6213eb6 _public_6213eb6
#define public_6213ee9 _public_6213ee9
#define public_6213ef9 _public_6213ef9
#define public_6213f29 _public_6213f29
#define public_6213f2b _public_6213f2b
#define public_6213f56 _public_6213f56
#define public_6213f58 _public_6213f58

PROC_DECLARE(0x6213e00, internal_6213e00, public_6213e00);
extern "C" NAKED register_t __cdecl internal_6213e00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624808a @0x6213e02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624808a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        call public_623f7b0
        xor ebx, ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ds : [edi+0x4C], ebx
        mov dword ptr ds : [edi+0x50], ebx
        mov dword ptr ds : [edi], offset public_624c7d8
        mov eax, dword ptr ds : [edi+0x4C]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 2
        je public_6213e4e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x4C], ebx
        public_6213e4e : nop
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebp
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x24], 3
        je public_6213e7e
        mov ecx, ebp
        call public_6212db0
        mov dword ptr ss : [ebp], offset public_624bac8
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_6213e80
        public_6213e7e : nop
        xor ebp, ebp
        public_6213e80 : nop
        mov dword ptr ss : [esp+0x10], ebx
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x24], 4
        call public_6209fd0
        push 0x10
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 5
        je public_6213eb4
        mov ecx, eax
        call public_62144a0
        mov esi, eax
        jmp public_6213eb6
        public_6213eb4 : nop
        xor esi, esi
        public_6213eb6 : nop
        mov edx, dword ptr ds : [esi]
        push 0x3F800000
        push esi
        mov byte ptr ss : [esp+0x2C], 4
        call dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ss : [ebp]
        push esi
        push ebx
        push ebp
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x4C], ebp
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 2
        je public_6213ee9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6213ee9 : nop
        mov eax, dword ptr ds : [edi+0x50]
        cmp eax, ebx
        je public_6213ef9
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x50], ebx
        public_6213ef9 : nop
        push 0x20
        call public_624612c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebp
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x24], 6
        je public_6213f29
        mov ecx, ebp
        call public_6212e00
        mov dword ptr ss : [ebp], offset public_624bac8
        mov dword ptr ss : [ebp+0x1C], 1
        jmp public_6213f2b
        public_6213f29 : nop
        xor ebp, ebp
        public_6213f2b : nop
        mov dword ptr ss : [esp+0x10], ebx
        push 0x10
        mov byte ptr ss : [esp+0x28], 7
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x24], 8
        je public_6213f56
        mov ecx, eax
        call public_62144a0
        mov esi, eax
        jmp public_6213f58
        public_6213f56 : nop
        xor esi, esi
        public_6213f58 : nop
        mov eax, dword ptr ds : [esi]
        push 0x3F800000
        push esi
        mov byte ptr ss : [esp+0x2C], 7
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [edi+0x50], ebp
        mov edx, dword ptr ds : [esi]
        push esi
        mov byte ptr ss : [esp+0x28], 2
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6213e00)
    }
}

#undef public_6213e4e
#undef public_6213e7e
#undef public_6213e80
#undef public_6213eb4
#undef public_6213eb6
#undef public_6213ee9
#undef public_6213ef9
#undef public_6213f29
#undef public_6213f2b
#undef public_6213f56
#undef public_6213f58
