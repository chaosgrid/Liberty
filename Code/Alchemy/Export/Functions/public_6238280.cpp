#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206b30);
CLANG_FORWARD_PROC_SYMBOL(public_6206b80);
CLANG_FORWARD_PROC_SYMBOL(public_6206bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c10);
CLANG_FORWARD_PROC_SYMBOL(public_6206c40);
CLANG_FORWARD_PROC_SYMBOL(public_6208a70);
CLANG_FORWARD_PROC_SYMBOL(public_6238280);
CLANG_FORWARD_PROC_SYMBOL(public_62397e0);
CLANG_FORWARD_PROC_SYMBOL(public_6239800);
CLANG_FORWARD_PROC_SYMBOL(public_6239860);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_JUMP_SYMBOL(public_624a080);

#define public_6238381 _public_6238381
#define public_6238432 _public_6238432
#define public_62384c8 _public_62384c8
#define public_6238537 _public_6238537
#define public_623853e _public_623853e
#define public_623854c _public_623854c
#define public_62385c3 _public_62385c3
#define public_6238657 _public_6238657
#define public_62386d6 _public_62386d6
#define public_62386dd _public_62386dd
#define public_62386ef _public_62386ef
#define public_6238702 _public_6238702
#define public_623875b _public_623875b
#define public_623875e _public_623875e

