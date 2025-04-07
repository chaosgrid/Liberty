#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad72de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad74e4);

#define public_6ad7509 _public_6ad7509
#define public_6ad7564 _public_6ad7564
#define public_6ad7584 _public_6ad7584
#define public_6ad7592 _public_6ad7592

PROC_DECLARE(0x6ad74e4, internal_6ad74e4, public_6ad74e4);
extern "C" NAKED register_t __cdecl internal_6ad74e4()
{
    __asm
    {
        push edx
        sub esp, 0x30
        fstp tbyte ptr ss : [esp+0x18]
        fstp tbyte ptr ss : [esp]
        mov edx, 0
        mov eax, dword ptr ss : [esp+6]
        test eax, 0x7FFF0000
        je public_6ad7509
        call public_6ad72de
        add esp, 0x30
        pop edx
        ret 
        public_6ad7509 : nop
        fld tbyte ptr ss : [esp]
        fld tbyte ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp]
        or eax, dword ptr ss : [esp+4]
        je public_6ad7592
        fxch 
        fstp tbyte ptr ss : [esp+0xC]
        fld tbyte ptr ss : [esp]
        fxch 
        or edx, 2
        fnstcw word ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        or eax, 0x33F
        mov dword ptr ss : [esp+0x28], eax
        fldcw word ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x20]
        and eax, 0x7FFF
        cmp eax, 0x7FBE
        ja public_6ad7564
        or edx, 1
        fmul qword ptr ds : [public_6ae00c4]
        fstp tbyte ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6ae00c4]
        fstp tbyte ptr ss : [esp]
        jmp public_6ad7584
        public_6ad7564 : nop
        fnstcw word ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        or eax, 0x300
        mov dword ptr ss : [esp+0x28], eax
        fldcw word ptr ss : [esp+0x28]
        fstp st(0)
        fmul qword ptr ds : [public_6ae00c4]
        fstp tbyte ptr ss : [esp]
        public_6ad7584 : nop
        fldcw word ptr ss : [esp+0x24]
        call public_6ad72de
        add esp, 0x30
        pop edx
        ret 
        public_6ad7592 : nop
        fprem 
        add esp, 0x30
        pop edx
        ret 
        UNREACHABLE_TRAP(0x6ad74e4)
    }
}

#undef public_6ad7509
#undef public_6ad7564
#undef public_6ad7584
#undef public_6ad7592
