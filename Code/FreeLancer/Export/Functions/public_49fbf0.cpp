#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_49fbf0);

#define public_49fc79 _public_49fc79
#define public_49fcc5 _public_49fcc5
#define public_49fcee _public_49fcee
#define public_49fcfa _public_49fcfa
#define public_49fd06 _public_49fd06
#define public_49fd93 _public_49fd93
#define public_49fd99 _public_49fd99
#define public_49fdc0 _public_49fdc0
#define public_49fe47 _public_49fe47
#define public_49fe4d _public_49fe4d

PROC_DECLARE(0x49fbf0, internal_49fbf0, public_49fbf0);
extern "C" NAKED register_t __cdecl internal_49fbf0()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x478]
        push esi
        test al, al
        mov eax, dword ptr ds : [ebx+0x7D0]
        push edi
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x28], 0
        je public_49fcc5
        cmp eax, 2
        jne public_49fc79
        fld dword ptr ds : [public_5d3f48]
        mov eax, dword ptr ds : [ebx+0x47C]
        fsub dword ptr ds : [ebx+0x488]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x10], 0x3F800000
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_5d3f44]
        fsub dword ptr ds : [ebx+0x48C]
        jmp public_49fcee
        public_49fc79 : nop
        fld dword ptr ds : [ebx+0x488]
        mov ecx, dword ptr ds : [ebx+0x47C]
        fadd dword ptr ds : [public_5d3f48]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x4109999A
        fstp dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], 0x3CDD2F1B
        fld dword ptr ds : [ebx+0x48C]
        mov dword ptr ss : [esp+0x1C], 0xBC3C6A7F
        fsub dword ptr ds : [public_5d3f40]
        fstp dword ptr ss : [esp+0x28]
        jmp public_49fcfa
        public_49fcc5 : nop
        cmp eax, 2
        jne public_49fcfa
        fld dword ptr ds : [ebx+0x46C]
        mov dword ptr ss : [esp+0x10], 0x4109999A
        fadd dword ptr ds : [public_5d3f48]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ebx+0x470]
        fsub dword ptr ds : [public_5d3f40]
        public_49fcee : nop
        fstp dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC], 0x4109999A
        public_49fcfa : nop
        xor edi, edi
        mov dword ptr ss : [esp+0x14], edi
        lea esi, ds:[ebx+0xB08]
        public_49fd06 : nop
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5d3168]
        fld dword ptr ss : [esp+0x18]
        fadd st, st(1)
        fsub dword ptr ds : [public_5d3164]
        fmul dword ptr ss : [esp+0xC]
        fxch 
        fadd dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [public_5d3164]
        fmul dword ptr ss : [esp+0x10]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x20]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5d3f3c]
        fnstsw ax
        test ah, 0x41
        je public_49fd93
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5d3f38]
        fnstsw ax
        test ah, 5
        jnp public_49fd93
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x2C], eax
        push 0
        lea eax, ss:[esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x38], 0xBE96872B
        mov dword ptr ss : [esp+0x3C], 0
        push 6
        jmp public_49fd99
        public_49fd93 : nop
        push 0
        push 1
        push 1
        public_49fd99 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        inc edi
        add esi, 4
        cmp edi, 8
        mov dword ptr ss : [esp+0x14], edi
        jl public_49fd06
        xor edi, edi
        mov dword ptr ss : [esp+0x14], edi
        lea esi, ds:[ebx+0xB28]
        public_49fdc0 : nop
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5d3168]
        fsubr dword ptr ds : [public_5d314c]
        fld dword ptr ss : [esp+0x1C]
        fadd st, st(1)
        fmul dword ptr ss : [esp+0xC]
        fxch 
        fadd dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x10]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x20]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5d3f34]
        fnstsw ax
        test ah, 0x41
        je public_49fe47
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5d3f30]
        fnstsw ax
        test ah, 5
        jnp public_49fe47
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [esp+0x18]
        push 0
        lea eax, ss:[esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x34], 0xBE9E353F
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], 0
        push 6
        jmp public_49fe4d
        public_49fe47 : nop
        push 0
        push 1
        push 1
        public_49fe4d : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        inc edi
        add esi, 4
        cmp edi, 8
        mov dword ptr ss : [esp+0x14], edi
        jl public_49fdc0
        pop edi
        pop esi
        pop ebx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x49fbf0)
    }
}

#undef public_49fc79
#undef public_49fcc5
#undef public_49fcee
#undef public_49fcfa
#undef public_49fd06
#undef public_49fd93
#undef public_49fd99
#undef public_49fdc0
#undef public_49fe47
#undef public_49fe4d
