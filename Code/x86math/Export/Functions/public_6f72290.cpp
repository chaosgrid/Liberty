#include "x86math-PCH.h"


#define public_6f722ef _public_6f722ef
#define public_6f72306 _public_6f72306
#define public_6f7231f _public_6f7231f

PROC_DECLARE(0x6f72290, internal_6f72290, public_6f72290);
extern "C" NAKED register_t __cdecl internal_6f72290()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x10]
        fadd dword ptr ds : [ecx]
        fadd dword ptr ds : [ecx+0x20]
        fcom dword ptr ds : [public_6f730fc]
        fnstsw ax
        and eax, 0x4100
        jne public_6f722ef
        fadd dword ptr ds : [public_6f730f8]
        mov eax, dword ptr ss : [esp+8]
        fsqrt 
        fld dword ptr ds : [public_6f73100]
        fmul st, st(1)
        fstp dword ptr ds : [eax]
        fdivr dword ptr ds : [public_6f73100]
        fld dword ptr ds : [ecx+0x1C]
        fsub dword ptr ds : [ecx+0x14]
        fmul st, st(1)
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [ecx+0x18]
        fmul st, st(1)
        fstp dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+0xC]
        fsub dword ptr ds : [ecx+4]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0xC]
        xor eax, eax
        fstp st(0)
        ret 0xC
        public_6f722ef : nop
        fstp st(0)
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [ecx]
        xor edx, edx
        fnstsw ax
        and eax, 0x4100
        jne public_6f72306
        mov edx, 1
        public_6f72306 : nop
        fld dword ptr ds : [ecx+0x20]
        mov eax, edx
        shl eax, 4
        fcomp dword ptr ds : [eax+ecx]
        fnstsw ax
        and eax, 0x4100
        jne public_6f7231f
        mov edx, 2
        public_6f7231f : nop
        mov eax, dword ptr ds : [edx*4+public_6f73068]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax*4+public_6f73068]
        mov ebp, eax
        mov ebx, esi
        push edi
        shl ebx, 4
        shl ebp, 4
        fld dword ptr ds : [ebx+ecx]
        fadd dword ptr ds : [ecx+ebp]
        mov edi, edx
        lea ebx, ds:[esi+esi*2]
        shl edi, 4
        fsubr dword ptr ds : [edi+ecx]
        mov edi, dword ptr ss : [esp+0x18]
        lea ebp, ds:[eax+eax*2]
        add ebx, eax
        add ebp, esi
        fadd dword ptr ds : [public_6f730f8]
        fsqrt 
        fld dword ptr ds : [public_6f73100]
        fmul st, st(1)
        fstp dword ptr ds : [edi+edx*4+4]
        fdivr dword ptr ds : [public_6f73100]
        fld dword ptr ds : [ecx+ebx*4]
        fsub dword ptr ds : [ecx+ebp*4]
        lea ebx, ds:[edx+edx*2]
        fmul st, st(1)
        lea ebp, ds:[ebx+eax]
        lea ebx, ds:[eax+eax*2]
        add ebx, edx
        fstp dword ptr ds : [edi]
        fld dword ptr ds : [ecx+ebp*4]
        fadd dword ptr ds : [ecx+ebx*4]
        fmul st, st(1)
        fstp dword ptr ds : [edi+eax*4+4]
        lea eax, ds:[edx+edx*2]
        lea ebx, ds:[eax+esi]
        lea eax, ds:[esi+esi*2]
        add eax, edx
        fld dword ptr ds : [ecx+ebx*4]
        fadd dword ptr ds : [ecx+eax*4]
        xor eax, eax
        fmul st, st(1)
        fstp dword ptr ds : [edi+esi*4+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        fstp st(0)
        ret 0xC
        UNREACHABLE_TRAP(0x6f72290)
    }
}

#undef public_6f722ef
#undef public_6f72306
#undef public_6f7231f
