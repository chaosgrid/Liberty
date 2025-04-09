#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4420a0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_4420b3 _public_4420b3
#define public_4420e4 _public_4420e4
#define public_44211b _public_44211b

PROC_DECLARE(0x4420a0, internal_4420a0, public_4420a0);
extern "C" NAKED register_t __cdecl internal_4420a0()
{
    __asm
    {
        sub esp, 0x200
        push esi
        push edi
        mov edi, dword ptr ds : [public_5c71ec]
        mov esi, 1
        public_4420b3 : nop
        push esi
        lea eax, ss:[esp+0xC]
/*FIXUP push offset public_5cb81c @0x4420b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb81c
        push eax
        call edi
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_59da10
        add esp, 0x10
        test eax, eax
        je public_4420e4
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_4420e4
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx]
        public_4420e4 : nop
        push esi
        lea eax, ss:[esp+0x10C]
/*FIXUP push offset public_5cb80c @0x4420ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb80c
        push eax
        call edi
        lea ecx, ss:[esp+0x114]
        push ecx
        call public_59da10
        add esp, 0x10
        test eax, eax
        je public_44211b
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_44211b
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx]
        public_44211b : nop
        inc esi
        cmp esi, 0xA
        jl public_4420b3
        pop edi
        pop esi
        add esp, 0x200
        ret 
        UNREACHABLE_TRAP(0x4420a0)
    }
}

#undef public_4420b3
#undef public_4420e4
#undef public_44211b
