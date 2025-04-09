#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_45dc60);
CLANG_FORWARD_PROC_SYMBOL(public_47b410);
CLANG_FORWARD_PROC_SYMBOL(public_47d2f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);

#define public_47b320 _public_47b320
#define public_47b330 _public_47b330
#define public_47b335 _public_47b335
#define public_47b33c _public_47b33c
#define public_47b358 _public_47b358
#define public_47b389 _public_47b389
#define public_47b3cc _public_47b3cc

PROC_DECLARE(0x47b310, internal_47b310, public_47b310);
extern "C" NAKED register_t __cdecl internal_47b310()
{
    __asm
    {
        sub esp, 8
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0xC]
        test ecx, ecx
        je public_47b33c
        push esi
        mov edi, edi
        public_47b320 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov esi, dword ptr ds : [ecx+8]
        je public_47b330
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_47b335
        public_47b330 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_47b335 : nop
        test esi, esi
        mov ecx, esi
        jne public_47b320
        pop esi
        public_47b33c : nop
        mov al, byte ptr ds : [edi+0x4E7]
        test al, al
        je public_47b358
        mov ecx, edi
        call public_47b410
        mov ecx, dword ptr ds : [public_66d3f0]
        call public_45dc60
        public_47b358 : nop
        push 1
        push 0
        lea eax, ds:[edi+0x34C]
        push eax
        mov ecx, edi
        call public_47d2f0
        call public_4c3e10
        test eax, eax
        jne public_47b389
        mov ecx, dword ptr ds : [edi+0x3D0]
        test ecx, ecx
        je public_47b389
        mov edx, dword ptr ds : [ecx]
        push eax
        push eax
        push 0x37
        call dword ptr ds : [edx+0xA8]
        public_47b389 : nop
        fld dword ptr ds : [edi+0x914]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_47b3cc
        fld dword ptr ds : [edi+0x914]
        fstp qword ptr ss : [esp+4]
        call public_42d680
        fsubr qword ptr ss : [esp+4]
        fst dword ptr ds : [edi+0x914]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_47b3cc
        mov dword ptr ds : [edi+0x914], 0
        public_47b3cc : nop
        pop edi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x47b310)
    }
}

#undef public_47b320
#undef public_47b330
#undef public_47b335
#undef public_47b33c
#undef public_47b358
#undef public_47b389
#undef public_47b3cc
