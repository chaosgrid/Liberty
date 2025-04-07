#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf91b3 _public_6cf91b3
#define public_6cf921a _public_6cf921a
#define public_6cf9225 _public_6cf9225
#define public_6cf922a _public_6cf922a

PROC_DECLARE(0x6cf91a0, internal_6cf91a0, public_6cf91a0);
extern "C" NAKED register_t __cdecl internal_6cf91a0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [esi], 0
        jne public_6cf91b3
        mov eax, 0xFFFFFFFC
        pop esi
        pop ecx
        ret 
        public_6cf91b3 : nop
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        push esi
        mov edi, 0xFFFFFFFC
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf9225
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6cf9225
        mov edx, dword ptr ds : [esi]
        push edx
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf921a
        add eax, 0xC
        test eax, eax
        je public_6cf922a
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cf922a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6cf922a
        mov edx, dword ptr ds : [eax+0x13C]
        mov eax, dword ptr ss : [esp+0x14]
        xor edi, edi
        mov dword ptr ds : [eax], edx
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 
        public_6cf921a : nop
        mov edi, 0xFFFFFFFD
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 
        public_6cf9225 : nop
        mov edi, 0xFFFFFFFE
        public_6cf922a : nop
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6cf91a0)
    }
}

#undef public_6cf91b3
#undef public_6cf921a
#undef public_6cf9225
#undef public_6cf922a
