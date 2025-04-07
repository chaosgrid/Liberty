#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6820);

#define public_6ad6828 _public_6ad6828
#define public_6ad6843 _public_6ad6843
#define public_6ad6852 _public_6ad6852
#define public_6ad68a3 _public_6ad68a3
#define public_6ad68ba _public_6ad68ba
#define public_6ad68c4 _public_6ad68c4
#define public_6ad68c7 _public_6ad68c7
#define public_6ad6908 _public_6ad6908
#define public_6ad6910 _public_6ad6910
#define public_6ad6930 _public_6ad6930

PROC_DECLARE(0x6ad6820, internal_6ad6820, public_6ad6820);
extern "C" NAKED register_t __cdecl internal_6ad6820()
{
    __asm
    {
        fld tbyte ptr ss : [esp+0x10]
        fld tbyte ptr ss : [esp+4]
        public_6ad6828 : nop
        mov eax, dword ptr ss : [esp+8]
        add eax, eax
        jae public_6ad68ba
        xor eax, 0xE000000
        test eax, 0xE000000
        je public_6ad6843
        fdivp 
        ret 
        public_6ad6843 : nop
        shr eax, 0x1C
        cmp byte ptr ds : [eax+public_6ae0090], 0
        jne public_6ad6852
        fdivp 
        ret 
        public_6ad6852 : nop
        mov eax, dword ptr ss : [esp+0xC]
        and eax, 0x7FFF
        je public_6ad68c4
        cmp eax, 0x7FFF
        je public_6ad68c4
        fnstcw word ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        or eax, 0x33F
        and eax, 0xF3FF
        mov dword ptr ss : [esp+0x20], eax
        fldcw word ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        and eax, 0x7FFF
        cmp eax, 1
        je public_6ad68a3
        fmul dword ptr ds : [public_6ae00a0]
        fxch 
        fmul dword ptr ds : [public_6ae00a0]
        fxch 
        fldcw word ptr ss : [esp+0x1C]
        fdivp 
        ret 
        public_6ad68a3 : nop
        fmul dword ptr ds : [public_6ae00a4]
        fxch 
        fmul dword ptr ds : [public_6ae00a4]
        fxch 
        fldcw word ptr ss : [esp+0x1C]
        fdivp 
        ret 
        public_6ad68ba : nop
        mov eax, dword ptr ss : [esp+4]
        or eax, dword ptr ss : [esp+8]
        jne public_6ad68c7
        public_6ad68c4 : nop
        fdivp 
        ret 
        public_6ad68c7 : nop
        mov eax, dword ptr ss : [esp+0xC]
        and eax, 0x7FFF
        jne public_6ad68c4
        fnstcw word ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        or eax, 0x33F
        and eax, 0xF3FF
        mov dword ptr ss : [esp+0x20], eax
        fldcw word ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        and eax, 0x7FFF
        je public_6ad6908
        cmp eax, 0x7FFF
        je public_6ad6930
        mov eax, dword ptr ss : [esp+0x14]
        add eax, eax
        jae public_6ad6930
        jmp public_6ad6910
        public_6ad6908 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add eax, eax
        jb public_6ad6930
        public_6ad6910 : nop
        fxch 
        fstp st(0)
        fld st(0)
        fmul dword ptr ds : [public_6ae00a8]
        fstp tbyte ptr ss : [esp+4]
        fld tbyte ptr ss : [esp+0x10]
        fxch 
        wait 
        fldcw word ptr ss : [esp+0x1C]
        jmp public_6ad6828
        public_6ad6930 : nop
        fldcw word ptr ss : [esp+0x1C]
        fdivp 
        ret 
        UNREACHABLE_TRAP(0x6ad6820)
    }
}

#undef public_6ad6828
#undef public_6ad6843
#undef public_6ad6852
#undef public_6ad68a3
#undef public_6ad68ba
#undef public_6ad68c4
#undef public_6ad68c7
#undef public_6ad6908
#undef public_6ad6910
#undef public_6ad6930
