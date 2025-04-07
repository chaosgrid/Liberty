#include "Common-PCH.h"


#define public_63314e2 _public_63314e2
#define public_63314e5 _public_63314e5
#define public_633151b _public_633151b
#define public_6331522 _public_6331522

PROC_DECLARE(0x63314c0, internal_63314c0, public_63314c0);
extern "C" NAKED register_t __cdecl internal_63314c0()
{
    __asm
    {
        sub esp, 0x2C
        mov edx, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [edx+0x30]
        mov eax, dword ptr ds : [edx+0x38]
        fld dword ptr ds : [edx+0x34]
        fcompp 
        mov dword ptr ss : [esp+0x30], eax
        fnstsw ax
        test ah, 5
        jp public_63314e2
        fld dword ptr ds : [edx+0x30]
        jmp public_63314e5
        public_63314e2 : nop
        fld dword ptr ds : [edx+0x34]
        public_63314e5 : nop
        fmul qword ptr ds : [public_639df88]
        fptan 
        fstp st(0)
        fmul dword ptr ds : [edx+0x38]
        fld dword ptr ss : [esp+0x30]
        fcomp 
        fnstsw ax
        test ah, 1
        jne public_633151b
        fld st(0)
        fmulp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fadd st(0), st
        fdivp 
        fst dword ptr ss : [esp+0x28]
        jmp public_6331522
        public_633151b : nop
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [edx+0x38]
        public_6331522 : nop
        fld dword ptr ds : [edx+8]
        push esi
        fld dword ptr ds : [edx+0x14]
        fld dword ptr ds : [edx+0x20]
        fstp dword ptr ss : [esp+0xC]
        fxch 
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x10]
        fld st(1)
        fmul st, st(1)
        fxch 
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edx+0x24]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+4]
        fsub st, st(1)
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [edx+0x2C]
        mov edx, dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        fstp dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x20], esi
        call dword ptr ds : [eax+0x1C]
        pop esi
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x63314c0)
    }
}

#undef public_63314e2
#undef public_63314e5
#undef public_633151b
#undef public_6331522
