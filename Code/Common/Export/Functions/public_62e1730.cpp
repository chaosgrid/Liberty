#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1730);

#define public_62e179e _public_62e179e
#define public_62e17b6 _public_62e17b6
#define public_62e1827 _public_62e1827
#define public_62e183d _public_62e183d
#define public_62e186c _public_62e186c
#define public_62e1881 _public_62e1881

PROC_DECLARE(0x62e1730, internal_62e1730, public_62e1730);
extern "C" NAKED register_t __cdecl internal_62e1730()
{
    __asm
    {
        sub esp, 0x18
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, ecx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+4], edx
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], eax
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fsqrt 
        fcom dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e179e
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        jmp public_62e17b6
        public_62e179e : nop
        mov dword ptr ss : [esp], 0
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        public_62e17b6 : nop
        mov edx, dword ptr ss : [esp+0x24]
        fstp st(0)
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], eax
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fcom dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e1827
        fld dword ptr ds : [public_639a1d0]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x14]
        jmp public_62e183d
        public_62e1827 : nop
        fstp st(0)
        mov dword ptr ss : [esp+0x14], 0
        fld dword ptr ds : [public_6399408]
        fld dword ptr ds : [public_6399408]
        public_62e183d : nop
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld st(2)
        fmul dword ptr ss : [esp]
        faddp 
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62e186c
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        jmp public_62e1881
        public_62e186c : nop
        fcom dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e1881
        fstp st(0)
        fld dword ptr ds : [public_6399404]
        public_62e1881 : nop
        fld dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        mov ecx, eax
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fxch 
        fmulp 
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62e1730)
    }
}

#undef public_62e179e
#undef public_62e17b6
#undef public_62e1827
#undef public_62e183d
#undef public_62e186c
#undef public_62e1881
