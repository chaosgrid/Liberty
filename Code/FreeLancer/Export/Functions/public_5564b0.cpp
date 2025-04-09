#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5564b0);

#define public_556503 _public_556503
#define public_55651e _public_55651e

PROC_DECLARE(0x5564b0, internal_5564b0, public_5564b0);
extern "C" NAKED register_t __cdecl internal_5564b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push ebx
        push esi
        mov esi, 0x3F800000
        mov dword ptr ds : [ecx+0x3C], esi
        mov dword ptr ds : [ecx+0x38], 0xBF800000
        mov dword ptr ds : [ecx+0x1C], esi
        mov dword ptr ds : [ecx+0x20], 0x47C35000
        mov dword ptr ds : [ecx+0x2C], 0x3FAAAAAB
        mov dword ptr ds : [ecx+0x24], esi
        mov dword ptr ds : [ecx+0x28], 0x3F400000
        lea eax, ds:[ecx+4]
        je public_556503
        push ebp
        mov ebp, dword ptr ds : [edx]
        mov ebx, eax
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        pop ebp
        jmp public_55651e
        public_556503 : nop
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [ecx+8], 0
        mov dword ptr ds : [ecx+0xC], 0x27F
        mov dword ptr ds : [ecx+0x10], 0x1DF
        public_55651e : nop
        mov ebx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [ecx+0x10]
        sub edx, ebx
        mov dword ptr ss : [esp+0xC], edx
        fild dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx+8]
        sub eax, edx
        mov dword ptr ss : [esp+0xC], eax
        fmul dword ptr ds : [public_5c75e0]
        fst dword ptr ds : [ecx+0x30]
        fild dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5c75e0]
        fst dword ptr ds : [ecx+0x34]
        fxch 
        fstp dword ptr ds : [ecx+0x38]
        fmul dword ptr ds : [public_5e139c]
        fstp dword ptr ds : [ecx+0x3C]
        fld qword ptr ds : [public_5c89b8]
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+0x40], esi
        mov dword ptr ds : [ecx+0x44], 0
        mov dword ptr ds : [ecx+0x48], esi
        fld dword ptr ds : [ecx+0x48]
        fld dword ptr ds : [ecx+0x44]
        fld dword ptr ds : [ecx+0x40]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [ecx+0x40]
        fstp dword ptr ds : [ecx+0x40]
        fld st(0)
        fmul dword ptr ds : [ecx+0x44]
        fstp dword ptr ds : [ecx+0x44]
        fmul dword ptr ds : [ecx+0x48]
        fstp dword ptr ds : [ecx+0x48]
        fld dword ptr ds : [ecx+0x30]
        fdiv dword ptr ds : [ecx+0x24]
        fstp dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [ecx+0x28]
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [ecx+0x4C], 0
        fstp dword ptr ds : [ecx+0x54]
        mov dword ptr ds : [ecx+0x50], esi
        fld dword ptr ds : [ecx+0x54]
        fld dword ptr ds : [ecx+0x50]
        fld dword ptr ds : [ecx+0x4C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [ecx+0x4C]
        pop esi
        pop ebx
        fstp dword ptr ds : [ecx+0x4C]
        fld st(0)
        fmul dword ptr ds : [ecx+0x50]
        fstp dword ptr ds : [ecx+0x50]
        fmul dword ptr ds : [ecx+0x54]
        fstp dword ptr ds : [ecx+0x54]
        fld dword ptr ds : [ecx+0x34]
        fdiv dword ptr ds : [ecx+0x28]
        fchs 
        fstp dword ptr ds : [ecx+0x3C]
        ret 4
        UNREACHABLE_TRAP(0x5564b0)
    }
}

#undef public_556503
#undef public_55651e
