#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50d930);

#define public_50d952 _public_50d952
#define public_50d9c4 _public_50d9c4

PROC_DECLARE(0x50d930, internal_50d930, public_50d930);
extern "C" NAKED register_t __cdecl internal_50d930()
{
    __asm
    {
        push ecx
        mov eax, 0x3F000000
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [ecx+4], 0
        mov edx, 1
        lea eax, ds:[ecx+0x20]
        push esi
        public_50d952 : nop
        lea esi, ds:[edx-1]
        mov dword ptr ss : [esp+4], esi
        fild dword ptr ss : [esp+4]
        inc edx
        add eax, 0x18
        cmp edx, 0xD
        fmul qword ptr ds : [public_5db5e8]
        fld st(0)
        fcos 
        fxch 
        fsin 
        fstp dword ptr ss : [esp+4]
        fst dword ptr ds : [eax-0x20]
        fld dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ds : [eax-0x1C]
        fadd qword ptr ds : [public_5c89b8]
        fmul qword ptr ds : [public_5c75e8]
        fstp dword ptr ds : [eax-0x18]
        fld dword ptr ss : [esp+4]
        fmul qword ptr ds : [public_5c75e8]
        fsubr qword ptr ds : [public_5c75e8]
        fstp dword ptr ds : [eax-0x14]
        jl public_50d952
        fld dword ptr ds : [ecx+0x2F0]
        lea eax, ds:[ecx+0x138]
        fsubr qword ptr ds : [public_5c89b8]
        mov edx, 0xC
        fld dword ptr ds : [ecx+0x2F0]
        pop esi
        public_50d9c4 : nop
        fld st(0)
        add eax, 0x18
        dec edx
        fmul dword ptr ds : [eax-0x138]
        fld st(2)
        fmul dword ptr ds : [ecx]
        faddp 
        fstp dword ptr ds : [eax-0x18]
        fld st(0)
        fmul dword ptr ds : [eax-0x134]
        fld st(2)
        fmul dword ptr ds : [ecx+4]
        faddp 
        fstp dword ptr ds : [eax-0x14]
        fld st(0)
        fmul dword ptr ds : [eax-0x130]
        fld st(2)
        fmul dword ptr ds : [ecx+8]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld st(0)
        fmul dword ptr ds : [eax-0x12C]
        fld st(2)
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_50d9c4
        fstp st(0)
        mov eax, 1
        fstp st(0)
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x50d930)
    }
}

#undef public_50d952
#undef public_50d9c4
