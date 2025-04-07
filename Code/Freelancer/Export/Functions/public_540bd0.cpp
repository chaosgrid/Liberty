#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540bd0);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);

#define public_540bf9 _public_540bf9
#define public_540c12 _public_540c12
#define public_540c14 _public_540c14
#define public_540c20 _public_540c20

PROC_DECLARE(0x540bd0, internal_540bd0, public_540bd0);
extern "C" NAKED register_t __cdecl internal_540bd0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        push esi
        push eax
        mov dword ptr ss : [esp+8], 3
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_540c20
        push ebx
        mov ebx, dword ptr ds : [public_5c6a84]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_540bf9 : nop
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_540c12
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_540c12
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x67
        cmp dl, 0x67
        je public_540c14
        public_540c12 : nop
        xor ecx, ecx
        public_540c14 : nop
        push edi
        call ebx
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_540bf9
        pop edi
        pop ebx
        public_540c20 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x540bd0)
    }
}

#undef public_540bf9
#undef public_540c12
#undef public_540c14
#undef public_540c20
