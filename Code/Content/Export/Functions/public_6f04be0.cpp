#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f04be0);

#define public_6f04bf3 _public_6f04bf3
#define public_6f04c02 _public_6f04c02
#define public_6f04c0e _public_6f04c0e

PROC_DECLARE(0x6f04be0, internal_6f04be0, public_6f04be0);
extern "C" NAKED register_t __cdecl internal_6f04be0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6f04c0e
        push esi
        push edi
        public_6f04bf3 : nop
        test eax, eax
        je public_6f04c02
        mov ecx, 9
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6f04c02 : nop
        add edx, 0x24
        add eax, 0x24
        cmp edx, ebx
        jne public_6f04bf3
        pop edi
        pop esi
        public_6f04c0e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f04be0)
    }
}

#undef public_6f04bf3
#undef public_6f04c02
#undef public_6f04c0e
