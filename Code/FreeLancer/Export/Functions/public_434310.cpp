#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434310);
CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b90b0);

#define public_43439e _public_43439e
#define public_4343b5 _public_4343b5
#define public_43441f _public_43441f
#define public_434431 _public_434431
#define public_434540 _public_434540
#define public_43456b _public_43456b
#define public_434575 _public_434575
#define public_4345d3 _public_4345d3
#define public_4345f0 _public_4345f0
#define public_434601 _public_434601

PROC_DECLARE(0x434310, internal_434310, public_434310);
extern "C" NAKED register_t __cdecl internal_434310()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b90b0 @0x434318*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b90b0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x50
        push ebx
        push esi
        push 0xB
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4345f0
        mov esi, dword ptr ss : [esp+0x6C]
        cmp esi, 0xFFFFFFFF
        je public_4345f0
        mov eax, dword ptr ds : [public_5c6de0]
        lea edx, ss:[esp+0xC]
        push edx
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [public_5c6de0]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF4]
        cmp byte ptr ss : [esp+0x7C], bl
        je public_43439e
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        push ebx
        jmp public_4343b5
        public_43439e : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 8
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 1
        public_4343b5 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0x7C], ebx
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x60], ebx
        call public_526a20
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x7C]
        push edx
/*FIXUP push offset public_5cad80 @0x4343ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        mov eax, dword ptr ss : [esp+0x7C]
        jl public_43441f
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        mov edx, dword ptr ss : [esp+0x74]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        call public_526a20
        jmp public_434431
        public_43441f : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        je public_434431
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_434431 : nop
        mov dword ptr ss : [esp+0x14], 4
        mov eax, dword ptr ss : [esp+0x78]
        movzx edx, byte ptr ds : [eax]
        movzx ecx, byte ptr ds : [eax+1]
        mov dword ptr ss : [esp+0x7C], edx
        movzx edx, byte ptr ds : [eax+2]
        fild dword ptr ss : [esp+0x7C]
        movzx eax, byte ptr ds : [eax+3]
        fmul qword ptr ds : [public_5c89c8]
        mov dword ptr ss : [esp+0x7C], ecx
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x60], 1
        fild dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x7C], edx
        lea edx, ss:[esp+0x14]
        push edx
        fmul qword ptr ds : [public_5c89c8]
        push ebx
        fstp dword ptr ss : [esp+0x24]
        fild dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x84], eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+0x2C]
        fild dword ptr ss : [esp+0x88]
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x4C]
        fld dword ptr ss : [esp+0x80]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x44
        jnp public_43456b
        mov eax, dword ptr ds : [public_667e38]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        jne public_434540
        call public_5b73e0
        mov dword ptr ds : [public_667e38], eax
        public_434540 : nop
        mov edx, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+8]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x7C]
        or edx, 0x30
        jmp public_434575
        public_43456b : nop
        mov edx, dword ptr ss : [esp+8]
        push edx
        mov edx, dword ptr ss : [esp+0x78]
        push ebx
        public_434575 : nop
        mov eax, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x74]
        push 0x3F800000
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ss : [esp+0x14]
        sub eax, 5
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        je public_4345d3
        dec eax
        je public_434601
        dec eax
        jne public_4345f0
        public_4345d3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        je public_4345f0
        push eax
        push ebx
        call dword ptr ds : [public_5c6f80]
        push eax
        call dword ptr ds : [public_5c6ed4]
        lea ebx, ds:[ebx]
        public_4345f0 : nop
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr fs : [0], ecx
        add esp, 0x5C
        ret 
        public_434601 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_4345f0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x58]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x5C
        ret 
        UNREACHABLE_TRAP(0x434310)
    }
}

#undef public_43439e
#undef public_4343b5
#undef public_43441f
#undef public_434431
#undef public_434540
#undef public_43456b
#undef public_434575
#undef public_4345d3
#undef public_4345f0
#undef public_434601
