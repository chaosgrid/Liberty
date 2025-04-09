#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_503e20);
CLANG_FORWARD_PROC_SYMBOL(public_51db00);

#define public_51db3c _public_51db3c
#define public_51db67 _public_51db67
#define public_51db8d _public_51db8d
#define public_51db94 _public_51db94
#define public_51dbc3 _public_51dbc3
#define public_51dbc5 _public_51dbc5

PROC_DECLARE(0x51db00, internal_51db00, public_51db00);
extern "C" NAKED register_t __cdecl internal_51db00()
{
    __asm
    {
        fld dword ptr ds : [public_675294]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_51db3c
        fld dword ptr ds : [public_675294]
        fsub dword ptr ds : [public_61373c]
        fst dword ptr ds : [public_675294]
        fcomp dword ptr ds : [public_5db098]
        fnstsw ax
        test ah, 5
        jp public_51db3c
        mov dword ptr ds : [public_675294], 0
        public_51db3c : nop
        mov eax, dword ptr ds : [ecx+0xC0]
        test eax, eax
        je public_51dbc5
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_51dbc5
        test byte ptr ds : [ecx+0x18C], 1
        je public_51db67
        mov dword ptr ds : [public_675294], 0x3CA3D70A
        and byte ptr ds : [ecx+0x18C], 0xFE
        public_51db67 : nop
        test byte ptr ds : [ecx+0x18C], 2
        je public_51db94
        fld dword ptr ds : [public_675294]
        fcomp dword ptr ds : [public_5d3e44]
        fnstsw ax
        test ah, 0x41
        je public_51db8d
        mov dword ptr ds : [public_675294], 0x3BA3D70A
        public_51db8d : nop
        and byte ptr ds : [ecx+0x18C], 0xFD
        public_51db94 : nop
        mov eax, dword ptr ds : [ecx+0x158]
        test eax, eax
        je public_51dbc5
        mov ecx, dword ptr ds : [ecx+0x188]
        test ecx, ecx
        je public_51dbc5
        call public_503e20
        fld dword ptr ds : [public_675294]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_51dbc3
        fstp dword ptr ds : [public_675294]
        ret 
        public_51dbc3 : nop
        fstp st(0)
        public_51dbc5 : nop
        ret 
        UNREACHABLE_TRAP(0x51db00)
    }
}

#undef public_51db3c
#undef public_51db67
#undef public_51db8d
#undef public_51db94
#undef public_51dbc3
#undef public_51dbc5
