#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf2910);

#define public_6cf24dd _public_6cf24dd
#define public_6cf24f2 _public_6cf24f2
#define public_6cf24f4 _public_6cf24f4
#define public_6cf250a _public_6cf250a
#define public_6cf2531 _public_6cf2531
#define public_6cf25a5 _public_6cf25a5
#define public_6cf25fc _public_6cf25fc
#define public_6cf260f _public_6cf260f
#define public_6cf2633 _public_6cf2633
#define public_6cf263a _public_6cf263a

PROC_DECLARE(0x6cf24c0, internal_6cf24c0, public_6cf24c0);
extern "C" NAKED register_t __cdecl internal_6cf24c0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push edi
        mov esi, ecx
        call public_6cee9e0
        test al, al
        jne public_6cf24dd
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        public_6cf24dd : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6cf24f2
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 3
        cmp al, 3
        jne public_6cf24f2
        mov eax, ecx
        jmp public_6cf24f4
        public_6cf24f2 : nop
        xor eax, eax
        public_6cf24f4 : nop
        mov edx, dword ptr ds : [eax+0xB4]
        mov eax, dword ptr ds : [public_6d64194]
        test edx, edx
        mov edx, dword ptr ds : [ecx]
        je public_6cf250a
        mov eax, dword ptr ds : [public_6d64424]
        public_6cf250a : nop
        mov eax, dword ptr ds : [eax]
        push eax
        push edi
        call dword ptr ds : [edx+0x50]
        push edi
        mov ecx, esi
        call public_6cf2910
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x160]
        test al, al
        je public_6cf2531
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 4
        public_6cf2531 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x19C]
        test al, al
        jne public_6cf263a
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0x60]
        fst dword ptr ds : [esi+0x60]
        fld dword ptr ds : [esi+0x64]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [esi+0x64]
        fcomp dword ptr ds : [public_6d65f90]
        fnstsw ax
        test ah, 0x41
        jne public_6cf263a
        mov ecx, dword ptr ds : [public_6d64420]
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0x10], 0x7F0000
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x28]
        fld st(0)
        mov edx, dword ptr ds : [ecx]
        fmul st, st(1)
        lea eax, ss:[esp+8]
        push eax
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        call dword ptr ds : [edx]
        mov edi, eax
        test edi, edi
        je public_6cf260f
        push ebx
        public_6cf25a5 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_6cf25fc
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov ebx, eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ebx]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ebx+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ebx+8]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_6cf25fc
        mov eax, dword ptr ds : [public_6d6441c]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x64], ecx
        public_6cf25fc : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [edx]
        mov edi, eax
        test edi, edi
        jne public_6cf25a5
        pop ebx
        public_6cf260f : nop
        fld dword ptr ds : [esi+0x64]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6cf2633
        mov edi, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edi+0x20]
        push eax
        push 0
        mov ecx, esi
        call dword ptr ds : [edi+0x158]
        jmp public_6cf263a
        public_6cf2633 : nop
        mov dword ptr ds : [esi+0x60], 0
        public_6cf263a : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x160]
        neg al
        pop edi
        pop esi
        sbb eax, eax
        inc eax
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6cf24c0)
    }
}

#undef public_6cf24dd
#undef public_6cf24f2
#undef public_6cf24f4
#undef public_6cf250a
#undef public_6cf2531
#undef public_6cf25a5
#undef public_6cf25fc
#undef public_6cf260f
#undef public_6cf2633
#undef public_6cf263a
