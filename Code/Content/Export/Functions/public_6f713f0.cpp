#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);

#define public_6f71430 _public_6f71430
#define public_6f7148a _public_6f7148a
#define public_6f714a1 _public_6f714a1
#define public_6f714bc _public_6f714bc
#define public_6f714c6 _public_6f714c6

PROC_DECLARE(0x6f713f0, internal_6f713f0, public_6f713f0);
extern "C" NAKED register_t __cdecl internal_6f713f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push esi
        mov esi, ecx
        cmp dword ptr ds : [eax], 1
        push edi
        jne public_6f714c6
        mov edi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f714c6
        cmp dword ptr ds : [edi+8], 0x20
        jne public_6f714c6
        mov eax, dword ptr ds : [esi+0x54]
        mov edi, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_6f714bc
        public_6f71430 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f7148a
        call public_6f478c0
        mov eax, dword ptr ds : [eax+0x48]
        cmp eax, dword ptr ds : [esi+0x50]
        jne public_6f7148a
        mov edx, dword ptr ds : [edi]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, dword ptr ds : [edx+0x10]
        call public_6eb70f0
        fld dword ptr ss : [esp+8]
        fsub dword ptr ds : [esi+0x40]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [esi+0x44]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x48]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ds : [esi+0x4C]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jnp public_6f714a1
        public_6f7148a : nop
        mov eax, dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [eax+8]
        add edi, 4
        cmp edi, ecx
        jne public_6f71430
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 8
        public_6f714a1 : nop
        mov ecx, dword ptr ds : [edi]
        push ebx
        mov ebx, dword ptr ds : [esi]
        call public_6f481e0
        push eax
        mov ecx, esi
        call dword ptr ds : [ebx+0x10]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_6fb3120]
        pop ebx
        public_6f714bc : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 8
        public_6f714c6 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6f713f0)
    }
}

#undef public_6f71430
#undef public_6f7148a
#undef public_6f714a1
#undef public_6f714bc
#undef public_6f714c6
