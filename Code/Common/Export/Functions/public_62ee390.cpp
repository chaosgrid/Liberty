#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6a80);
CLANG_FORWARD_PROC_SYMBOL(public_62e7580);
CLANG_FORWARD_PROC_SYMBOL(public_62ee390);

#define public_62ee3b1 _public_62ee3b1
#define public_62ee3b3 _public_62ee3b3
#define public_62ee3f0 _public_62ee3f0
#define public_62ee410 _public_62ee410
#define public_62ee42d _public_62ee42d
#define public_62ee4bf _public_62ee4bf
#define public_62ee4dd _public_62ee4dd
#define public_62ee4ee _public_62ee4ee
#define public_62ee51e _public_62ee51e

PROC_DECLARE(0x62ee390, internal_62ee390, public_62ee390);
extern "C" NAKED register_t __cdecl internal_62ee390()
{
    __asm
    {
        sub esp, 0x24
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0xC], 0
        je public_62ee3b1
        lea ecx, ds:[eax-8]
        jmp public_62ee3b3
        public_62ee3b1 : nop
        xor ecx, ecx
        public_62ee3b3 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x144]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+4]
        fild dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [eax+0x157A]
        add eax, 0x14FC
        test cl, cl
        fstp dword ptr ss : [esp+0x10]
        jne public_62ee3f0
        mov ecx, dword ptr ds : [eax+0x84]
        lea edi, ds:[eax+0xC]
        mov byte ptr ds : [eax+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push edi
        add eax, 0x18
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62ee3f0 : nop
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0x34
        call public_62e7580
        mov ebp, eax
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ss : [ebp+8]
        je public_62ee4ee
        lea esp, ss:[esp]
        public_62ee410 : nop
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        lea edi, ds:[esi+8]
        jne public_62ee42d
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [edi+0x75], 1
        public_62ee42d : nop
        test dword ptr ds : [edi], 0x7F8110
        je public_62ee4dd
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        call public_62e6a80
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a0808]
        fnstsw ax
        test ah, 0x41
        jnp public_62ee4bf
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62e6a80
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a0808]
        fnstsw ax
        test ah, 0x41
        jnp public_62ee4bf
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, esi
        call public_62e6a80
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_63a080c]
        fnstsw ax
        test ah, 1
        jne public_62ee4dd
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x144]
        mov dword ptr ss : [esp+0x20], eax
        fild dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        jmp public_62ee4dd
        public_62ee4bf : nop
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x144]
        mov dword ptr ss : [esp+0x20], eax
        fild dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        public_62ee4dd : nop
        mov eax, dword ptr ss : [ebp+8]
        add esi, 0x88
        cmp esi, eax
        jne public_62ee410
        public_62ee4ee : nop
        fld dword ptr ss : [esp+0x10]
        pop edi
        fadd dword ptr ss : [esp+8]
        pop esi
        pop ebp
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 0x41
        jne public_62ee51e
        fstp st(0)
        fld dword ptr ss : [esp]
        fdiv dword ptr ss : [esp+4]
        public_62ee51e : nop
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x62ee390)
    }
}

#undef public_62ee3b1
#undef public_62ee3b3
#undef public_62ee3f0
#undef public_62ee410
#undef public_62ee42d
#undef public_62ee4bf
#undef public_62ee4dd
#undef public_62ee4ee
#undef public_62ee51e
