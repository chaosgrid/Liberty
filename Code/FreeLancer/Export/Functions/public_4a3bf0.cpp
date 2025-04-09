#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3bf0);

#define public_4a3c03 _public_4a3c03
#define public_4a3c1a _public_4a3c1a

PROC_DECLARE(0x4a3bf0, internal_4a3bf0, public_4a3bf0);
extern "C" NAKED register_t __cdecl internal_4a3bf0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_4a3c1a
        push esi
        push edi
        public_4a3c03 : nop
        mov esi, edx
        mov edi, eax
        add edx, 0x14
        mov ecx, 5
        add eax, 0x14
        cmp edx, ebx
        rep movsd
        jne public_4a3c03
        pop edi
        pop esi
        public_4a3c1a : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4a3bf0)
    }
}

#undef public_4a3c03
#undef public_4a3c1a
