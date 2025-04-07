#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e5ab0);

#define public_62e5abf _public_62e5abf
#define public_62e5ad7 _public_62e5ad7

PROC_DECLARE(0x62e5ab0, internal_62e5ab0, public_62e5ab0);
extern "C" NAKED register_t __cdecl internal_62e5ab0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_62e5abf
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e5abf : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_639e6c8]
        fnstsw ax
        test ah, 5
        jp public_62e5ad7
        fld dword ptr ds : [public_6399408]
        ret 
        public_62e5ad7 : nop
        mov edx, dword ptr ds : [public_63a0760]
        mov eax, dword ptr ds : [ecx]
        push 1
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0
        call dword ptr ds : [eax+0xD0]
        ret 
        UNREACHABLE_TRAP(0x62e5ab0)
    }
}

#undef public_62e5abf
#undef public_62e5ad7
