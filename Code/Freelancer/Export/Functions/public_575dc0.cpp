#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_575dc0);

#define public_575dd7 _public_575dd7
#define public_575de2 _public_575de2
#define public_575ded _public_575ded

PROC_DECLARE(0x575dc0, internal_575dc0, public_575dc0);
extern "C" NAKED register_t __cdecl internal_575dc0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_5c7280]
        push 0x10
        xor esi, esi
        call edi
        test ah, ah
        jns public_575dd7
        mov esi, 1
        public_575dd7 : nop
        push 0x11
        call edi
        test ah, ah
        jns public_575de2
        or esi, 4
        public_575de2 : nop
        push 0x12
        call edi
        test ah, ah
        jns public_575ded
        or esi, 0x10
        public_575ded : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x575dc0)
    }
}

#undef public_575dd7
#undef public_575de2
#undef public_575ded
