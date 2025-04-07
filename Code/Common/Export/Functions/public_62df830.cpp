#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df830);

#define public_62df8e5 _public_62df8e5
#define public_62df8eb _public_62df8eb
#define public_62df8fe _public_62df8fe
#define public_62df904 _public_62df904
#define public_62df927 _public_62df927
#define public_62df92d _public_62df92d
#define public_62df933 _public_62df933
#define public_62df935 _public_62df935

PROC_DECLARE(0x62df830, internal_62df830, public_62df830);
extern "C" NAKED register_t __cdecl internal_62df830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+4]
        fsub dword ptr ds : [ecx]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+8]
        fsub dword ptr ds : [ecx+8]
        fld st(0)
        fmul dword ptr ds : [eax+8]
        fld st(2)
        fmul dword ptr ds : [eax+4]
        faddp 
        fld st(3)
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        faddp 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld st(4)
        fmul st, st(5)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fsubp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_62df933
        fsqrt 
        fld dword ptr ss : [esp+0xC]
        fsub st, st(1)
        fstp dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_639c430]
        fld dword ptr ss : [esp+0xC]
        fnstsw ax
        fcomp qword ptr ds : [public_639c430]
        test ah, 5
        fnstsw ax
        jp public_62df8eb
        test ah, 1
        jne public_62df935
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_62df8e5
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        public_62df8e5 : nop
        mov eax, 1
        ret 
        public_62df8eb : nop
        test ah, 5
        jp public_62df904
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_62df8fe
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        public_62df8fe : nop
        mov eax, 1
        ret 
        public_62df904 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        je public_62df92d
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jp public_62df927
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        mov eax, 1
        ret 
        public_62df927 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        public_62df92d : nop
        mov eax, 1
        ret 
        public_62df933 : nop
        fstp st(0)
        public_62df935 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62df830)
    }
}

#undef public_62df8e5
#undef public_62df8eb
#undef public_62df8fe
#undef public_62df904
#undef public_62df927
#undef public_62df92d
#undef public_62df933
#undef public_62df935
