#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284f70);
CLANG_FORWARD_PROC_SYMBOL(public_633cb50);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_633cba2 _public_633cba2
#define public_633cc10 _public_633cc10
#define public_633cc14 _public_633cc14

PROC_DECLARE(0x633cb50, internal_633cb50, public_633cb50);
extern "C" NAKED register_t __cdecl internal_633cb50()
{
    __asm
    {
        sub esp, 0x30
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x5C]
        mov edx, dword ptr ds : [esi+0x50]
        push ecx
        mov ecx, dword ptr ds : [esi+0x58]
        push edx
        mov edx, dword ptr ds : [esi+0x4C]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [esi+0x44]
        push eax
        mov eax, dword ptr ds : [esi+0x40]
        push ecx
        mov ecx, dword ptr ds : [esi+0x54]
        push edx
        mov edx, dword ptr ds : [esi+0x48]
        push eax
        mov eax, dword ptr ds : [esi+0x3C]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x38]
        call public_6284f70
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_633cba2
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633cba2 : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ds : [esi+0x28]
        fmul dword ptr ds : [edi+4]
        fld dword ptr ds : [esi+0x2C]
        fmul dword ptr ds : [edi+8]
        faddp 
        fld dword ptr ds : [edi]
        fmul dword ptr ds : [esi+0x24]
        faddp 
        fsub dword ptr ss : [esp+0x3C]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edi+8]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [edi]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [edi+4]
        pop edi
        pop esi
        faddp 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_633cc10
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        mov eax, 2
        jnp public_633cc14
        mov eax, 1
        add esp, 0x30
        ret 4
        public_633cc10 : nop
        fstp st(0)
        xor eax, eax
        public_633cc14 : nop
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x633cb50)
    }
}

#undef public_633cba2
#undef public_633cc10
#undef public_633cc14
