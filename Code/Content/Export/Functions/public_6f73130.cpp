#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f57720);
CLANG_FORWARD_PROC_SYMBOL(public_6f73130);

#define public_6f73164 _public_6f73164
#define public_6f731d7 _public_6f731d7
#define public_6f731ee _public_6f731ee
#define public_6f731f7 _public_6f731f7

PROC_DECLARE(0x6f73130, internal_6f73130, public_6f73130);
extern "C" NAKED register_t __cdecl internal_6f73130()
{
    __asm
    {
        sub esp, 0x38
        mov edx, dword ptr ss : [esp+0x40]
        fld dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx+0xC0]
        fld st(0)
        push ebp
        fmul st, st(1)
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0xBC]
        fstp dword ptr ss : [esp+0xC]
        xor al, al
        cmp edi, edx
        mov dword ptr ss : [esp+0x10], ecx
        fstp st(0)
        je public_6f731ee
        mov ebp, dword ptr ss : [esp+0x48]
        public_6f73164 : nop
        mov eax, dword ptr ds : [edi]
        mov esi, dword ptr ds : [eax+0x10]
        test esi, esi
        je public_6f731d7
        mov ecx, esi
        call public_6f57710
        test al, al
        je public_6f731d7
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        mov ecx, esi
        call public_6f57720
        mov edx, dword ptr ss : [esp+0x4C]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3664]
        fld dword ptr ss : [ebp]
        fsub dword ptr ss : [esp+0x20]
        add esp, 0xC
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ss : [esp+0x1C]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ss : [esp+0xC]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jnp public_6f731f7
        public_6f731d7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xC0]
        add edi, 4
        cmp edi, ecx
        jne public_6f73164
        xor al, al
        public_6f731ee : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x38
        ret 8
        public_6f731f7 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x6f73130)
    }
}

#undef public_6f73164
#undef public_6f731d7
#undef public_6f731ee
#undef public_6f731f7
