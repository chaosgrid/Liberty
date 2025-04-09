#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428fc0);

#define public_428fe2 _public_428fe2
#define public_428ff3 _public_428ff3
#define public_429004 _public_429004

PROC_DECLARE(0x428fc0, internal_428fc0, public_428fc0);
extern "C" NAKED register_t __cdecl internal_428fc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x30
        je public_429004
        cmp eax, 0x40
        je public_428ff3
        cmp eax, 0x64
        je public_428fe2
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        ret 
        public_428fe2 : nop
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, offset public_667a34
        call dword ptr ds : [public_5c60c4]
        ret 
        public_428ff3 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        mov ecx, offset public_667a24
        call dword ptr ds : [public_5c60c4]
        ret 
        public_429004 : nop
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, offset public_667a44
        call dword ptr ds : [public_5c60c4]
        ret 
        UNREACHABLE_TRAP(0x428fc0)
    }
}

#undef public_428fe2
#undef public_428ff3
#undef public_429004
