#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df7f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e0cf0);

#define public_62e0d39 _public_62e0d39
#define public_62e0d7f _public_62e0d7f
#define public_62e0daf _public_62e0daf

PROC_DECLARE(0x62e0cf0, internal_62e0cf0, public_62e0cf0);
extern "C" NAKED register_t __cdecl internal_62e0cf0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        sub esp, 0xC
        test al, al
        jne public_62e0d39
        fld dword ptr ds : [edx+8]
        fld dword ptr ds : [edx+4]
        fld dword ptr ds : [edx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [edx]
        fstp dword ptr ds : [edx]
        fld st(0)
        fmul dword ptr ds : [edx+4]
        fstp dword ptr ds : [edx+4]
        fmul dword ptr ds : [edx+8]
        fstp dword ptr ds : [edx+8]
        public_62e0d39 : nop
        fld dword ptr ds : [edx]
        push ecx
        fabs 
        fld dword ptr ds : [edx+4]
        fabs 
        fcompp 
        fld dword ptr ds : [edx+8]
        fnstsw ax
        test ah, 0x41
        jp public_62e0d7f
        fld dword ptr ds : [edx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        call public_62df7f0
        mov eax, dword ptr ss : [esp+0x14]
        fld st(0)
        fmul dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+4], 0
        fchs 
        fstp dword ptr ds : [eax]
        fmul dword ptr ds : [edx]
        jmp public_62e0daf
        public_62e0d7f : nop
        fld dword ptr ds : [edx+4]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        call public_62df7f0
        mov eax, dword ptr ss : [esp+0x14]
        fld st(0)
        mov dword ptr ds : [eax], 0
        fmul dword ptr ds : [edx+8]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+4]
        fchs 
        public_62e0daf : nop
        fstp dword ptr ds : [eax+8]
        add esp, 4
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx+8]
        fsubp 
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fsubp 
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62e0cf0)
    }
}

#undef public_62e0d39
#undef public_62e0d7f
#undef public_62e0daf
