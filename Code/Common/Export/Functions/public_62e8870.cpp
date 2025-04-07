#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8870);

#define public_62e88ac _public_62e88ac
#define public_62e88d5 _public_62e88d5
#define public_62e88fe _public_62e88fe
#define public_62e8901 _public_62e8901

PROC_DECLARE(0x62e8870, internal_62e8870, public_62e8870);
extern "C" NAKED register_t __cdecl internal_62e8870()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xF4]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e8901
        fld dword ptr ds : [ecx+0xF4]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e88ac
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+0xF4]
        fcomp dword ptr ds : [eax+0x17B4]
        fnstsw ax
        test ah, 0x41
        jnp public_62e88fe
        public_62e88ac : nop
        fld dword ptr ds : [ecx+0xF4]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e88d5
        mov edx, dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+0xF4]
        fcomp dword ptr ds : [edx+0x17B8]
        fnstsw ax
        test ah, 0x41
        jnp public_62e88fe
        public_62e88d5 : nop
        fld dword ptr ds : [ecx+0xF4]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e8901
        mov eax, dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+0xF4]
        fcomp dword ptr ds : [eax+0x17BC]
        fnstsw ax
        test ah, 0x41
        jp public_62e8901
        public_62e88fe : nop
        mov al, 1
        ret 
        public_62e8901 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x62e8870)
    }
}

#undef public_62e88ac
#undef public_62e88d5
#undef public_62e88fe
#undef public_62e8901
