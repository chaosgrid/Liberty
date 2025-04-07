#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428f80);

#define public_428f9d _public_428f9d
#define public_428fa8 _public_428fa8
#define public_428fb3 _public_428fb3

PROC_DECLARE(0x428f80, internal_428f80, public_428f80);
extern "C" NAKED register_t __cdecl internal_428f80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x30
        je public_428fb3
        cmp eax, 0x40
        je public_428fa8
        cmp eax, 0x64
        je public_428f9d
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_5c71cc]
        public_428f9d : nop
        mov ecx, offset public_667a34
        jmp dword ptr ds : [public_5c60c0]
        public_428fa8 : nop
        mov ecx, offset public_667a24
        jmp dword ptr ds : [public_5c60c0]
        public_428fb3 : nop
        mov ecx, offset public_667a44
        jmp dword ptr ds : [public_5c60c0]
        UNREACHABLE_TRAP(0x428f80)
    }
}

#undef public_428f9d
#undef public_428fa8
#undef public_428fb3
