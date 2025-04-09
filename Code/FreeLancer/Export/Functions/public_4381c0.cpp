#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4381c0);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_4381f4 _public_4381f4
#define public_4381fc _public_4381fc
#define public_43820a _public_43820a
#define public_438216 _public_438216

PROC_DECLARE(0x4381c0, internal_4381c0, public_4381c0);
extern "C" NAKED register_t __cdecl internal_4381c0()
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
        je public_4381f4
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_4381f4
        lea eax, ss:[esp+4]
        jmp public_4381fc
        public_4381f4 : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_4381fc : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_43820a
        add eax, 0x10
        test eax, eax
        jne public_438216
        public_43820a : nop
        fld dword ptr ds : [public_5c7500]
        add esp, 8
        ret 4
        public_438216 : nop
        fld dword ptr ds : [eax+0x18]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x4381c0)
    }
}

#undef public_4381f4
#undef public_4381fc
#undef public_43820a
#undef public_438216
