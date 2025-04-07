#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805810);
CLANG_FORWARD_PROC_SYMBOL(public_68060b0);

#define public_6805822 _public_6805822
#define public_6805830 _public_6805830
#define public_6805836 _public_6805836

PROC_DECLARE(0x6805810, internal_6805810, public_6805810);
extern "C" NAKED register_t __cdecl internal_6805810()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push esi
        xor esi, esi
        test eax, eax
        jle public_6805836
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, eax
        public_6805822 : nop
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_6805830
        cmp eax, offset public_680d810
        je public_6805830
        inc esi
        public_6805830 : nop
        add ecx, 4
        dec edx
        jne public_6805822
        public_6805836 : nop
        lea eax, ds:[esi+esi+2]
        push eax
        call public_68060b0
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805810)
    }
}

#undef public_6805822
#undef public_6805830
#undef public_6805836
