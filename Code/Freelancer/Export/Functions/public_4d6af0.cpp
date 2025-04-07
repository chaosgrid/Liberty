#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_4d6b16 _public_4d6b16
#define public_4d6b1f _public_4d6b1f
#define public_4d6b47 _public_4d6b47
#define public_4d6b4d _public_4d6b4d
#define public_4d6b70 _public_4d6b70
#define public_4d6b76 _public_4d6b76
#define public_4d6b99 _public_4d6b99
#define public_4d6b9f _public_4d6b9f
#define public_4d6bcb _public_4d6bcb

PROC_DECLARE(0x4d6af0, internal_4d6af0, public_4d6af0);
extern "C" NAKED register_t __cdecl internal_4d6af0()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_41dd90
        xor edi, edi
        test al, al
        je public_4d6b16
        call public_54baf0
        test eax, eax
        je public_4d6b16
        push edi
        mov ecx, esi
        call public_5a0c30
        or byte ptr ds : [esi+0x6C], 1
        jmp public_4d6b1f
        public_4d6b16 : nop
        push 1
        mov ecx, esi
        call public_5a0c30
        public_4d6b1f : nop
        call public_42d680
        fld dword ptr ds : [esi+0x380]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d6b47
        fld dword ptr ds : [esi+0x380]
        fsub st, st(1)
        fstp dword ptr ds : [esi+0x380]
        jmp public_4d6b4d
        public_4d6b47 : nop
        mov dword ptr ds : [esi+0x380], edi
        public_4d6b4d : nop
        fld dword ptr ds : [esi+0x354]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d6b70
        fld dword ptr ds : [esi+0x354]
        fsub st, st(1)
        fstp dword ptr ds : [esi+0x354]
        jmp public_4d6b76
        public_4d6b70 : nop
        mov dword ptr ds : [esi+0x354], edi
        public_4d6b76 : nop
        fld dword ptr ds : [esi+0x3AC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d6b99
        fld dword ptr ds : [esi+0x3AC]
        fsub st, st(1)
        fstp dword ptr ds : [esi+0x3AC]
        jmp public_4d6b9f
        public_4d6b99 : nop
        mov dword ptr ds : [esi+0x3AC], edi
        public_4d6b9f : nop
        fld dword ptr ds : [esi+0x3D8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d6bcb
        fld dword ptr ds : [esi+0x3D8]
        pop edi
        fsub st, st(1)
        mov ecx, esi
        fstp dword ptr ds : [esi+0x3D8]
        pop esi
        fstp st(0)
        jmp public_5a17b0
        public_4d6bcb : nop
        mov dword ptr ds : [esi+0x3D8], edi
        fstp st(0)
        pop edi
        mov ecx, esi
        pop esi
        jmp public_5a17b0
        UNREACHABLE_TRAP(0x4d6af0)
    }
}

#undef public_4d6b16
#undef public_4d6b1f
#undef public_4d6b47
#undef public_4d6b4d
#undef public_4d6b70
#undef public_4d6b76
#undef public_4d6b99
#undef public_4d6b9f
#undef public_4d6bcb
