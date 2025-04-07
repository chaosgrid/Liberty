#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f86420);
CLANG_FORWARD_PROC_SYMBOL(public_6f93080);
CLANG_FORWARD_PROC_SYMBOL(public_6f935f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0b8c);

#define public_6f86462 _public_6f86462
#define public_6f864b8 _public_6f864b8
#define public_6f864f6 _public_6f864f6
#define public_6f8651f _public_6f8651f
#define public_6f86542 _public_6f86542
#define public_6f86564 _public_6f86564
#define public_6f86590 _public_6f86590
#define public_6f865b4 _public_6f865b4

PROC_DECLARE(0x6f86420, internal_6f86420, public_6f86420);
extern "C" NAKED register_t __cdecl internal_6f86420()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0b8c @0x6f86422*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0b8c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov eax, dword ptr ds : [edi+0xE8]
        mov ebx, dword ptr ds : [edi+0xE4]
        xor ebp, ebp
        cmp ebx, eax
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6f864b8
        lea esi, ds:[ebx+0xEC]
        public_6f86462 : nop
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f93080
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov ebp, eax
        call public_6f1df30
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_6fa8370
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov ecx, esi
        call public_6f935f0
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        add ebx, 0x108
        add esi, 0x108
        cmp ebx, eax
        jne public_6f86462
        xor ebp, ebp
        public_6f864b8 : nop
        mov eax, dword ptr ds : [edi+0xE4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+0xE4], ebp
        mov dword ptr ds : [edi+0xE8], ebp
        mov dword ptr ds : [edi+0xEC], ebp
        add esp, 4
        mov dword ptr ds : [edi], offset public_6fb60a8
        mov ecx, dword ptr ds : [edi+0x68]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x2C], 4
        je public_6f864f6
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x68], ebp
        public_6f864f6 : nop
        mov eax, dword ptr ds : [edi+0x70]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+0x70], ebp
        mov dword ptr ds : [edi+0x74], ebp
        mov dword ptr ds : [edi+0x78], ebp
        mov ecx, dword ptr ds : [edi+0x68]
        add esp, 4
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x2C], 2
        je public_6f8651f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x68], ebp
        public_6f8651f : nop
        lea esi, ds:[edi+0x58]
        mov dword ptr ss : [esp+0x20], esi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 5
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6f86564
        public_6f86542 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        push ebp
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jne public_6f86542
        public_6f86564 : nop
        mov ecx, esi
        call public_6ecfec0
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 1
        call public_6f15350
        mov esi, dword ptr ds : [edi+0x40]
        mov eax, dword ptr ds : [esi]
        add edi, 0x3C
        cmp eax, esi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_6f865b4
        nop 
        public_6f86590 : nop
        push ebp
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6f86590
        public_6f865b4 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f86420)
    }
}

#undef public_6f86462
#undef public_6f864b8
#undef public_6f864f6
#undef public_6f8651f
#undef public_6f86542
#undef public_6f86564
#undef public_6f86590
#undef public_6f865b4
