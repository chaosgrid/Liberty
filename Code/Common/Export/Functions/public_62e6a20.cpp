#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6a20);

#define public_62e6a44 _public_62e6a44
#define public_62e6a49 _public_62e6a49
#define public_62e6a67 _public_62e6a67
#define public_62e6a6c _public_62e6a6c

PROC_DECLARE(0x62e6a20, internal_62e6a20, public_62e6a20);
extern "C" NAKED register_t __cdecl internal_62e6a20()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e6a44
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 0x41
        jne public_62e6a44
        mov byte ptr ds : [ecx], 1
        jmp public_62e6a49
        public_62e6a44 : nop
        cmp byte ptr ds : [ecx], 0
        je public_62e6a67
        public_62e6a49 : nop
        fld dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx+0xC]
        fst dword ptr ds : [ecx+0xC]
        fcomp dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 0x41
        jne public_62e6a6c
        mov dword ptr ds : [ecx+0xC], 0
        mov byte ptr ds : [ecx], 0
        public_62e6a67 : nop
        xor al, al
        ret 8
        public_62e6a6c : nop
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x62e6a20)
    }
}

#undef public_62e6a44
#undef public_62e6a49
#undef public_62e6a67
#undef public_62e6a6c
