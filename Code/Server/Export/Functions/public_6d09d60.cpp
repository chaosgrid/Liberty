#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7720);
CLANG_FORWARD_PROC_SYMBOL(public_6d02b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d08e20);
CLANG_FORWARD_PROC_SYMBOL(public_6d09d60);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a060);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a080);
CLANG_FORWARD_PROC_SYMBOL(public_6d1ad30);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6142c);

#define public_6d09eaf _public_6d09eaf
#define public_6d09eb1 _public_6d09eb1
#define public_6d09ee7 _public_6d09ee7
#define public_6d09ee9 _public_6d09ee9
#define public_6d09f09 _public_6d09f09
#define public_6d09f13 _public_6d09f13
#define public_6d09f29 _public_6d09f29
#define public_6d09f2c _public_6d09f2c
#define public_6d09fd9 _public_6d09fd9
#define public_6d0a045 _public_6d0a045

PROC_DECLARE(0x6d09d60, internal_6d09d60, public_6d09d60);
extern "C" NAKED register_t __cdecl internal_6d09d60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6142c @0x6d09d62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6142c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x100
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6d08e20
        xor ebx, ebx
        lea ecx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x78], ebx
        mov dword ptr ss : [esp+0x7C], 0xFFFFFFFF
        call public_6d0a060
        lea ecx, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0xB4], ebx
        call dword ptr ds : [public_6d646b0]
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0xCC]
        mov dword ptr ss : [esp+0x118], ebx
        call dword ptr ds : [public_6d646ac]
        mov esi, dword ptr ds : [public_6d644a8]
        lea ecx, ss:[esp+0xD4]
        mov dword ptr ss : [esp+0x114], 1
        call esi
        lea ecx, ss:[esp+0xDC]
        mov byte ptr ss : [esp+0xD8], bl
        call esi
        lea ecx, ss:[esp+0xE8]
        mov byte ptr ss : [esp+0xE0], bl
        mov byte ptr ss : [esp+0xE1], bl
        mov dword ptr ss : [esp+0xE4], ebx
        call esi
        lea ecx, ss:[esp+0x12]
        push ecx
        lea ecx, ss:[esp+0x104]
        mov dword ptr ss : [esp+0xF0], ebx
        mov dword ptr ss : [esp+0xF4], ebx
        mov dword ptr ss : [esp+0xF8], ebx
        mov dword ptr ss : [esp+0xFC], ebx
        mov dword ptr ss : [esp+0x100], ebx
        call public_6d1ad30
        mov ecx, dword ptr ss : [esp+0x11C]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x120], 2
        call dword ptr ds : [public_6d646a8]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 0xC
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x20], edi
        je public_6d09fd9
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        push 0x90
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x114], 3
        je public_6d09eaf
        mov ecx, eax
        call public_6d02b70
        mov esi, eax
        jmp public_6d09eb1
        public_6d09eaf : nop
        xor esi, esi
        public_6d09eb1 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x118], 2
        call dword ptr ds : [eax+0x164]
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_6d09ee7
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_6d09ee7
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_6d09ee9
        public_6d09ee7 : nop
        xor eax, eax
        public_6d09ee9 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_6d646a4]
        cmp byte ptr ds : [edi+0x68], bl
        je public_6d09f09
        mov eax, dword ptr ds : [edi+0x6C]
        cmp eax, ebx
        je public_6d09f09
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x6C], edx
        jmp public_6d09f13
        public_6d09f09 : nop
        push 0xC
        call public_6d60012
        add esp, 4
        public_6d09f13 : nop
        mov ecx, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+8], esi
        mov ecx, dword ptr ds : [edi+0x64]
        cmp ecx, ebx
        je public_6d09f29
        mov dword ptr ds : [ecx], eax
        jmp public_6d09f2c
        public_6d09f29 : nop
        mov dword ptr ds : [edi+0x60], eax
        public_6d09f2c : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+0x64], eax
        call dword ptr ds : [public_6d6439c]
        mov edx, dword ptr ds : [esi]
        push ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x1BC]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x104]
        mov dword ptr ss : [esp+0x118], 4
        call public_6d5c540
        mov edx, dword ptr ss : [esp+0x104]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x10C]
        call public_6cf7720
        mov edx, dword ptr ss : [esp+0x104]
        push edx
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ss : [esp+0x104], ebx
        mov dword ptr ss : [esp+0x108], ebx
        lea ecx, ss:[esp+0xC8]
        mov dword ptr ss : [esp+0x114], 5
        call dword ptr ds : [public_6d6438c]
        lea ecx, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0x114], 0xFFFFFFFF
        call dword ptr ds : [public_6d64498]
        mov eax, esi
        jmp public_6d0a045
        public_6d09fd9 : nop
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x104]
        mov dword ptr ss : [esp+0x118], 6
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x104]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x10C]
        call public_6cf7720
        mov ecx, dword ptr ss : [esp+0x104]
        push ecx
        call public_6d5ffb0
        add esp, 4
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x104], ebx
        mov dword ptr ss : [esp+0x108], ebx
        mov dword ptr ss : [esp+0x114], 0xFFFFFFFF
        call public_6d0a080
        xor eax, eax
        public_6d0a045 : nop
        mov ecx, dword ptr ss : [esp+0x10C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10C
        ret 4
        UNREACHABLE_TRAP(0x6d09d60)
    }
}

#undef public_6d09eaf
#undef public_6d09eb1
#undef public_6d09ee7
#undef public_6d09ee9
#undef public_6d09f09
#undef public_6d09f13
#undef public_6d09f29
#undef public_6d09f2c
#undef public_6d09fd9
#undef public_6d0a045
