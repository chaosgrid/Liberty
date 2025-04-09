#include "Freelancer-PCH.h"


#define public_54966d _public_54966d
#define public_5496f0 _public_5496f0
#define public_549756 _public_549756
#define public_54977f _public_54977f
#define public_5497c5 _public_5497c5
#define public_549823 _public_549823

PROC_DECLARE(0x549620, internal_549620, public_549620);
extern "C" NAKED register_t __cdecl internal_549620()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        call dword ptr ds : [eax+0x60]
        test al, al
        jne public_549823
        fld dword ptr ds : [ebx+0x144]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_54966d
        fld dword ptr ds : [ebx+0x144]
        fsub dword ptr ss : [esp+0x24]
        fst dword ptr ds : [ebx+0x144]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_54966d
        mov dword ptr ds : [ebx+0x144], 0
        public_54966d : nop
        fld dword ptr ds : [ebx+0x148]
        push esi
        fsub dword ptr ds : [ebx+0x144]
        push edi
        fcom dword ptr ds : [public_5d55b4]
        fnstsw ax
        test ah, 5
        jp public_54977f
        fsubr dword ptr ds : [public_5d55b4]
        mov esi, dword ptr ds : [public_5c71dc]
        fmul dword ptr ds : [public_5c75e0]
        fld st(0)
        fmul st, st(1)
        fmul qword ptr ds : [public_5d4c88]
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        fchs 
        fst dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x10]
        call esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        lea eax, ds:[ebx+0x128]
        mov ecx, 3
        fmul dword ptr ds : [public_5caeec]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x10]
        fmulp 
        fadd dword ptr ss : [esp+0x10]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x10]
        fsin 
        nop 
        public_5496f0 : nop
        fld dword ptr ds : [eax-0x18]
        add eax, 4
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-4]
        fld st(1)
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fstp dword ptr ds : [eax-0x1C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-4]
        jne public_5496f0
        mov ecx, dword ptr ss : [esp+0x18]
        fstp st(0)
        mov dword ptr ss : [esp+0x10], ecx
        call esi
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        lea eax, ds:[ebx+0x11C]
        mov ecx, 3
        fmul dword ptr ds : [public_5caeec]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x10]
        fmulp 
        fadd dword ptr ss : [esp+0x10]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x10]
        fsin 
        public_549756 : nop
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
        jne public_549756
        public_54977f : nop
        fstp st(0)
        lea esi, ds:[ebx+0x110]
        fld dword ptr ss : [esp+0x2C]
        lea edi, ds:[ebx+4]
        fmul dword ptr ds : [ebx+0x14C]
        mov ecx, 9
        rep movsd
        fsubr dword ptr ds : [ebx+0x140]
        fst dword ptr ds : [ebx+0x140]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        mov dl, 1
        pop edi
        mov byte ptr ds : [ebx+0x34], dl
        pop esi
        jp public_5497c5
        mov dword ptr ds : [ebx+0x140], 0
        public_5497c5 : nop
        fld dword ptr ss : [esp+0x24]
        lea eax, ds:[ebx+0x134]
        fmul dword ptr ds : [ebx+0x140]
        add ebx, 0x28
        fld st(0)
        fmul dword ptr ds : [ebx+0xDC]
        fld st(1)
        fmul dword ptr ds : [ebx+0xE0]
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fmul dword ptr ds : [ebx+0xE4]
        fstp dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ebx+0xC], dl
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        public_549823 : nop
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x549620)
    }
}

#undef public_54966d
#undef public_5496f0
#undef public_549756
#undef public_54977f
#undef public_5497c5
#undef public_549823
