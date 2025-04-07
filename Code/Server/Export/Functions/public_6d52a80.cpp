#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a770);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af30);

#define public_6d52ab3 _public_6d52ab3
#define public_6d52abe _public_6d52abe
#define public_6d52ad5 _public_6d52ad5

PROC_DECLARE(0x6d52a80, internal_6d52a80, public_6d52a80);
extern "C" NAKED register_t __cdecl internal_6d52a80()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x44]
        push ebx
        mov ecx, esi
        call public_6d5a770
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], eax
        je public_6d52ab3
        add eax, 0xC
        push eax
        mov ecx, ebx
        call public_6d5af30
        test eax, eax
        jl public_6d52ab3
        lea eax, ss:[esp+0x14]
        jmp public_6d52abe
        public_6d52ab3 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        public_6d52abe : nop
        mov ecx, dword ptr ds : [edi+0x48]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        pop ebx
        je public_6d52ad5
        mov eax, dword ptr ds : [eax+0x1C]
        test eax, eax
        je public_6d52ad5
        mov byte ptr ds : [eax+0x30], 0
        public_6d52ad5 : nop
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d52a80)
    }
}

#undef public_6d52ab3
#undef public_6d52abe
#undef public_6d52ad5
