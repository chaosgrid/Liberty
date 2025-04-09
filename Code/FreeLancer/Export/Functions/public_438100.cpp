#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438100);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_438134 _public_438134
#define public_43813c _public_43813c
#define public_43814a _public_43814a
#define public_438153 _public_438153

PROC_DECLARE(0x438100, internal_438100, public_438100);
extern "C" NAKED register_t __cdecl internal_438100()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_52c7a0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_438134
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_438134
        lea eax, ss:[esp+4]
        jmp public_43813c
        public_438134 : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_43813c : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_43814a
        add eax, 0x10
        test eax, eax
        jne public_438153
        public_43814a : nop
        or eax, 0xFFFFFFFF
        add esp, 8
        ret 4
        public_438153 : nop
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x438100)
    }
}

#undef public_438134
#undef public_43813c
#undef public_43814a
#undef public_438153
