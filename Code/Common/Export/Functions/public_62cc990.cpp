#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4b20);

#define public_62cca24 _public_62cca24
#define public_62cca26 _public_62cca26
#define public_62cca67 _public_62cca67
#define public_62cca6f _public_62cca6f
#define public_62cca75 _public_62cca75
#define public_62ccabc _public_62ccabc
#define public_62ccac4 _public_62ccac4
#define public_62ccaca _public_62ccaca
#define public_62ccae0 _public_62ccae0

PROC_DECLARE(0x62cc990, internal_62cc990, public_62cc990);
extern "C" NAKED register_t __cdecl internal_62cc990()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edi+8]
        mov esi, ecx
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62ccae0
        mov ecx, dword ptr ds : [esi+0x20]
        mov byte ptr ds : [esi+0x2A8], 1
        fld dword ptr ds : [edi+4]
        fchs 
        fstp dword ptr ds : [esi+0x2AC]
        fld dword ptr ds : [edi]
        mov dword ptr ds : [esi+0x2B4], 0
        fchs 
        fstp dword ptr ds : [esi+0x2B0]
        call public_62d4b20
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62cca24
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [esi+0x2AC]
        fstp dword ptr ds : [esi+0x2AC]
        fmul dword ptr ds : [esi+0x2B0]
        fstp dword ptr ds : [esi+0x2B0]
        jmp public_62cca26
        public_62cca24 : nop
        fstp st(0)
        public_62cca26 : nop
        fld dword ptr ds : [esi+0x2AC]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62cca67
        fld dword ptr ds : [esi+0x2AC]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62cca6f
        fld dword ptr ds : [esi+0x2AC]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62cca67
        fld dword ptr ds : [esi+0x2AC]
        jmp public_62cca75
        public_62cca67 : nop
        fld dword ptr ds : [public_6399404]
        jmp public_62cca75
        public_62cca6f : nop
        fld dword ptr ds : [public_639a1d0]
        public_62cca75 : nop
        fstp dword ptr ds : [esi+0x2AC]
        fld dword ptr ds : [esi+0x2B0]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62ccabc
        fld dword ptr ds : [esi+0x2B0]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62ccac4
        fld dword ptr ds : [esi+0x2B0]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62ccabc
        fld dword ptr ds : [esi+0x2B0]
        jmp public_62ccaca
        public_62ccabc : nop
        fld dword ptr ds : [public_6399404]
        jmp public_62ccaca
        public_62ccac4 : nop
        fld dword ptr ds : [public_639a1d0]
        public_62ccaca : nop
        fstp dword ptr ds : [esi+0x2B0]
        fld dword ptr ds : [edi+8]
        pop edi
        fchs 
        fstp dword ptr ds : [esi+0x2B4]
        pop esi
        ret 4
        public_62ccae0 : nop
        pop edi
        mov byte ptr ds : [esi+0x2A8], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cc990)
    }
}

#undef public_62cca24
#undef public_62cca26
#undef public_62cca67
#undef public_62cca6f
#undef public_62cca75
#undef public_62ccabc
#undef public_62ccac4
#undef public_62ccaca
#undef public_62ccae0
