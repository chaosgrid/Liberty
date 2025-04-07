#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313680);

#define public_63136a0 _public_63136a0
#define public_63136a4 _public_63136a4
#define public_63136c3 _public_63136c3
#define public_63136c7 _public_63136c7
#define public_63136e6 _public_63136e6
#define public_63136ea _public_63136ea
#define public_6313709 _public_6313709
#define public_631370d _public_631370d
#define public_631372c _public_631372c
#define public_6313730 _public_6313730
#define public_6313740 _public_6313740
#define public_6313759 _public_6313759
#define public_6313766 _public_6313766

PROC_DECLARE(0x6313680, internal_6313680, public_6313680);
extern "C" NAKED register_t __cdecl internal_6313680()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        sub esp, 0x34
        cmp edx, 4
        push esi
        push edi
        jl public_63136a0
        mov eax, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        add edx, 0xFFFFFFFC
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], edx
        jmp public_63136a4
        public_63136a0 : nop
        mov esi, dword ptr ss : [esp+0x40]
        public_63136a4 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, 4
        mov dword ptr ss : [esp+8], esi
        jl public_63136c3
        mov eax, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        add edx, 0xFFFFFFFC
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], edx
        jmp public_63136c7
        public_63136c3 : nop
        mov esi, dword ptr ss : [esp+0x40]
        public_63136c7 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, 4
        mov dword ptr ss : [esp+0xC], esi
        jl public_63136e6
        mov eax, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        add edx, 0xFFFFFFFC
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], edx
        jmp public_63136ea
        public_63136e6 : nop
        mov esi, dword ptr ss : [esp+0x40]
        public_63136ea : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, 4
        mov dword ptr ss : [esp+0x10], esi
        jl public_6313709
        mov eax, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        add edx, 0xFFFFFFFC
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], edx
        jmp public_631370d
        public_6313709 : nop
        mov esi, dword ptr ss : [esp+0x40]
        public_631370d : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, 4
        mov dword ptr ss : [esp+0x14], esi
        jl public_631372c
        mov eax, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        add edx, 0xFFFFFFFC
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], edx
        jmp public_6313730
        public_631372c : nop
        mov esi, dword ptr ss : [esp+0x40]
        public_6313730 : nop
        xor edi, edi
        test esi, esi
        mov dword ptr ss : [esp+0x38], esi
        jle public_6313766
        mov esi, dword ptr ss : [esp+0x40]
        mov edi, edi
        public_6313740 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, 4
        jl public_6313759
        mov eax, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        add edx, 0xFFFFFFFC
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], edx
        public_6313759 : nop
        mov dword ptr ss : [esp+edi*4+0x18], esi
        mov eax, dword ptr ss : [esp+0x38]
        inc edi
        cmp edi, eax
        jl public_6313740
        public_6313766 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, 0xD
        lea esi, ss:[esp+8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x6313680)
    }
}

#undef public_63136a0
#undef public_63136a4
#undef public_63136c3
#undef public_63136c7
#undef public_63136e6
#undef public_63136ea
#undef public_6313709
#undef public_631370d
#undef public_631372c
#undef public_6313730
#undef public_6313740
#undef public_6313759
#undef public_6313766
