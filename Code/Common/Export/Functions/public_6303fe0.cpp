#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63041b0);
CLANG_FORWARD_PROC_SYMBOL(public_63041f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_630406d _public_630406d
#define public_6304091 _public_6304091
#define public_6304111 _public_6304111
#define public_6304135 _public_6304135
#define public_6304170 _public_6304170
#define public_6304194 _public_6304194

PROC_DECLARE(0x6303fe0, internal_6303fe0, public_6303fe0);
extern "C" NAKED register_t __cdecl internal_6303fe0()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        mov ebx, dword ptr ss : [esp+0x78]
        fld dword ptr ds : [ebx+4]
        push esi
        fabs 
        push edi
        fcomp qword ptr ds : [public_639e6b0]
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        fnstsw ax
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        test ah, 0x41
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        jne public_6304091
        fld dword ptr ds : [ebx+4]
        push ecx
        fmul dword ptr ds : [public_639d210]
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp]
        call public_63041b0
        mov eax, dword ptr ds : [public_63fce08]
        test eax, eax
        jne public_630406d
        call public_6391cf0
        mov dword ptr ds : [public_63fce08], eax
        public_630406d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x54]
        lea edi, ss:[esp+0xC]
        rep movsd
        public_6304091 : nop
        fld dword ptr ds : [ebx]
        fabs 
        fcomp qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 0x41
        jne public_6304135
        fld dword ptr ds : [ebx]
        mov eax, dword ptr ds : [public_63fce08]
        test eax, eax
        fmul dword ptr ds : [public_639d210]
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        fst dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x38], 0
        fcos 
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x48], 0
        fld dword ptr ss : [esp+0x80]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x40]
        fld st(0)
        fchs 
        fstp dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x50]
        jne public_6304111
        call public_6391cf0
        mov dword ptr ds : [public_63fce08], eax
        public_6304111 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x54]
        lea edi, ss:[esp+0xC]
        rep movsd
        public_6304135 : nop
        fld dword ptr ds : [ebx+8]
        fabs 
        fcomp qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 0x41
        jne public_6304194
        fld dword ptr ds : [ebx+8]
        push ecx
        fmul dword ptr ds : [public_639d210]
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp]
        call public_63041f0
        mov eax, dword ptr ds : [public_63fce08]
        test eax, eax
        jne public_6304170
        call public_6391cf0
        mov dword ptr ds : [public_63fce08], eax
        public_6304170 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x54]
        lea edi, ss:[esp+0xC]
        rep movsd
        public_6304194 : nop
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, 9
        lea esi, ss:[esp+0xC]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x6303fe0)
    }
}

#undef public_630406d
#undef public_6304091
#undef public_6304111
#undef public_6304135
#undef public_6304170
#undef public_6304194