PROC_DECLARE(0x6238280, internal_6238280, public_6238280);
extern "C" NAKED register_t __cdecl internal_6238280()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a080 @0x6238282*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a080
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        lea eax, ss:[esp+0x68]
        push edi
        lea ebp, ds:[esi+0xD8]
        push eax
        mov ecx, ebp
        call public_6239800
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], edi
        lea ecx, ss:[esp+0x20]
        xor eax, eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x68], eax
        mov dword ptr ss : [esp+0x70], eax
        call public_62397e0
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], ebx
        cmp ebx, edi
        mov byte ptr ss : [esp+0x64], 1
        mov dword ptr ss : [esp+0x20], 0
        je public_623875b
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [edx+0x5C]
        mov edx, dword ptr ds : [esi+0x90]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x2C]
        fmul dword ptr ds : [ebx+0x24]
        mov eax, dword ptr ds : [eax+0x78]
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x6C]
        mov edi, dword ptr ss : [esp+0x6C]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fmul dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x7C]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x80]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fld dword ptr ss : [esp+0x6C]
        fcomp 
        fnstsw ax
        and eax, 0x4100
        jne public_6238381
        fstp st(0)
        fld dword ptr ss : [esp+0x6C]
        public_6238381 : nop
        mov edi, dword ptr ss : [esp+0x70]
        lea eax, ds:[ebx+0xC]
        mov ecx, edi
        mov edx, dword ptr ds : [eax]
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        fstp dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov ecx, ebp
        call public_6239860
        mov eax, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_62386ef
        fld dword ptr ds : [ebx+0x2C]
        fmul dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [edx+0x78]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x6C]
        mov ebp, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fmul dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x7C]
        push ebp
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x80]
        push ebp
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fld dword ptr ss : [esp+0x6C]
        fcomp 
        fnstsw ax
        and eax, 0x4100
        jne public_6238432
        fstp st(0)
        fld dword ptr ss : [esp+0x6C]
        public_6238432 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        push edi
        fmul dword ptr ss : [esp+0x14]
        lea eax, ss:[ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x40], ecx
        lea ecx, ss:[esp+0x40]
        mov edx, dword ptr ds : [eax+4]
        push ecx
        mov dword ptr ss : [esp+0x48], edx
        lea edx, ss:[esp+0x2C]
        mov eax, dword ptr ds : [eax+8]
        push edx
        fstp dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x50], eax
        call public_6206c10
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fstp dword ptr ss : [esp+0x78]
        mov eax, dword ptr ss : [esp+0x78]
        push eax
        call public_6206b30
        fmul dword ptr ss : [esp+0x7C]
        add esp, 0x10
        fst dword ptr ss : [esp+0x6C]
        fadd dword ptr ds : [edi+0xC]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 5
        jp public_62384c8
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        jmp public_623853e
        public_62384c8 : nop
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x6C]
        fcomp dword ptr ds : [edi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_623853e
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [edi+0xC]
        fadd dword ptr ss : [esp+0x6C]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x6C]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_6238537
        mov ecx, dword ptr ss : [esp+0x6C]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6206bb0
        push ecx
        lea edx, ss:[esp+0x28]
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ds : [edi+0xC]
        lea eax, ss:[esp+0x34]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6206c40
        add esp, 0xC
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, edi
        call public_6206b80
        public_6238537 : nop
        mov edx, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [edi+0xC], edx
        public_623853e : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x1C], ebx
        je public_62386ef
        public_623854c : nop
        fld dword ptr ds : [ebx+0x2C]
        fmul dword ptr ds : [ebx+0x24]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        mov eax, dword ptr ds : [eax+0x78]
        fstp dword ptr ss : [esp+0x6C]
        mov ebp, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fmul dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x7C]
        push ebp
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax+0x80]
        push ebp
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fld dword ptr ss : [esp+0x6C]
        fcomp 
        fnstsw ax
        and eax, 0x4100
        jne public_62385c3
        fstp st(0)
        fld dword ptr ss : [esp+0x6C]
        public_62385c3 : nop
        fmul dword ptr ss : [esp+0x10]
        lea eax, ds:[ebx+0xC]
        push edi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x50], ecx
        lea ecx, ss:[esp+0x50]
        mov edx, dword ptr ds : [eax+4]
        push ecx
        mov dword ptr ss : [esp+0x58], edx
        lea edx, ss:[esp+0x2C]
        mov eax, dword ptr ds : [eax+8]
        push edx
        fstp dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x60], eax
        call public_6206c10
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fstp dword ptr ss : [esp+0x78]
        mov eax, dword ptr ss : [esp+0x78]
        push eax
        call public_6206b30
        fmul dword ptr ss : [esp+0x7C]
        add esp, 0x10
        fst dword ptr ss : [esp+0x6C]
        fadd dword ptr ds : [edi+0xC]
        fcomp dword ptr ss : [esp+0x58]
        fnstsw ax
        test ah, 5
        jp public_6238657
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        jmp public_62386dd
        public_6238657 : nop
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [esp+0x6C]
        fcomp dword ptr ds : [edi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_62386dd
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ds : [edi+0xC]
        fadd dword ptr ss : [esp+0x6C]
        fmul qword ptr ds : [public_624bab0]
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x6C]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_62386d6
        mov ecx, dword ptr ss : [esp+0x6C]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6206bb0
        push ecx
        lea edx, ss:[esp+0x28]
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ds : [edi+0xC]
        lea eax, ss:[esp+0x34]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6206c40
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [edi]
        add esp, 0xC
        fstp dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        public_62386d6 : nop
        mov ecx, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [edi+0xC], ecx
        public_62386dd : nop
        mov ebx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x18]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_623854c
        public_62386ef : nop
        mov eax, dword ptr ds : [public_6257b8c]
        test eax, eax
        jne public_6238702
        call public_623e830
        mov dword ptr ds : [public_6257b8c], eax
        public_6238702 : nop
        mov edx, dword ptr ds : [eax]
        add esi, 0x4C
        push edi
        lea ecx, ss:[esp+0x34]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x2C], ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x54]
        call public_6208a70
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], ecx
        xor eax, eax
        jmp public_623875e
        public_623875b : nop
        or eax, 0xFFFFFFFF
        public_623875e : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 8
        UNREACHABLE_TRAP(0x6238280)
    }
}

#undef public_6238381
#undef public_6238432
#undef public_62384c8
#undef public_6238537
#undef public_623853e
#undef public_623854c
#undef public_62385c3
#undef public_6238657
#undef public_62386d6
#undef public_62386dd
#undef public_62386ef
#undef public_6238702
#undef public_623875b
#undef public_623875e
