#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b2300);

#define public_62c022c _public_62c022c
#define public_62c023c _public_62c023c

PROC_DECLARE(0x62c0200, internal_62c0200, public_62c0200);
extern "C" NAKED register_t __cdecl internal_62c0200()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx+0x4C]
        cmp edx, 0xA7
        mov eax, 0xFFFFFFFD
        je public_62c022c
        cmp edx, 0x503
        jne public_62c023c
        call public_62b2300
        mov ecx, dword ptr ss : [esp+4]
        mov word ptr ds : [ecx], ax
        xor eax, eax
        ret 4
        public_62c022c : nop
        mov eax, dword ptr ss : [esp+4]
        mov dx, word ptr ds : [ecx+0xF8]
        mov word ptr ds : [eax], dx
        xor eax, eax
        public_62c023c : nop
        ret 4
        UNREACHABLE_TRAP(0x62c0200)
    }
}

#undef public_62c022c
#undef public_62c023c
