#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3fa0);

#define public_6ec3fb3 _public_6ec3fb3
#define public_6ec3fc2 _public_6ec3fc2
#define public_6ec3fce _public_6ec3fce

PROC_DECLARE(0x6ec3fa0, internal_6ec3fa0, public_6ec3fa0);
extern "C" NAKED register_t __cdecl internal_6ec3fa0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6ec3fce
        push esi
        push edi
        public_6ec3fb3 : nop
        test eax, eax
        je public_6ec3fc2
        mov ecx, 5
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6ec3fc2 : nop
        add edx, 0x14
        add eax, 0x14
        cmp edx, ebx
        jne public_6ec3fb3
        pop edi
        pop esi
        public_6ec3fce : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec3fa0)
    }
}

#undef public_6ec3fb3
#undef public_6ec3fc2
#undef public_6ec3fce
