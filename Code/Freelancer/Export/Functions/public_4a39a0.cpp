#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a39a0);

#define public_4a39b3 _public_4a39b3
#define public_4a39c2 _public_4a39c2
#define public_4a39ce _public_4a39ce

PROC_DECLARE(0x4a39a0, internal_4a39a0, public_4a39a0);
extern "C" NAKED register_t __cdecl internal_4a39a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_4a39ce
        push esi
        push edi
        public_4a39b3 : nop
        test eax, eax
        je public_4a39c2
        mov ecx, 0x1F
        mov esi, edx
        mov edi, eax
        rep movsd
        public_4a39c2 : nop
        add edx, 0x7C
        add eax, 0x7C
        cmp edx, ebx
        jne public_4a39b3
        pop edi
        pop esi
        public_4a39ce : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4a39a0)
    }
}

#undef public_4a39b3
#undef public_4a39c2
#undef public_4a39ce
