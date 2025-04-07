#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6331730);

#define public_6331750 _public_6331750
#define public_63317af _public_63317af
#define public_63317b6 _public_63317b6
#define public_63317cb _public_63317cb
#define public_63317e1 _public_63317e1
#define public_63317f6 _public_63317f6
#define public_6331800 _public_6331800
#define public_6331854 _public_6331854
#define public_633185d _public_633185d

PROC_DECLARE(0x6331730, internal_6331730, public_6331730);
extern "C" NAKED register_t __cdecl internal_6331730()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        push edi
        mov ebp, ecx
        je public_633185d
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        lea ebx, ds:[ebx]
        public_6331750 : nop
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsubr qword ptr ds : [public_6399410]
        fabs 
        fcomp qword ptr ds : [public_63a4950]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_63317f6
        fld dword ptr ds : [edi+0xC]
        fld dword ptr ds : [edi+8]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [edi+4]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [edi]
        faddp 
        fsub dword ptr ds : [esi+0xC]
        fcom 
        fnstsw ax
        test ah, 0x41
        jne public_63317cb
        fstp st(0)
        mov eax, 1
        fstp st(0)
        public_63317af : nop
        mov edx, dword ptr ds : [esi+eax*4+0x10]
        push ebx
        push edi
        push edx
        public_63317b6 : nop
        mov ecx, ebp
        call public_6331730
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        jne public_6331750
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_63317cb : nop
        fxch 
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_63317e1
        mov eax, 2
        jmp public_63317af
        public_63317e1 : nop
        mov eax, dword ptr ds : [esi+0x14]
        push ebx
        push edi
        push eax
        mov ecx, ebp
        call public_6331730
        mov ecx, dword ptr ds : [esi+0x18]
        push ebx
        push edi
        push ecx
        jmp public_63317b6
        public_63317f6 : nop
        xor ebp, ebp
        lea ecx, ds:[esi+0x28]
        nop 
        lea esp, ss:[esp]
        public_6331800 : nop
        mov edx, dword ptr ds : [ecx-0xC]
        test edx, edx
        je public_633185d
        fld dword ptr ds : [ecx-8]
        fsub dword ptr ds : [edi]
        fld dword ptr ds : [ecx-4]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [edi+8]
        fld dword ptr ds : [ecx+4]
        fadd dword ptr ds : [edi+0xC]
        fld st(1)
        fmul st, st(2)
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_6331854
        test edx, edx
        je public_6331854
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, dword ptr ds : [ebx]
        jae public_6331854
        mov dword ptr ds : [ebx+eax*4+8], edx
        inc dword ptr ds : [ebx+4]
        public_6331854 : nop
        inc ebp
        add ecx, 0x14
        cmp ebp, 8
        jb public_6331800
        public_633185d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6331730)
    }
}

#undef public_6331750
#undef public_63317af
#undef public_63317b6
#undef public_63317cb
#undef public_63317e1
#undef public_63317f6
#undef public_6331800
#undef public_6331854
#undef public_633185d
