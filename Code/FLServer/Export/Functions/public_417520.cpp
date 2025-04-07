#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_417420);
CLANG_FORWARD_PROC_SYMBOL(public_417520);
CLANG_FORWARD_PROC_SYMBOL(public_417ca0);

#define public_417568 _public_417568
#define public_417570 _public_417570
#define public_4175b0 _public_4175b0
#define public_4175b2 _public_4175b2
#define public_4175d0 _public_4175d0

PROC_DECLARE(0x417520, internal_417520, public_417520);
extern "C" NAKED register_t __cdecl internal_417520()
{
    __asm
    {
        push ecx
        push esi
        push edi
        call public_40cdc0
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        call dword ptr ds : [public_41b028]
        mov edi, eax
        mov dword ptr ss : [esp+0x14], esi
        mov esi, dword ptr ds : [public_41bb8c]
        add esp, 4
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_417ca0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_417568
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_417568
        lea eax, ss:[esp+8]
        jmp public_417570
        public_417568 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_417570 : nop
        mov edx, dword ptr ds : [public_41bb8c]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edx+4]
        je public_4175d0
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0xC]
        mov ecx, eax
        shr ecx, 0x10
        test ecx, ecx
        jl public_4175b0
        mov esi, dword ptr ds : [public_429dd0]
        test esi, esi
        je public_4175b0
        mov edx, dword ptr ds : [public_429dd4]
        sub edx, esi
        sar edx, 2
        cmp ecx, edx
        jae public_4175b0
        mov ecx, dword ptr ds : [esi+ecx*4]
        and eax, 0xFFFF
        jmp public_4175b2
        public_4175b0 : nop
        xor ecx, ecx
        public_4175b2 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        push ecx
        call public_417420
        add esp, 0x10
        pop edi
        pop esi
        add esp, 4
        jmp public_40ce70
        public_4175d0 : nop
        mov eax, dword ptr ss : [esp+0x14]
/*FIXUP push offset public_4259d0 @0x4175d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4259d0
        push eax
        call dword ptr ds : [public_41b988]
        add esp, 8
        pop edi
        pop esi
        add esp, 4
        jmp public_40ce70
        UNREACHABLE_TRAP(0x417520)
    }
}

#undef public_417568
#undef public_417570
#undef public_4175b0
#undef public_4175b2
#undef public_4175d0
