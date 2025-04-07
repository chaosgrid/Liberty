#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6373f50);

#define public_6373f75 _public_6373f75
#define public_6373f95 _public_6373f95

PROC_DECLARE(0x6373f50, internal_6373f50, public_6373f50);
extern "C" NAKED register_t __cdecl internal_6373f50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jl public_6373f95
        mov eax, dword ptr ds : [public_658b254]
        cmp esi, eax
        jge public_6373f75
        mov eax, dword ptr ds : [public_658b24c]
        mov ecx, dword ptr ds : [public_658b258]
        imul eax, esi
        lea eax, ds:[ecx+eax*8]
        pop esi
        ret 
        public_6373f75 : nop
        mov edx, dword ptr ds : [public_658b8fc]
        push edx
        sub esi, eax
        call public_636ec10
        add esp, 4
        cmp esi, eax
        jge public_6373f95
        mov eax, dword ptr ds : [public_658b8fc]
        mov eax, dword ptr ds : [eax+esi*4+4]
        pop esi
        ret 
        public_6373f95 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6373f50)
    }
}

#undef public_6373f75
#undef public_6373f95
