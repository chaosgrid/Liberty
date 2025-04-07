#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf98ef _public_6cf98ef
#define public_6cf98f8 _public_6cf98f8
#define public_6cf98fa _public_6cf98fa

PROC_DECLARE(0x6cf9880, internal_6cf9880, public_6cf9880);
extern "C" NAKED register_t __cdecl internal_6cf9880()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], 0
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        push edi
        mov eax, 0xFFFFFFFC
        je public_6cf98fa
        push ecx
        mov edi, 0xFFFFFFFE
        call public_6d00670
        mov ecx, eax
        add esp, 4
        test ecx, ecx
        je public_6cf98f8
        add ecx, 0xC
        xor eax, eax
        test ecx, ecx
        je public_6cf98ef
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6cf98ef
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_6cf98ef
        mov edx, dword ptr ds : [ecx+0x164]
        test edx, 0x3FFFFFFF
        mov dword ptr ds : [esi], edx
        jne public_6cf98fa
        mov ecx, dword ptr ds : [ecx+0x160]
        pop edi
        mov dword ptr ds : [esi], ecx
        pop esi
        ret 
        public_6cf98ef : nop
        pop edi
        mov dword ptr ds : [esi], 0
        pop esi
        ret 
        public_6cf98f8 : nop
        mov eax, edi
        public_6cf98fa : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf9880)
    }
}

#undef public_6cf98ef
#undef public_6cf98f8
#undef public_6cf98fa
