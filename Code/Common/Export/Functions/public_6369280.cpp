#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345850);
CLANG_FORWARD_PROC_SYMBOL(public_6369280);

#define public_63692a4 _public_63692a4
#define public_6369302 _public_6369302
#define public_636932f _public_636932f
#define public_636938f _public_636938f
#define public_63693bc _public_63693bc
#define public_6369445 _public_6369445
#define public_636945f _public_636945f
#define public_6369478 _public_6369478

PROC_DECLARE(0x6369280, internal_6369280, public_6369280);
extern "C" NAKED register_t __cdecl internal_6369280()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        mov ebx, dword ptr ss : [esp+0x9C]
        push ebp
        mov ebp, dword ptr ss : [esp+0xA4]
        push esi
        push edi
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x18], 0
        public_63692a4 : nop
        fld dword ptr ss : [esp+0xB0]
        mov dword ptr ss : [esp+0x14], ebp
        fsub dword ptr ss : [esp+0xA8]
        mov esi, ebx
        mov dword ptr ss : [esp+0x10], esi
        fadd dword ptr ss : [esp+0xB4]
        fsub dword ptr ss : [esp+0xAC]
        fld dword ptr ss : [esp+0xB8]
        fsub dword ptr ss : [esp+0xBC]
        fmulp 
        fld dword ptr ss : [esp+0xC0]
        fsub dword ptr ss : [esp+0xBC]
        fdivp 
        fadd dword ptr ss : [esp+0xAC]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        jne public_636932f
        public_6369302 : nop
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_63a53d0]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_63a53d0]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_6369302
        mov esi, dword ptr ss : [esp+0x10]
        public_636932f : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, eax
        and ecx, 3
        cmp cl, 3
        jne public_63693bc
        cmp eax, 0x40
        jg public_636945f
        fld dword ptr ss : [esp+0xB0]
        fsub dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0xB4]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xA8]
        fsub dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0xAC]
        fsub dword ptr ss : [esp+0x14]
        faddp 
        fmul dword ptr ds : [public_63a58a8]
        fadd dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        jne public_63693bc
        public_636938f : nop
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_63a53d0]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_63a53d0]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 0x41
        je public_636938f
        mov esi, dword ptr ss : [esp+0x10]
        public_63693bc : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xC4]
        lea edx, ss:[esp+0x60]
        push edx
        push edi
        push esi
        call public_6345850
        mov ecx, dword ptr ss : [esp+0xC8]
        lea eax, ss:[esp+0x20]
        push eax
        push edi
        push esi
        call public_6345850
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x20]
        push eax
        lea eax, ss:[esp+0x64]
        push eax
        call dword ptr ds : [edx]
        fld st(0)
        fsub dword ptr ss : [esp+0xB8]
        fabs 
        fcomp dword ptr ds : [public_63a545c]
        fnstsw ax
        test ah, 1
        jne public_6369478
        mov eax, dword ptr ss : [esp+0x18]
        fcom dword ptr ss : [esp+0xB8]
        inc eax
        mov dword ptr ss : [esp+0x18], eax
        fnstsw ax
        test ah, 1
        jne public_6369445
        mov ebx, esi
        fstp dword ptr ss : [esp+0xBC]
        mov ebp, edi
        mov dword ptr ss : [esp+0xA8], ebx
        mov dword ptr ss : [esp+0xAC], ebp
        jmp public_63692a4
        public_6369445 : nop
        fstp dword ptr ss : [esp+0xC0]
        mov dword ptr ss : [esp+0xB0], esi
        mov dword ptr ss : [esp+0xB4], edi
        jmp public_63692a4
        public_636945f : nop
        mov eax, dword ptr ss : [esp+0xA4]
        pop edi
        mov dword ptr ds : [eax], ebx
        pop esi
        mov dword ptr ds : [eax+4], ebp
        pop ebp
        pop ebx
        add esp, 0x90
        ret 0x28
        public_6369478 : nop
        mov eax, dword ptr ss : [esp+0xA4]
        fstp st(0)
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+4], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x90
        ret 0x28
        UNREACHABLE_TRAP(0x6369280)
    }
}

#undef public_63692a4
#undef public_6369302
#undef public_636932f
#undef public_636938f
#undef public_63693bc
#undef public_6369445
#undef public_636945f
#undef public_6369478
