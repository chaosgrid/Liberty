#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437d90);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_437dbb _public_437dbb
#define public_437dc3 _public_437dc3
#define public_437dd2 _public_437dd2

PROC_DECLARE(0x437d90, internal_437d90, public_437d90);
extern "C" NAKED register_t __cdecl internal_437d90()
{
    __asm
    {
        push ecx
        push esi
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        mov esi, ecx
        xor edi, edi
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_437dbb
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_437dbb
        lea eax, ss:[esp+8]
        jmp public_437dc3
        public_437dbb : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_437dc3 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        je public_437dd2
        pop edi
        add eax, 0x10
        pop esi
        pop ecx
        ret 4
        public_437dd2 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x437d90)
    }
}

#undef public_437dbb
#undef public_437dc3
#undef public_437dd2
