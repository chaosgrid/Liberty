#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63310c0);

#define public_6331114 _public_6331114
#define public_6331124 _public_6331124
#define public_6331135 _public_6331135
#define public_633113b _public_633113b

PROC_DECLARE(0x63310c0, internal_63310c0, public_63310c0);
extern "C" NAKED register_t __cdecl internal_63310c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        sub esp, 0x18
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [eax]
        faddp 
        fsub dword ptr ds : [eax+0xC]
        fld dword ptr ds : [ecx+0x14]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fld st(1)
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6331114
        mov eax, dword ptr ss : [esp+0x28]
        fchs 
        mov dword ptr ds : [eax], 1
        jmp public_6331124
        public_6331114 : nop
        mov edx, dword ptr ss : [esp+0x28]
        fxch 
        fchs 
        mov dword ptr ds : [edx], 2
        fxch 
        public_6331124 : nop
        fcom qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 5
        jp public_633113b
        fstp st(0)
        fstp st(0)
        public_6331135 : nop
        xor al, al
        add esp, 0x18
        ret 
        public_633113b : nop
        fxch 
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_6331135
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [ecx+0x18]
        fnstsw ax
        test ah, 0x41
        je public_6331135
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [ecx+0x14]
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fadd dword ptr ds : [ecx]
        fstp dword ptr ss : [esp]
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        mov al, 1
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x63310c0)
    }
}

#undef public_6331114
#undef public_6331124
#undef public_6331135
#undef public_633113b
