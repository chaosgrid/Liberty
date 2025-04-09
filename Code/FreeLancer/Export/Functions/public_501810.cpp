#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_501810);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_501821 _public_501821
#define public_501829 _public_501829
#define public_50184b _public_50184b

PROC_DECLARE(0x501810, internal_501810, public_501810);
extern "C" NAKED register_t __cdecl internal_501810()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        jne public_501821
        xor ecx, ecx
        jmp public_501829
        public_501821 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        sub ecx, eax
        sar ecx, 4
        public_501829 : nop
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+4], ecx
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x44
        jp public_50184b
        mov eax, dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+ecx*4]
        pop esi
        add esp, 8
        ret 4
        public_50184b : nop
        fild dword ptr ss : [esp+4]
        lea ecx, ss:[esp+4]
        push ecx
        sub esp, 8
        fmul dword ptr ss : [esp+0x1C]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c7130]
        fld qword ptr ss : [esp+0x10]
        add esp, 0xC
        call public_5b7ec0
        fld st(0)
        mov ecx, dword ptr ds : [esi+0x14]
        shl eax, 4
        fmul dword ptr ds : [eax+ecx+0xC]
        add eax, ecx
        pop esi
        fadd dword ptr ds : [eax+8]
        fmul st, st(1)
        fadd dword ptr ds : [eax+4]
        fmulp 
        fadd dword ptr ds : [eax]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x501810)
    }
}

#undef public_501821
#undef public_501829
#undef public_50184b
