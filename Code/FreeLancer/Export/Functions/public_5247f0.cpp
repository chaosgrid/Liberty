#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5247f0);
CLANG_FORWARD_PROC_SYMBOL(public_54d950);

#define public_524813 _public_524813
#define public_524823 _public_524823
#define public_524833 _public_524833
#define public_524840 _public_524840
#define public_52486f _public_52486f

PROC_DECLARE(0x5247f0, internal_5247f0, public_5247f0);
extern "C" NAKED register_t __cdecl internal_5247f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        cmp edx, dword ptr ds : [ecx+0x154]
        push esi
        push edi
        jge public_524813
        test edx, edx
        jl public_524813
        pop edi
        pop esi
        mov dword ptr ss : [esp+4], edx
        add ecx, 0xFC
        jmp public_54d950
        public_524813 : nop
        mov eax, dword ptr ds : [ecx+0x188]
        mov esi, dword ptr ds : [ecx+0x18C]
        cmp eax, esi
        je public_524840
        public_524823 : nop
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [ecx+0x5C]
        cmp edx, edi
        jl public_524833
        add edi, dword ptr ds : [ecx+0x58]
        cmp edx, edi
        jl public_52486f
        public_524833 : nop
        add eax, 4
        cmp eax, esi
        jne public_524823
        lea ebx, ds:[ebx]
/*FIXUP public_524840 : nop
        push offset public_5dc8d0 @0x524840*/
  FIXUP public_524840 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc8d0
        push 0x6AD
/*FIXUP push offset public_5dc47c @0x52484a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x524854*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        fld dword ptr ds : [public_5c75dc]
        add esp, 0x14
        pop edi
        pop esi
        ret 4
        public_52486f : nop
        mov ecx, dword ptr ds : [eax]
        pop edi
        pop esi
        mov dword ptr ss : [esp+4], edx
        jmp public_54d950
        UNREACHABLE_TRAP(0x5247f0)
    }
}

#undef public_524813
#undef public_524823
#undef public_524833
#undef public_524840
#undef public_52486f
