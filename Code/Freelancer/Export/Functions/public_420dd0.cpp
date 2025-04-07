#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41aa50);
CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_420dd0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8b18);

#define public_420e76 _public_420e76
#define public_420e8d _public_420e8d
#define public_420ede _public_420ede
#define public_420f05 _public_420f05
#define public_420f17 _public_420f17

PROC_DECLARE(0x420dd0, internal_420dd0, public_420dd0);
extern "C" NAKED register_t __cdecl internal_420dd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8b18 @0x420dd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8b18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        xor eax, eax
        push edi
        mov esi, ecx
        xor bl, bl
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x18], offset public_5c7388
        mov ecx, 0xB
        lea edi, ss:[esp+0x1C]
        rep stosd
        mov edi, dword ptr ss : [esp+0x58]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [public_5c6dd8]
        mov dword ptr ss : [esp+0x28], 0x80000000
        mov dword ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x34], 3
        mov dword ptr ss : [esp+0x38], 0x8000080
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x18], 0x34
        or ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x48], ebp
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_420f05
        test edi, edi
        je public_420e76
        push ebp
        push 1
        push edi
        call public_41aa50
        add esp, 0xC
        mov dword ptr ds : [esi+8], eax
        public_420e76 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        je public_420e8d
        push ebp
        push 1
        push eax
        call public_41aa50
        add esp, 0xC
        mov dword ptr ds : [esi+0xC], eax
        public_420e8d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push 0
        lea eax, ss:[esp+0x5C]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x64], ebp
        call dword ptr ds : [public_5c6078]
        mov bl, al
        add esp, 0xC
        test bl, bl
        je public_420f05
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        mov edi, dword ptr ss : [esp+0x58]
        je public_420ede
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x60]
        lea eax, ds:[esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        call public_41b030
        lea ecx, ds:[esi+0xC]
        push ecx
        call public_41b030
        add esp, 8
        public_420ede : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edi
        push eax
        call dword ptr ds : [ecx+0x5C]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        public_420f05 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x50], ebp
        je public_420f17
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_420f17 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x420dd0)
    }
}

#undef public_420e76
#undef public_420e8d
#undef public_420ede
#undef public_420f05
#undef public_420f17
