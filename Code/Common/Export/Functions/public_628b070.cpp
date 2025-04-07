#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b070);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_628b086 _public_628b086

PROC_DECLARE(0x628b070, internal_628b070, public_628b070);
extern "C" NAKED register_t __cdecl internal_628b070()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc0b8]
        test eax, eax
        push esi
        mov esi, ecx
        jne public_628b086
        call public_6391cf0
        mov dword ptr ds : [public_63fc0b8], eax
        public_628b086 : nop
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x628b070)
    }
}

#undef public_628b086
