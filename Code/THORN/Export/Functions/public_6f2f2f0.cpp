#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2f2f0);

#define public_6f2f30d _public_6f2f30d
#define public_6f2f31b _public_6f2f31b

PROC_DECLARE(0x6f2f2f0, internal_6f2f2f0, public_6f2f2f0);
extern "C" NAKED register_t __cdecl internal_6f2f2f0()
{
    __asm
    {
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        fmul st, st(1)
        jne public_6f2f30d
        mov eax, esi
        public_6f2f30d : nop
        mov edx, dword ptr ss : [esp+0x14]
        test edx, edx
        mov ecx, dword ptr ss : [esp+0x10]
        jne public_6f2f31b
        mov edx, ecx
        public_6f2f31b : nop
        fld dword ptr ds : [eax]
        fadd st(0), st
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [public_6f5a304]
        fsubp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [public_6f5a300]
        faddp 
        fsub dword ptr ds : [edx]
        fmulp st(2), st
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [public_6f5a1b4]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [public_6f5a1b4]
        fsubp 
        fadd dword ptr ds : [edx]
        fmul st, st(1)
        faddp st(2), st
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fmul dword ptr ss : [esp+0x18]
        faddp st(2), st
        fld dword ptr ds : [esi]
        pop esi
        fadd st(0), st
        faddp st(2), st
        fxch 
        fmul qword ptr ds : [public_6f5a2f8]
        fstp st(1)
        ret 
        UNREACHABLE_TRAP(0x6f2f2f0)
    }
}

#undef public_6f2f30d
#undef public_6f2f31b
