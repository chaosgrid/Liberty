#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_49a1e0);

#define public_49a26d _public_49a26d
#define public_49a286 _public_49a286
#define public_49a292 _public_49a292
#define public_49a2d2 _public_49a2d2
#define public_49a2da _public_49a2da
#define public_49a2e0 _public_49a2e0

PROC_DECLARE(0x49a1e0, internal_49a1e0, public_49a1e0);
extern "C" NAKED register_t __cdecl internal_49a1e0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        push esi
        fmul qword ptr ds : [public_5d3ed8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_5d3ed0]
        fld dword ptr ss : [esp+8]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5d3efc]
        fnstsw ax
        test ah, 0x41
        je public_49a2e0
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5d3ef8]
        fnstsw ax
        test ah, 5
        jnp public_49a2e0
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5d3ef4]
        fnstsw ax
        test ah, 0x41
        je public_49a2e0
        fld dword ptr ss : [esp+0xC]
        fchs 
        fcomp dword ptr ds : [public_5d3ef0]
        fnstsw ax
        test ah, 5
        jnp public_49a2e0
        mov eax, dword ptr ds : [ecx+0x86C]
        test eax, eax
        jne public_49a26d
        xor edx, edx
        jmp public_49a286
        public_49a26d : nop
        mov edx, dword ptr ds : [ecx+0x870]
        sub edx, eax
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_49a286 : nop
        xor esi, esi
        test edx, edx
        jle public_49a2da
        mov ecx, dword ptr ds : [ecx+0x86C]
        public_49a292 : nop
        fld dword ptr ds : [ecx+8]
        fadd dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 5
        jnp public_49a2d2
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        je public_49a2d2
        fld dword ptr ds : [ecx+4]
        fadd dword ptr ds : [ecx+0xC]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jnp public_49a2d2
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 5
        jp public_49a2e0
        public_49a2d2 : nop
        inc esi
        add ecx, 0x14
        cmp esi, edx
        jl public_49a292
        public_49a2da : nop
        mov al, 1
        pop esi
        ret 0x10
        public_49a2e0 : nop
        xor al, al
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x49a1e0)
    }
}

#undef public_49a26d
#undef public_49a286
#undef public_49a292
#undef public_49a2d2
#undef public_49a2da
#undef public_49a2e0
