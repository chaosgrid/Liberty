#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6334ac0);

#define public_6334c22 _public_6334c22
#define public_6334c26 _public_6334c26
#define public_6334c7e _public_6334c7e
#define public_6334cfc _public_6334cfc
#define public_6334cfe _public_6334cfe

PROC_DECLARE(0x6334ac0, internal_6334ac0, public_6334ac0);
extern "C" NAKED register_t __cdecl internal_6334ac0()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x14]
        push edi
        fsub dword ptr ds : [esi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edi, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [edi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld dword ptr ds : [edi+0xC]
        fld st(1)
        fmul st, st(2)
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld st(2)
        fmul st, st(3)
        fsubp 
        fmul dword ptr ss : [esp+0x30]
        fsubp 
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        fld dword ptr ss : [esp+0x34]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_6334cfc
        fld dword ptr ss : [esp+0x34]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_6334c7e
        fld dword ptr ss : [esp+0x34]
        fsqrt 
        fld dword ptr ss : [esp+0x30]
        fdivr qword ptr ds : [public_6399410]
        fld st(2)
        fchs 
        fsub st, st(2)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fxch 
        fsub st, st(2)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x34]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x41
        je public_6334cfe
        fld dword ptr ss : [esp+0x30]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jnp public_6334cfe
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_6334c22
        fld dword ptr ss : [esp+0x34]
        jmp public_6334c26
        public_6334c22 : nop
        fld dword ptr ss : [esp+0x30]
        public_6334c26 : nop
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x38]
        fmul st, st(1)
        pop edi
        fld dword ptr ss : [esp+8]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        pop esi
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov al, 1
        add esp, 0x24
        ret 
        public_6334c7e : nop
        fdiv dword ptr ss : [esp+0x30]
        fchs 
        fst dword ptr ss : [esp+0x34]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_6334cfe
        fld dword ptr ss : [esp+0x34]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x41
        jp public_6334cfe
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x34]
        pop edi
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x24]
        fxch 
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        pop esi
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+8], eax
        mov al, 1
        add esp, 0x24
        ret 
        public_6334cfc : nop
        fstp st(0)
        public_6334cfe : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6334ac0)
    }
}

#undef public_6334c22
#undef public_6334c26
#undef public_6334c7e
#undef public_6334cfc
#undef public_6334cfe
