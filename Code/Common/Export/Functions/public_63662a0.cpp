#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63660d0);
CLANG_FORWARD_PROC_SYMBOL(public_63661b0);
CLANG_FORWARD_PROC_SYMBOL(public_63662a0);

#define public_63662b3 _public_63662b3
#define public_63662ed _public_63662ed
#define public_636631b _public_636631b
#define public_636631d _public_636631d
#define public_6366327 _public_6366327
#define public_6366329 _public_6366329
#define public_6366332 _public_6366332

PROC_DECLARE(0x63662a0, internal_63662a0, public_63662a0);
extern "C" NAKED register_t __cdecl internal_63662a0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        test eax, eax
        jle public_6366332
        push edi
        public_63662b3 : nop
        push ebx
        mov ecx, esi
        call public_63661b0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        inc eax
        imul eax, ebx
        fld dword ptr ds : [ecx+eax*4]
        fld st(0)
        fabs 
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 1
        jne public_6366327
        fld dword ptr ds : [public_63a5498]
        mov eax, dword ptr ds : [esi+4]
        fdiv st, st(1)
        lea edi, ds:[ebx+1]
        cmp edi, eax
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        jge public_6366329
        public_63662ed : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, edi
        imul edx, dword ptr ds : [esi+8]
        add edx, ebx
        fld dword ptr ds : [eax+edx*4]
        fld st(0)
        fabs 
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 0x41
        jne public_636631b
        fmul dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        push edi
        push ebx
        call public_63660d0
        jmp public_636631d
        public_636631b : nop
        fstp st(0)
        public_636631d : nop
        mov eax, dword ptr ds : [esi+4]
        inc edi
        cmp edi, eax
        jl public_63662ed
        jmp public_6366329
        public_6366327 : nop
        fstp st(0)
        public_6366329 : nop
        mov eax, dword ptr ds : [esi+4]
        inc ebx
        cmp ebx, eax
        jl public_63662b3
        pop edi
        public_6366332 : nop
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x63662a0)
    }
}

#undef public_63662b3
#undef public_63662ed
#undef public_636631b
#undef public_636631d
#undef public_6366327
#undef public_6366329
#undef public_6366332
