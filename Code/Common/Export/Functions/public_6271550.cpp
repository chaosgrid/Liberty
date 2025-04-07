#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271550);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_627158a _public_627158a
#define public_6271592 _public_6271592
#define public_62715a0 _public_62715a0

PROC_DECLARE(0x6271550, internal_6271550, public_6271550);
extern "C" NAKED register_t __cdecl internal_6271550()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_63fbb94
        mov dword ptr ss : [esp+0x14], eax
        xor esi, esi
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fbb98]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_627158a
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_627158a
        lea eax, ss:[esp+4]
        jmp public_6271592
        public_627158a : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_6271592 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_62715a0
        mov eax, dword ptr ds : [eax+0x10]
        pop esi
        add esp, 8
        ret 
        public_62715a0 : nop
        mov eax, esi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6271550)
    }
}

#undef public_627158a
#undef public_6271592
#undef public_62715a0
