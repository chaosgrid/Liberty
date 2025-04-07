#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);

#define public_6f71785 _public_6f71785
#define public_6f717ee _public_6f717ee
#define public_6f7180e _public_6f7180e
#define public_6f71823 _public_6f71823
#define public_6f71830 _public_6f71830

PROC_DECLARE(0x6f71740, internal_6f71740, public_6f71740);
extern "C" NAKED register_t __cdecl internal_6f71740()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [eax], 1
        jne public_6f71830
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f71830
        cmp dword ptr ds : [esi+8], 0x20
        jne public_6f71830
        mov eax, dword ptr ds : [edi+0x54]
        mov esi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+8]
        push ebx
        xor ebx, ebx
        cmp esi, ecx
        je public_6f7180e
        public_6f71785 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f717ee
        call public_6f478c0
        mov eax, dword ptr ds : [eax+0x48]
        cmp eax, dword ptr ds : [edi+0x50]
        jne public_6f717ee
        mov edx, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [edx+0x10]
        call public_6eb70f0
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [edi+0x40]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [edi+0x44]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [edi+0x48]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [edi+0x4C]
        fnstsw ax
        test ah, 0x41
        jnp public_6f71823
        fcomp dword ptr ds : [public_6fb781c]
        fnstsw ax
        test ah, 5
        jp public_6f717ee
        mov ebx, dword ptr ds : [esi]
        public_6f717ee : nop
        mov eax, dword ptr ds : [edi+0x54]
        mov ecx, dword ptr ds : [eax+8]
        add esi, 4
        cmp esi, ecx
        jne public_6f71785
        test ebx, ebx
        je public_6f7180e
        mov esi, dword ptr ds : [edi]
        mov ecx, ebx
        call public_6f481e0
        push eax
        mov ecx, edi
        call dword ptr ds : [esi+0x10]
        public_6f7180e : nop
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3120]
        pop ebx
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 8
        public_6f71823 : nop
        pop ebx
        fstp st(0)
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 8
        public_6f71830 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6f71740)
    }
}

#undef public_6f71785
#undef public_6f717ee
#undef public_6f7180e
#undef public_6f71823
#undef public_6f71830
