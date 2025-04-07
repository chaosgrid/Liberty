#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_521fa0);

#define public_521fb7 _public_521fb7
#define public_521fbd _public_521fbd
#define public_521fd4 _public_521fd4
#define public_521fda _public_521fda
#define public_521ff4 _public_521ff4

PROC_DECLARE(0x521fa0, internal_521fa0, public_521fa0);
extern "C" NAKED register_t __cdecl internal_521fa0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_521fb7
        fld dword ptr ds : [ecx]
        jmp public_521fbd
        public_521fb7 : nop
        fld dword ptr ds : [public_5c75dc]
        public_521fbd : nop
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_521fd4
        fld dword ptr ds : [ecx+4]
        jmp public_521fda
        public_521fd4 : nop
        fld dword ptr ds : [public_5c75dc]
        public_521fda : nop
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_521ff4
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx+8], eax
        ret 
        public_521ff4 : nop
        mov dword ptr ds : [ecx+8], 0x3F800000
        ret 
        UNREACHABLE_TRAP(0x521fa0)
    }
}

#undef public_521fb7
#undef public_521fbd
#undef public_521fd4
#undef public_521fda
#undef public_521ff4
