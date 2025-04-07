#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24190);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e90);

#define public_6f24208 _public_6f24208
#define public_6f2420c _public_6f2420c

PROC_DECLARE(0x6f24190, internal_6f24190, public_6f24190);
extern "C" NAKED register_t __cdecl internal_6f24190()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi]
        fabs 
        fcomp qword ptr ds : [public_6f5a1c0]
        fnstsw ax
        test ah, 5
        jp public_6f2420c
        fld dword ptr ds : [esi]
        call public_6f57e90
        fld st(0)
        fsin 
        fcom dword ptr ds : [public_6f5a1ac]
        fnstsw ax
        test ah, 1
        jne public_6f24208
        mov eax, dword ptr ss : [esp+0x14]
        fxch 
        fdiv st, st(1)
        lea ecx, ds:[eax+4]
        fxch 
        fstp st(0)
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+4]
        fld st(0)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0xC
        ret 4
        public_6f24208 : nop
        fstp st(0)
        fstp st(0)
        public_6f2420c : nop
        mov eax, dword ptr ss : [esp+0x14]
        add esi, 4
        mov dword ptr ds : [eax], 0
        mov edx, dword ptr ds : [esi]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f24190)
    }
}

#undef public_6f24208
#undef public_6f2420c
