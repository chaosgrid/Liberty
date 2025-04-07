#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_516eed _public_516eed
#define public_516f07 _public_516f07
#define public_516f21 _public_516f21
#define public_516f39 _public_516f39
#define public_516f3b _public_516f3b
#define public_516f51 _public_516f51
#define public_516f60 _public_516f60
#define public_516f61 _public_516f61

PROC_DECLARE(0x516ea0, internal_516ea0, public_516ea0);
extern "C" NAKED register_t __cdecl internal_516ea0()
{
    __asm
    {
        push esi
        push 0x2A
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_516f61
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+0x30]
        fld dword ptr ds : [ecx+0xA8]
        test eax, eax
        fmul dword ptr ss : [esp+8]
        jne public_516eed
        fadd dword ptr ds : [esi+0x2C]
        fst dword ptr ds : [esi+0x2C]
        fcomp dword ptr ds : [ecx+0xAC]
        fnstsw ax
        test ah, 0x41
        jne public_516f07
        mov edx, dword ptr ds : [ecx+0xAC]
        mov dword ptr ds : [esi+0x2C], edx
        jmp public_516f07
        public_516eed : nop
        fsubr dword ptr ds : [esi+0x2C]
        fst dword ptr ds : [esi+0x2C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_516f07
        mov dword ptr ds : [esi+0x2C], 0
        public_516f07 : nop
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+0x2C]
        fadd dword ptr ds : [esi+0x28]
        fcom dword ptr ds : [public_5ca23c]
        fst dword ptr ds : [esi+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_516f39
        public_516f21 : nop
        fsub dword ptr ds : [public_5ca23c]
        fcom dword ptr ds : [public_5ca23c]
        fnstsw ax
        test ah, 0x41
        je public_516f21
        fstp dword ptr ds : [esi+0x28]
        jmp public_516f3b
        public_516f39 : nop
        fstp st(0)
        public_516f3b : nop
        cmp dword ptr ds : [esi+0x14], 0xFFFFFFFF
        push edi
        mov edi, dword ptr ds : [public_5c661c]
        je public_516f51
        lea eax, ds:[esi+0x10]
        push eax
        call edi
        add esp, 4
        public_516f51 : nop
        cmp dword ptr ds : [esi+0x20], 0xFFFFFFFF
        je public_516f60
        add esi, 0x1C
        push esi
        call edi
        add esp, 4
        public_516f60 : nop
        pop edi
        public_516f61 : nop
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x516ea0)
    }
}

#undef public_516eed
#undef public_516f07
#undef public_516f21
#undef public_516f39
#undef public_516f3b
#undef public_516f51
#undef public_516f60
#undef public_516f61
