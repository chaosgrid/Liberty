#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a990);
CLANG_FORWARD_PROC_SYMBOL(public_45aa10);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_45a9e7 _public_45a9e7

PROC_DECLARE(0x45a990, internal_45a990, public_45a990);
extern "C" NAKED register_t __cdecl internal_45a990()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_66d33c]
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        push ecx
        lea eax, ss:[esp+0x10]
        push eax
        call public_45aa10
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_66d33c]
        add esp, 0x10
        cmp esi, eax
        je public_45a9e7
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+4]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+4], edx
        lea ecx, ds:[esi+8]
        call public_5154f0
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_66d340]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_66d340], eax
        public_45a9e7 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x45a990)
    }
}

#undef public_45a9e7
