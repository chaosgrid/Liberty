#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_438094 _public_438094
#define public_43809c _public_43809c
#define public_4380aa _public_4380aa
#define public_4380b6 _public_4380b6
#define public_4380de _public_4380de
#define public_4380f3 _public_4380f3

PROC_DECLARE(0x438060, internal_438060, public_438060);
extern "C" NAKED register_t __cdecl internal_438060()
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
        je public_438094
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_438094
        lea eax, ss:[esp+4]
        jmp public_43809c
        public_438094 : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_43809c : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_4380aa
        add eax, 0x10
        test eax, eax
        jne public_4380b6
        public_4380aa : nop
        fld dword ptr ds : [public_5c7474]
        add esp, 8
        ret 4
        public_4380b6 : nop
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+0x20]
        call public_5b7ec0
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        fcom dword ptr ds : [public_5caee8]
        fnstsw ax
        test ah, 0x41
        jne public_4380de
        fstp st(0)
        fld dword ptr ds : [public_5caee8]
        public_4380de : nop
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4380f3
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_4380f3 : nop
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x438060)
    }
}

#undef public_438094
#undef public_43809c
#undef public_4380aa
#undef public_4380b6
#undef public_4380de
#undef public_4380f3
