#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6383f50);
CLANG_FORWARD_PROC_SYMBOL(public_63864e0);

#define public_6386523 _public_6386523
#define public_6386563 _public_6386563
#define public_6386583 _public_6386583
#define public_63865a3 _public_63865a3

PROC_DECLARE(0x63864e0, internal_63864e0, public_63864e0);
extern "C" NAKED register_t __cdecl internal_63864e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b0a8]
        test eax, eax
        push esi
        push edi
        jne public_6386523
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        jne public_6386523
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        public_6386523 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        push eax
        call public_6383f50
        fld qword ptr ds : [public_658b8b8]
        fld qword ptr ds : [public_658b878]
        add esp, 0xC
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_6386563
        fild dword ptr ds : [public_658b24c]
        fsqrt 
        fmul qword ptr ds : [public_658b878]
        fsubp 
        public_6386563 : nop
        fld st(0)
        fadd qword ptr ds : [edi]
        fstp qword ptr ds : [edi]
        fld qword ptr ds : [esi]
        fsub st, st(1)
        fstp qword ptr ds : [esi]
        mov eax, dword ptr ds : [public_658b0f0]
        test eax, eax
        fstp st(0)
        jne public_6386583
        mov eax, dword ptr ds : [public_658b18c]
        test eax, eax
        je public_63865a3
        public_6386583 : nop
        fld qword ptr ds : [public_658b6a8]
        fmul qword ptr ds : [public_63a5a50]
        fadd qword ptr ds : [edi]
        fstp qword ptr ds : [edi]
        fld qword ptr ds : [public_658b6a8]
        fmul qword ptr ds : [public_63a5a50]
        fsubr qword ptr ds : [esi]
        fstp qword ptr ds : [esi]
        public_63865a3 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63864e0)
    }
}

#undef public_6386523
#undef public_6386563
#undef public_6386583
#undef public_63865a3
