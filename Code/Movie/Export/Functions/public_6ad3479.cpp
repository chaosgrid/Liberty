#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3330);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3347);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3479);

#define public_6ad34b2 _public_6ad34b2
#define public_6ad34be _public_6ad34be
#define public_6ad34c5 _public_6ad34c5
#define public_6ad34c8 _public_6ad34c8
#define public_6ad34ca _public_6ad34ca
#define public_6ad34f3 _public_6ad34f3

PROC_DECLARE(0x6ad3479, internal_6ad3479, public_6ad3479);
extern "C" NAKED register_t __cdecl internal_6ad3479()
{
    __asm
    {
        sub esp, 8
        fst qword ptr ss : [esp]
        mov eax, dword ptr ss : [esp+4]
        add esp, 8
        and eax, 0x7FF00000
        je public_6ad34ca
        cmp eax, 0x7FF00000
        je public_6ad34f3
        mov ax, word ptr ss : [esp]
        cmp ax, 0x27F
        je public_6ad34c8
        and ax, 0x20
        jne public_6ad34c5
        wait 
        fnstsw ax
        and ax, 0x20
        je public_6ad34c5
        mov eax, 8
        public_6ad34b2 : nop
        cmp edx, 0x1D
        je public_6ad34be
        call public_6ad3347
        pop edx
        ret 
        public_6ad34be : nop
        call public_6ad3330
        pop edx
        ret 
        public_6ad34c5 : nop
        fldcw word ptr ss : [esp]
        public_6ad34c8 : nop
        pop edx
        ret 
        public_6ad34ca : nop
        fld qword ptr ds : [public_6adae7c]
        fxch 
        fscale 
        fstp st(1)
        fld st(0)
        fabs 
        fcomp qword ptr ds : [public_6adae6c]
        wait 
        fnstsw ax
        sahf 
        mov eax, 4
        jae public_6ad34b2
        fmul qword ptr ds : [public_6adae8c]
        jmp public_6ad34b2
        public_6ad34f3 : nop
        fld qword ptr ds : [public_6adae74]
        fxch 
        fscale 
        fstp st(1)
        fld st(0)
        fabs 
        fcomp qword ptr ds : [public_6adae64]
        wait 
        fnstsw ax
        sahf 
        mov eax, 3
        jbe public_6ad34b2
        fmul qword ptr ds : [public_6adae84]
        jmp public_6ad34b2
        UNREACHABLE_TRAP(0x6ad3479)
    }
}

#undef public_6ad34b2
#undef public_6ad34be
#undef public_6ad34c5
#undef public_6ad34c8
#undef public_6ad34ca
#undef public_6ad34f3
