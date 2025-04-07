#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4b20);

#define public_62cb1d5 _public_62cb1d5
#define public_62cb1d7 _public_62cb1d7
#define public_62cb218 _public_62cb218
#define public_62cb220 _public_62cb220
#define public_62cb226 _public_62cb226
#define public_62cb26d _public_62cb26d
#define public_62cb275 _public_62cb275
#define public_62cb27b _public_62cb27b
#define public_62cb29a _public_62cb29a

PROC_DECLARE(0x62cb170, internal_62cb170, public_62cb170);
extern "C" NAKED register_t __cdecl internal_62cb170()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x22C], 1
        fld dword ptr ds : [edi+4]
        fchs 
        fstp dword ptr ds : [esi+0x230]
        fld dword ptr ds : [edi]
        mov dword ptr ds : [esi+0x238], 0
        fchs 
        fstp dword ptr ds : [esi+0x234]
        call public_62d4b20
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62cb1d5
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [esi+0x230]
        fstp dword ptr ds : [esi+0x230]
        fmul dword ptr ds : [esi+0x234]
        fstp dword ptr ds : [esi+0x234]
        jmp public_62cb1d7
        public_62cb1d5 : nop
        fstp st(0)
        public_62cb1d7 : nop
        fld dword ptr ds : [esi+0x230]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62cb218
        fld dword ptr ds : [esi+0x230]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62cb220
        fld dword ptr ds : [esi+0x230]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62cb218
        fld dword ptr ds : [esi+0x230]
        jmp public_62cb226
        public_62cb218 : nop
        fld dword ptr ds : [public_6399404]
        jmp public_62cb226
        public_62cb220 : nop
        fld dword ptr ds : [public_639a1d0]
        public_62cb226 : nop
        fstp dword ptr ds : [esi+0x230]
        fld dword ptr ds : [esi+0x234]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62cb26d
        fld dword ptr ds : [esi+0x234]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62cb275
        fld dword ptr ds : [esi+0x234]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62cb26d
        fld dword ptr ds : [esi+0x234]
        jmp public_62cb27b
        public_62cb26d : nop
        fld dword ptr ds : [public_6399404]
        jmp public_62cb27b
        public_62cb275 : nop
        fld dword ptr ds : [public_639a1d0]
        public_62cb27b : nop
        fstp dword ptr ds : [esi+0x234]
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62cb29a
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+0x1E8], eax
        public_62cb29a : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cb170)
    }
}

#undef public_62cb1d5
#undef public_62cb1d7
#undef public_62cb218
#undef public_62cb220
#undef public_62cb226
#undef public_62cb26d
#undef public_62cb275
#undef public_62cb27b
#undef public_62cb29a
