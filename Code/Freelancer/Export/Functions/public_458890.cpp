#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_458890);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_4588ca _public_4588ca
#define public_4588d2 _public_4588d2
#define public_4588e6 _public_4588e6

PROC_DECLARE(0x458890, internal_458890, public_458890);
extern "C" NAKED register_t __cdecl internal_458890()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ds : [public_66d320]
        test esi, esi
        je public_4588e6
        mov eax, dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+4], eax
        je public_4588ca
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_4588ca
        lea eax, ss:[esp+4]
        jmp public_4588d2
        public_4588ca : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_4588d2 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        je public_4588e6
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, 0x10
        mov dword ptr ds : [ecx], eax
        mov al, 1
        pop esi
        pop ecx
        ret 
        public_4588e6 : nop
        xor al, al
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x458890)
    }
}

#undef public_4588ca
#undef public_4588d2
#undef public_4588e6
