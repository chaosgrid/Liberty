#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ebfdd9 _public_6ebfdd9
#define public_6ebfddf _public_6ebfddf
#define public_6ebfdea _public_6ebfdea
#define public_6ebfdef _public_6ebfdef
#define public_6ebfe16 _public_6ebfe16
#define public_6ebfe2a _public_6ebfe2a
#define public_6ebfe2c _public_6ebfe2c
#define public_6ebfe34 _public_6ebfe34

PROC_DECLARE(0x6ebfd20, internal_6ebfd20, public_6ebfd20);
extern "C" NAKED register_t __cdecl internal_6ebfd20()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x44]
        xor bl, bl
        test edi, edi
        mov esi, ecx
        je public_6ebfddf
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ebfddf
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ebfddf
        call public_6f478c0
        test eax, eax
        je public_6ebfddf
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[esi+0x18]
        push edx
        call public_6f15b90
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [esi+0x64], eax
        je public_6ebfddf
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        test eax, eax
        jne public_6ebfddf
        fld dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi+0x50]
        fsub dword ptr ds : [esi+0xC]
        test al, al
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [esi+0x14]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp+0x44]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [esi+0x4C]
        fnstsw ax
        je public_6ebfdea
        test ah, 5
        jnp public_6ebfdef
        public_6ebfdd9 : nop
        mov ecx, dword ptr ds : [esi+0x58]
        mov dword ptr ds : [esi+0x54], ecx
        public_6ebfddf : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x30
        ret 8
        public_6ebfdea : nop
        test ah, 0x41
        jne public_6ebfdd9
        public_6ebfdef : nop
        fld dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [esi+0x5C]
        test ecx, ecx
        fsub dword ptr ds : [esi+0x60]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [esi+0x60], eax
        je public_6ebfe2a
        fcom dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jp public_6ebfe16
        cmp ecx, 1
        je public_6ebfe2a
        public_6ebfe16 : nop
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 1
        jne public_6ebfe34
        cmp ecx, 2
        jne public_6ebfe34
        jmp public_6ebfe2c
        public_6ebfe2a : nop
        fstp st(0)
        public_6ebfe2c : nop
        fld dword ptr ds : [esi+0x54]
        fsub dword ptr ds : [edi]
        fstp dword ptr ds : [esi+0x54]
        public_6ebfe34 : nop
        fld dword ptr ds : [esi+0x54]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jp public_6ebfddf
        pop edi
        mov bl, 1
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6ebfd20)
    }
}

#undef public_6ebfdd9
#undef public_6ebfddf
#undef public_6ebfdea
#undef public_6ebfdef
#undef public_6ebfe16
#undef public_6ebfe2a
#undef public_6ebfe2c
#undef public_6ebfe34
