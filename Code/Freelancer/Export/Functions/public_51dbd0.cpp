#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51db00);
CLANG_FORWARD_PROC_SYMBOL(public_51dbd0);

#define public_51dc40 _public_51dc40
#define public_51dcb3 _public_51dcb3
#define public_51dcde _public_51dcde

PROC_DECLARE(0x51dbd0, internal_51dbd0, public_51dbd0);
extern "C" NAKED register_t __cdecl internal_51dbd0()
{
    __asm
    {
        sub esp, 0xC
        call public_51db00
        fld dword ptr ds : [public_675294]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_51dcde
        fld dword ptr ds : [public_675294]
        mov eax, dword ptr ds : [public_675294]
        push esi
        fchs 
        mov esi, dword ptr ds : [public_5c71dc]
        fstp dword ptr ss : [esp+4]
        push edi
        mov dword ptr ss : [esp+0x10], eax
        call esi
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ds:[edi+0x18]
        mov ecx, 3
        fmul dword ptr ds : [public_5caeec]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+8]
        fmulp 
        fadd dword ptr ss : [esp+8]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+8]
        fsin 
        public_51dc40 : nop
        fld dword ptr ds : [eax-0x18]
        add eax, 4
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-4]
        fld st(1)
        fmul dword ptr ss : [esp+8]
        faddp 
        fstp dword ptr ds : [eax-0x1C]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-4]
        jne public_51dc40
        mov ecx, dword ptr ds : [public_675294]
        fstp st(0)
        fld dword ptr ds : [public_675294]
        mov dword ptr ss : [esp+0xC], ecx
        fchs 
        fstp dword ptr ss : [esp+0x18]
        call esi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+0xC]
        pop edi
        mov ecx, 3
        fmul dword ptr ds : [public_5caeec]
        pop esi
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x10]
        fmulp 
        fadd dword ptr ss : [esp+0x10]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x10]
        fsin 
        public_51dcb3 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec ecx
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_51dcb3
        fstp st(0)
        public_51dcde : nop
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x51dbd0)
    }
}

#undef public_51dc40
#undef public_51dcb3
#undef public_51dcde
