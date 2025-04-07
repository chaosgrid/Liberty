#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f8c0);
CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_40fd60);
CLANG_FORWARD_PROC_SYMBOL(public_41ade0);
CLANG_FORWARD_PROC_SYMBOL(public_41e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_59d5a0);
CLANG_FORWARD_PROC_SYMBOL(public_5a2970);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4e58);

#define public_59d69f _public_59d69f
#define public_59d6b3 _public_59d6b3

PROC_DECLARE(0x59d5a0, internal_59d5a0, public_59d5a0);
extern "C" NAKED register_t __cdecl internal_59d5a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4e58 @0x59d5a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4e58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x58]
        push esi
        xor esi, esi
        dec eax
        dec ecx
        push edi
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        mov ecx, offset public_67dbf8
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], esi
        call public_40fd60
        mov eax, dword ptr ds : [public_5c8920]
        mov ecx, dword ptr ds : [public_5c891c]
        push eax
        push ecx
        mov ecx, offset public_67dbf8
        call public_40fb60
        push 0x41D9BA5E
        mov ecx, offset public_67dbf8
        call public_40f8c0
        call public_41e5c0
        call public_5a2970
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1C], offset public_5c7388
        rep stosd
        or edi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x28], 0x80000000
        mov dword ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x34], 3
        mov dword ptr ss : [esp+0x38], 0x8000080
        mov dword ptr ss : [esp+0x24], offset public_5e5dd0
        mov dword ptr ss : [esp+0x18], 0x34
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x5C], esi
        mov edx, dword ptr ds : [public_5c6dd8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x5C]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        mov dword ptr ss : [esp+0x60], esi
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_59d69f
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x5C]
        push edi
        push 1
        push eax
        push ecx
        call public_41ade0
        add esp, 0x10
        mov dword ptr ds : [public_67dbc8], eax
        public_59d69f : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x54], edi
        pop edi
        cmp eax, esi
        pop esi
        je public_59d6b3
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_59d6b3 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x59d5a0)
    }
}

#undef public_59d69f
#undef public_59d6b3
