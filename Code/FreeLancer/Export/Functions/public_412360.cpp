#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412360);

#define public_41237b _public_41237b
#define public_412394 _public_412394
#define public_4123e7 _public_4123e7
#define public_412429 _public_412429
#define public_41242f _public_41242f

PROC_DECLARE(0x412360, internal_412360, public_412360);
extern "C" NAKED register_t __cdecl internal_412360()
{
    __asm
    {
        mov al, byte ptr ds : [public_616514]
        xor cl, cl
        cmp al, cl
        je public_41237b
        mov byte ptr ds : [public_616514], cl
        mov dword ptr ss : [esp+4], 0
        jmp public_412394
        public_41237b : nop
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_5c7720]
        fnstsw ax
        test ah, 0x41
        jne public_412394
        mov dword ptr ss : [esp+4], 0x3DCCCCCD
        public_412394 : nop
        cmp byte ptr ds : [public_6105ac], cl
        je public_41242f
        fld dword ptr ds : [public_6105a8]
        fcomp dword ptr ds : [public_616510]
        fnstsw ax
        test ah, 5
        jp public_4123e7
        fld dword ptr ds : [public_616508]
        fmul dword ptr ss : [esp+4]
        fadd dword ptr ds : [public_6105a8]
        fst dword ptr ds : [public_6105a8]
        fcomp dword ptr ds : [public_616510]
        fnstsw ax
        test ah, 1
        jne public_41242f
        mov eax, dword ptr ds : [public_616510]
        mov dword ptr ds : [public_6105a8], eax
        mov byte ptr ds : [public_6105ac], cl
        ret 
        public_4123e7 : nop
        fld dword ptr ds : [public_6105a8]
        fcomp dword ptr ds : [public_616510]
        fnstsw ax
        test ah, 0x41
        jne public_412429
        fld dword ptr ds : [public_616508]
        fmul dword ptr ss : [esp+4]
        fsubr dword ptr ds : [public_6105a8]
        fst dword ptr ds : [public_6105a8]
        fcomp dword ptr ds : [public_616510]
        fnstsw ax
        test ah, 0x41
        jp public_41242f
        mov edx, dword ptr ds : [public_616510]
        mov dword ptr ds : [public_6105a8], edx
        public_412429 : nop
        mov byte ptr ds : [public_6105ac], cl
        public_41242f : nop
        ret 
        UNREACHABLE_TRAP(0x412360)
    }
}

#undef public_41237b
#undef public_412394
#undef public_4123e7
#undef public_412429
#undef public_41242f
