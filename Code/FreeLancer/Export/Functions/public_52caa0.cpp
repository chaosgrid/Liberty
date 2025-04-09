#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e990);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);
CLANG_FORWARD_PROC_SYMBOL(public_52caa0);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_536170);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c047e);

#define public_52cae8 _public_52cae8
#define public_52cb73 _public_52cb73
#define public_52cb83 _public_52cb83
#define public_52cb8f _public_52cb8f
#define public_52cb9b _public_52cb9b
#define public_52cba7 _public_52cba7
#define public_52cbe3 _public_52cbe3
#define public_52cbef _public_52cbef
#define public_52cbfe _public_52cbfe
#define public_52cc0e _public_52cc0e
#define public_52cc1d _public_52cc1d
#define public_52cc34 _public_52cc34
#define public_52cc44 _public_52cc44
#define public_52cc53 _public_52cc53
#define public_52cc88 _public_52cc88

PROC_DECLARE(0x52caa0, internal_52caa0, public_52caa0);
extern "C" NAKED register_t __cdecl internal_52caa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c047e @0x52caa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c047e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_5dd4bc
        mov ecx, dword ptr ds : [esi+0x1C]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x44], 2
        je public_52cae8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x1C], ebx
        public_52cae8 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        cmp ecx, ebx
        je public_52cb73
        lea edx, ss:[esp+0xC]
        push edx
        push 0xFFFFFFFF
        push ebx
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        call public_4f7d20
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x28]
        call public_4f7a90
        mov dword ptr ds : [esi+0x28], ebx
        public_52cb73 : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebx
        je public_52cb83
        push eax
        call public_536170
        add esp, 4
        public_52cb83 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        cmp ecx, ebx
        je public_52cb8f
        call public_40e990
        public_52cb8f : nop
        mov ecx, dword ptr ds : [esi+0x18]
        cmp ecx, ebx
        je public_52cb9b
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        public_52cb9b : nop
        mov ecx, dword ptr ds : [esi+0x14]
        cmp ecx, ebx
        je public_52cba7
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_52cba7 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call dword ptr ds : [public_5c68ac]
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp ecx, 0xFFFFFFFF
        je public_52cbe3
        mov edx, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        public_52cbe3 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        cmp ecx, ebx
        je public_52cbef
        call public_40e990
        public_52cbef : nop
        mov ecx, dword ptr ds : [esi+0x38]
        cmp ecx, ebx
        je public_52cbfe
        call public_4f7a90
        mov dword ptr ds : [esi+0x38], ebx
        public_52cbfe : nop
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, ebx
        je public_52cc0e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x34], ebx
        public_52cc0e : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        cmp ecx, ebx
        je public_52cc1d
        call public_537ad0
        mov dword ptr ds : [esi+0x3C], ebx
        public_52cc1d : nop
        mov dword ptr ds : [esi+0x30], ebx
        mov ecx, dword ptr ds : [esi+0x38]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x44], 1
        je public_52cc34
        call public_4f7a90
        mov dword ptr ds : [esi+0x38], ebx
        public_52cc34 : nop
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, ebx
        je public_52cc44
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x34], ebx
        public_52cc44 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        cmp ecx, ebx
        je public_52cc53
        call public_537ad0
        mov dword ptr ds : [esi+0x3C], ebx
        public_52cc53 : nop
        mov dword ptr ds : [esi+0x30], ebx
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, 0xFFFFFFFF
        mov byte ptr ss : [esp+0x44], bl
        je public_52cc88
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        public_52cc88 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call public_531af0
        mov ecx, dword ptr ss : [esp+0x3C]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x52caa0)
    }
}

#undef public_52cae8
#undef public_52cb73
#undef public_52cb83
#undef public_52cb8f
#undef public_52cb9b
#undef public_52cba7
#undef public_52cbe3
#undef public_52cbef
#undef public_52cbfe
#undef public_52cc0e
#undef public_52cc1d
#undef public_52cc34
#undef public_52cc44
#undef public_52cc53
#undef public_52cc88
