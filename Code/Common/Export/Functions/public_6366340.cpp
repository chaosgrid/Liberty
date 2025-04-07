#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366340);

#define public_6366349 _public_6366349
#define public_636636b _public_636636b
#define public_636637b _public_636637b
#define public_63663a8 _public_63663a8
#define public_63663b1 _public_63663b1
#define public_63663b4 _public_63663b4
#define public_63663bd _public_63663bd
#define public_63663d1 _public_63663d1
#define public_63663da _public_63663da
#define public_63663e0 _public_63663e0
#define public_63663ee _public_63663ee

PROC_DECLARE(0x6366340, internal_6366340, public_6366340);
extern "C" NAKED register_t __cdecl internal_6366340()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        dec edx
        push ebx
        push esi
        push edi
        js public_63663b4
        public_6366349 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+4]
        imul esi, edx
        mov edi, dword ptr ds : [ecx+0xC]
        mov ebx, dword ptr ds : [ecx+0x10]
        add esi, eax
        dec eax
        cmp eax, edx
        fld dword ptr ds : [ebx+edx*4]
        lea esi, ds:[edi+esi*4-4]
        jle public_636637b
        lea edi, ds:[ebx+eax*4]
        sub eax, edx
        public_636636b : nop
        fld dword ptr ds : [edi]
        sub esi, 4
        fmul dword ptr ds : [esi+4]
        sub edi, 4
        dec eax
        fsubp 
        jne public_636636b
        public_636637b : nop
        fld dword ptr ds : [esi]
        fld st(0)
        fabs 
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_63663a8
        fstp st(0)
        fabs 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [public_63a58a0]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_63663da
        mov dword ptr ds : [ebx+edx*4], 0
        jmp public_63663b1
        public_63663a8 : nop
        fxch 
        fdiv st, st(1)
        fstp dword ptr ds : [ebx+edx*4]
        fstp st(0)
        public_63663b1 : nop
        dec edx
        jns public_6366349
        public_63663b4 : nop
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        test edx, edx
        jle public_63663d1
        public_63663bd : nop
        mov edx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [edx+eax*4]
        mov esi, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [esi+eax*4], edx
        mov edx, dword ptr ds : [ecx+4]
        inc eax
        cmp eax, edx
        jl public_63663bd
        public_63663d1 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 
        public_63663da : nop
        mov eax, dword ptr ds : [ecx+4]
        dec eax
        js public_63663ee
        public_63663e0 : nop
        dec eax
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [edx+eax*4+4], 0
        jns public_63663e0
        public_63663ee : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6366340)
    }
}

#undef public_6366349
#undef public_636636b
#undef public_636637b
#undef public_63663a8
#undef public_63663b1
#undef public_63663b4
#undef public_63663bd
#undef public_63663d1
#undef public_63663da
#undef public_63663e0
#undef public_63663ee
