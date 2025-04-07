#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f70c0);
CLANG_FORWARD_PROC_SYMBOL(public_539b40);
CLANG_FORWARD_PROC_SYMBOL(public_5554d0);

#define public_539b93 _public_539b93

PROC_DECLARE(0x539b40, internal_539b40, public_539b40);
extern "C" NAKED register_t __cdecl internal_539b40()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x178]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x88]
        mov ecx, dword ptr ss : [esp+8]
        and ecx, 0x807
        neg ecx
        sbb cl, cl
        inc cl
        mov byte ptr ss : [esp+4], cl
        call public_4f70c0
        fcomp qword ptr ds : [public_5c8b68]
        fnstsw ax
        test ah, 5
        jp public_539b93
        mov byte ptr ss : [esp+4], 0
        public_539b93 : nop
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [esi+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx]
        push eax
        call public_5554d0
        add esp, 0x18
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x539b40)
    }
}

#undef public_539b93
