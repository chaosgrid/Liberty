#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428f80);
CLANG_FORWARD_PROC_SYMBOL(public_429040);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_532530);
CLANG_FORWARD_PROC_SYMBOL(public_536100);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0788);

#define public_5325c0 _public_5325c0
#define public_5325dc _public_5325dc
#define public_5325de _public_5325de
#define public_5325fe _public_5325fe
#define public_532600 _public_532600
#define public_53266c _public_53266c
#define public_53266e _public_53266e
#define public_532702 _public_532702

PROC_DECLARE(0x532530, internal_532530, public_532530);
extern "C" NAKED register_t __cdecl internal_532530()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0788 @0x532532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0788
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        mov eax, dword ptr ss : [esp+0x48]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x54]
        xor ebx, ebx
        push esi
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi], offset public_5de13c
        call dword ptr ds : [public_5c6934]
        push edi
        call dword ptr ds : [public_5c6570]
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        je public_5325c0
        mov ecx, edi
        call dword ptr ds : [public_5c6930]
        mov ecx, eax
        add ecx, 0x70
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_5325c0
        mov ecx, edi
        call dword ptr ds : [public_5c6930]
        add eax, 0x70
        push eax
        call dword ptr ds : [public_5c63c8]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+0xC], eax
        je public_5325c0
        push eax
        call public_536100
        add esp, 4
        public_5325c0 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi], offset public_5de17c
        je public_5325dc
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+4]
        jmp public_5325de
        public_5325dc : nop
        xor eax, eax
        public_5325de : nop
        lea ecx, ds:[eax+0x54]
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_532702
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_5325fe
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [edx+4]
        jmp public_532600
        public_5325fe : nop
        xor eax, eax
        public_532600 : nop
        add eax, 0x54
        push eax
        call public_42ae40
        mov ebp, eax
        add esp, 4
        cmp ebp, ebx
        je public_532702
        push 0x64
        call public_428f80
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        je public_53266c
        push 1
        mov ecx, edi
        call public_429040
        mov dword ptr ds : [edi+0x30], ebx
        mov dword ptr ds : [edi+0x34], ebx
        mov dword ptr ds : [edi+0x38], ebx
        mov dword ptr ds : [edi+0x3C], ebx
        mov dword ptr ds : [edi+0x40], ebx
        mov dword ptr ds : [edi+0x44], 0x3F800000
        mov dword ptr ds : [edi+0x48], ebx
        mov dword ptr ds : [edi+0x4C], ebx
        mov dword ptr ds : [edi+0x50], ebx
        mov dword ptr ds : [edi+0x54], ebx
        mov dword ptr ds : [edi+0x58], 0x43B40000
        mov dword ptr ds : [edi+0x5C], ebx
        mov dword ptr ds : [edi+0x60], 0xFFFFFFFF
        mov dword ptr ds : [edi], offset public_5c9efc
        mov ecx, edi
        jmp public_53266e
        public_53266c : nop
        xor ecx, ecx
        public_53266e : nop
        mov dword ptr ds : [esi+0x10], ecx
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x88]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov edi, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x10]
        push eax
        call dword ptr ds : [edi+0x94]
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebp
        call dword ptr ds : [edx+0x58]
        public_532702 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x532530)
    }
}

#undef public_5325c0
#undef public_5325dc
#undef public_5325de
#undef public_5325fe
#undef public_532600
#undef public_53266c
#undef public_53266e
#undef public_532702
