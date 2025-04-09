#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f79f0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcea0);
CLANG_FORWARD_PROC_SYMBOL(public_512be0);
CLANG_FORWARD_PROC_SYMBOL(public_52fa10);
CLANG_FORWARD_PROC_SYMBOL(public_537ac0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0600);

#define public_52fa68 _public_52fa68
#define public_52fa6a _public_52fa6a
#define public_52faa7 _public_52faa7
#define public_52fab4 _public_52fab4
#define public_52fae1 _public_52fae1
#define public_52faf3 _public_52faf3
#define public_52fb00 _public_52fb00
#define public_52fb1b _public_52fb1b
#define public_52fb32 _public_52fb32
#define public_52fb42 _public_52fb42
#define public_52fb51 _public_52fb51
#define public_52fb62 _public_52fb62
#define public_52fb7b _public_52fb7b

PROC_DECLARE(0x52fa10, internal_52fa10, public_52fa10);
extern "C" NAKED register_t __cdecl internal_52fa10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0600 @0x52fa18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0600
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push esi
        push edi
        push 0x84
        mov edi, ecx
        call public_4f79a0
        mov esi, eax
        xor ebx, ebx
        add esp, 4
        cmp esi, ebx
        je public_52fa68
        push 0x2D
        mov ecx, esi
        call public_4f79f0
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x80], ebx
        mov dword ptr ds : [esi], offset public_5ddcec
        jmp public_52fa6a
        public_52fa68 : nop
        xor esi, esi
        public_52fa6a : nop
        push edi
        mov ecx, esi
        call public_512be0
        cmp al, bl
        mov byte ptr ss : [esp+0xF], al
        je public_52fb7b
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], ebx
        je public_52fab4
        mov ecx, esi
        call public_4f7a80
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_52faa7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_52faa7 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, ebx
        je public_52fab4
        call public_537ac0
        public_52fab4 : nop
        mov ecx, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x10]
        push edx
        add ecx, 0x28
        mov dword ptr ss : [esp+0x2C], ebx
        call public_4fcea0
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_52fae1
        call public_4f7a90
        mov dword ptr ss : [esp+0x18], ebx
        public_52fae1 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_52faf3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], ebx
        public_52faf3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, ebx
        je public_52fb00
        call public_537ad0
        public_52fb00 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], ebx
        je public_52fb1b
        mov ecx, esi
        call public_4f7a80
        public_52fb1b : nop
        mov ecx, dword ptr ds : [edi+0x18]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x28], 1
        je public_52fb32
        call public_4f7a90
        mov dword ptr ds : [edi+0x18], ebx
        public_52fb32 : nop
        mov eax, dword ptr ds : [edi+0x14]
        cmp eax, ebx
        je public_52fb42
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x14], ebx
        public_52fb42 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        cmp ecx, ebx
        je public_52fb51
        call public_537ad0
        mov dword ptr ds : [edi+0x1C], ebx
        public_52fb51 : nop
        cmp esi, ebx
        mov dword ptr ds : [edi+0x10], ebx
        mov dword ptr ds : [edi+0x18], esi
        je public_52fb62
        mov ecx, esi
        call public_4f7a80
        public_52fb62 : nop
        cmp esi, ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_52fb7b
        mov ecx, esi
        call public_4f7a90
        public_52fb7b : nop
        mov ecx, esi
        call public_4f7a90
        mov ecx, dword ptr ss : [esp+0x20]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x52fa10)
    }
}

#undef public_52fa68
#undef public_52fa6a
#undef public_52faa7
#undef public_52fab4
#undef public_52fae1
#undef public_52faf3
#undef public_52fb00
#undef public_52fb1b
#undef public_52fb32
#undef public_52fb42
#undef public_52fb51
#undef public_52fb62
#undef public_52fb7b
