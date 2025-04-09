#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_425480);
CLANG_FORWARD_PROC_SYMBOL(public_5306e0);
CLANG_FORWARD_PROC_SYMBOL(public_536b50);
CLANG_FORWARD_PROC_SYMBOL(public_536fb0);

#define public_536fd6 _public_536fd6
#define public_536fd8 _public_536fd8
#define public_537000 _public_537000
#define public_537045 _public_537045
#define public_537050 _public_537050
#define public_5370f7 _public_5370f7
#define public_5370f9 _public_5370f9
#define public_537119 _public_537119
#define public_53711b _public_53711b
#define public_537202 _public_537202
#define public_537223 _public_537223
#define public_537253 _public_537253

PROC_DECLARE(0x536fb0, internal_536fb0, public_536fb0);
extern "C" NAKED register_t __cdecl internal_536fb0()
{
    __asm
    {
        sub esp, 0x50
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        push edi
        je public_536fd6
        add eax, 0xC
        test eax, eax
        je public_536fd6
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_536fd6
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 1
        cmp al, 1
        je public_536fd8
        public_536fd6 : nop
        xor ecx, ecx
        public_536fd8 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x34]
        push eax
        call dword ptr ds : [edx+0x64]
        mov ecx, dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x3C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_537000
        mov edx, dword ptr ds : [ecx+0x3C]
        mov dword ptr ss : [esp+0xC], edx
        public_537000 : nop
        mov eax, dword ptr ds : [ecx+0x44]
        test eax, eax
        je public_537223
        mov edi, dword ptr ds : [ecx+0x48]
        sub edi, eax
        sar edi, 2
        test edi, edi
        mov dword ptr ss : [esp+0x10], edi
        jle public_537223
        fld dword ptr ds : [public_5c7474]
        mov dword ptr ss : [esp+8], 0
        fcomp dword ptr ds : [ecx+0x38]
        fnstsw ax
        test ah, 5
        jp public_537253
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_5c69c4]
        jmp public_537050
        public_537045 : nop
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_537050 : nop
        call dword ptr ds : [public_5c71dc]
        imul eax, edi
        mov ecx, dword ptr ss : [esp+0x14]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [eax+0x44]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        sar edi, 0xF
        call ebp
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp]
        push ecx
        fld dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x48]
        fadd dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp]
        call public_422b80
        lea eax, ds:[ebx+edi*4]
        push eax
        call dword ptr ds : [public_5c69e4]
        push eax
        call dword ptr ds : [public_5c621c]
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x50
        push ecx
        mov edi, eax
        call public_536b50
        add esp, 0xC
        test eax, eax
        je public_537202
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        push edi
        call public_5306e0
        add esp, 0xC
        test eax, eax
        je public_5370f7
        add eax, 0xC
        test eax, eax
        je public_5370f7
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_5370f7
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 1
        cmp al, 1
        je public_5370f9
        public_5370f7 : nop
        xor edi, edi
        public_5370f9 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_537119
        add eax, 0xC
        test eax, eax
        je public_537119
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_537119
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 1
        cmp cl, 1
        je public_53711b
        public_537119 : nop
        xor eax, eax
        public_53711b : nop
        push eax
        call dword ptr ds : [public_5c69d0]
        push eax
        push edi
        call dword ptr ds : [public_5c69e0]
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_425480
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], edx
        fld dword ptr ds : [eax+0x30]
        fadd st(0), st
        add esp, 0x10
        fstp dword ptr ss : [esp+0x20]
        call dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+0xC]
        lea eax, ss:[esp+0x48]
        push eax
        fmul dword ptr ds : [public_5caeec]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fsqrt 
        fdivp 
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x24]
        fadd dword ptr ds : [eax]
        push ecx
        push edi
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x34]
        call dword ptr ds : [public_5c6800]
        lea edx, ss:[esp+0x5C]
        push 0x40A00000
        push edx
        call ebp
        push eax
        push edi
        call dword ptr ds : [public_5c67f8]
        add esp, 0x18
        public_537202 : nop
        inc dword ptr ss : [esp+0x10]
        fild dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+8]
        fcomp dword ptr ds : [eax+0x38]
        fnstsw ax
        test ah, 5
        jnp public_537045
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x50
        ret 
        public_537223 : nop
        fld dword ptr ds : [ecx+0x38]
        sub esp, 8
        fstp qword ptr ss : [esp]
        mov esi, 0x100001
        call dword ptr ds : [public_5c6044]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x21E
/*FIXUP push offset public_5de5f0 @0x537243*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de5f0
/*FIXUP push offset public_5de620 @0x537248*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de620
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x1C
        public_537253 : nop
        pop edi
        pop esi
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x536fb0)
    }
}

#undef public_536fd6
#undef public_536fd8
#undef public_537000
#undef public_537045
#undef public_537050
#undef public_5370f7
#undef public_5370f9
#undef public_537119
#undef public_53711b
#undef public_537202
#undef public_537223
#undef public_537253
