#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285c90);
CLANG_FORWARD_PROC_SYMBOL(public_62ad250);

#define public_62ad2ad _public_62ad2ad
#define public_62ad311 _public_62ad311
#define public_62ad323 _public_62ad323

PROC_DECLARE(0x62ad250, internal_62ad250, public_62ad250);
extern "C" NAKED register_t __cdecl internal_62ad250()
{
    __asm
    {
        push ecx
        fld dword ptr ds : [public_639e518]
        push esi
        fmul dword ptr ds : [public_639e518]
        lea esi, ds:[ecx+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [edi]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62ad2ad
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [edi+4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62ad2ad
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [edi+8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_62ad323
        public_62ad2ad : nop
        call public_6285c90
        fld dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        fld st(2)
        fmulp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fxch st(2)
        fsqrt 
        fstp st(2)
        fstp st(0)
        fcom qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x41
        jne public_62ad311
        fdivr dword ptr ds : [public_639a1d0]
        mov ecx, dword ptr ds : [edi]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ecx
        pop edi
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        pop esi
        pop ecx
        ret 4
        public_62ad311 : nop
        mov edx, dword ptr ds : [edi]
        fstp st(0)
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        public_62ad323 : nop
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62ad250)
    }
}

#undef public_62ad2ad
#undef public_62ad311
#undef public_62ad323
