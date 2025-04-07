#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a650);

#define public_45a66e _public_45a66e
#define public_45a68c _public_45a68c
#define public_45a6aa _public_45a6aa
#define public_45a6c8 _public_45a6c8

PROC_DECLARE(0x45a650, internal_45a650, public_45a650);
extern "C" NAKED register_t __cdecl internal_45a650()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5ce7ec]
        fnstsw ax
        test ah, 0x41
        jp public_45a66e
        mov ecx, dword ptr ds : [public_679ba8]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 
        public_45a66e : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5ce7f0]
        fnstsw ax
        test ah, 0x41
        jp public_45a68c
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [public_679b84]
        mov dword ptr ds : [eax], edx
        ret 
        public_45a68c : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5ce7f8]
        fnstsw ax
        test ah, 1
        jne public_45a6aa
        mov ecx, dword ptr ds : [public_679bac]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 
        public_45a6aa : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5ce7f4]
        fnstsw ax
        test ah, 1
        jne public_45a6c8
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [public_679b84]
        mov dword ptr ds : [eax], edx
        ret 
        public_45a6c8 : nop
        mov ecx, dword ptr ds : [public_679b84]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 
        UNREACHABLE_TRAP(0x45a650)
    }
}

#undef public_45a66e
#undef public_45a68c
#undef public_45a6aa
#undef public_45a6c8
