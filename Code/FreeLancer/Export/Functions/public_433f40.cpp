#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433f40);
CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9088);

#define public_433f7b _public_433f7b
#define public_433fd5 _public_433fd5
#define public_433fec _public_433fec
#define public_434063 _public_434063
#define public_434071 _public_434071
#define public_43415e _public_43415e
#define public_4341e9 _public_4341e9
#define public_434213 _public_434213
#define public_43421c _public_43421c
#define public_434288 _public_434288
#define public_434297 _public_434297
#define public_4342b4 _public_4342b4
#define public_4342c8 _public_4342c8
#define public_4342dc _public_4342dc
#define public_4342f0 _public_4342f0

PROC_DECLARE(0x433f40, internal_433f40, public_433f40);
extern "C" NAKED register_t __cdecl internal_433f40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9088 @0x433f48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9088
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x60
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x7C]
        or esi, 0xFFFFFFFF
        cmp edi, esi
        jne public_433f7b
        pop edi
        mov eax, 1
        pop esi
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 
        public_433f7b : nop
        mov eax, dword ptr ds : [public_5c6de0]
        push ebx
        push ebp
        lea edx, ss:[esp+0x10]
        push edx
        xor ebx, ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [public_5c6de0]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF4]
        cmp byte ptr ss : [esp+0x90], bl
        je public_433fd5
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        push ebx
        jmp public_433fec
        public_433fd5 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 8
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 1
        public_433fec : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov dword ptr ss : [esp+0x84], ebx
        mov dword ptr ss : [esp+0x90], ebx
        lea ecx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0x78], ebx
        call public_526a20
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x90]
        push edx
/*FIXUP push offset public_5cad80 @0x43402f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        mov eax, dword ptr ss : [esp+0x90]
        jl public_434063
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x84]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x20]
        lea ecx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0x78], esi
        call public_526a20
        jmp public_434071
        public_434063 : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x78], esi
        je public_434071
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_434071 : nop
        mov dword ptr ss : [esp+0x18], 4
        mov eax, dword ptr ss : [esp+0x8C]
        movzx edx, byte ptr ds : [eax]
        movzx ecx, byte ptr ds : [eax+1]
        mov dword ptr ss : [esp+0x90], edx
        movzx edx, byte ptr ds : [eax+2]
        fild dword ptr ss : [esp+0x90]
        movzx eax, byte ptr ds : [eax+3]
        fmul qword ptr ds : [public_5c89c8]
        mov dword ptr ss : [esp+0x90], ecx
        fstp dword ptr ss : [esp+0x1C]
        mov esi, 1
        fild dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x90], edx
        lea edx, ss:[esp+0x18]
        push edx
        fmul qword ptr ds : [public_5c89c8]
        push ebx
        mov dword ptr ss : [esp+0x80], esi
        fstp dword ptr ss : [esp+0x28]
        fild dword ptr ss : [esp+0x98]
        mov dword ptr ss : [esp+0x98], eax
        mov eax, dword ptr ss : [esp+0x8C]
        push eax
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+0x30]
        fild dword ptr ss : [esp+0x9C]
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x4C]
        mov dword ptr ss : [esp+0x2C], esi
        mov cl, byte ptr ss : [esp+0x98]
        xor eax, eax
        cmp cl, bl
        setne al
        lea edx, ss:[esp+0x2C]
        push edx
        push 0xA
        mov byte ptr ss : [esp+0x80], 2
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov esi, dword ptr ss : [esp+0x9C]
        mov al, byte ptr ss : [esp+0x88]
        or esi, 0x100
        cmp al, bl
        jne public_43415e
        or esi, 0x2000
        public_43415e : nop
        fld dword ptr ss : [esp+0x94]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x44
        jnp public_434213
        mov eax, dword ptr ds : [public_667e38]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x60], 0x3F800000
        mov dword ptr ss : [esp+0x50], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        jne public_4341e9
        call public_5b73e0
        mov dword ptr ds : [public_667e38], eax
        public_4341e9 : nop
        mov edx, dword ptr ss : [esp+0x94]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+0x84]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        or esi, 0x30
        jmp public_43421c
        public_434213 : nop
        mov edx, dword ptr ss : [esp+0x84]
        push edx
        push ebx
        public_43421c : nop
        mov eax, dword ptr ds : [public_5c6df0]
        mov edx, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 0x3F800000
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ss : [esp+0x10]
        mov ebp, eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ss : [esp+0x2C]
        sub eax, 5
        mov esi, dword ptr ds : [public_5c6ed4]
        mov edi, dword ptr ds : [public_5c6f80]
        mov byte ptr ss : [esp+0x78], 1
        je public_434288
        dec eax
        je public_4342b4
        dec eax
        jne public_434297
        public_434288 : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_434297
        push eax
        push ebx
        call edi
        push eax
        call esi
        public_434297 : nop
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, 5
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        je public_4342dc
        dec eax
        je public_4342c8
        dec eax
        je public_4342dc
        jmp public_4342f0
        public_4342b4 : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x30], ebx
        je public_434297
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_434297
        public_4342c8 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_4342f0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_4342f0
        public_4342dc : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        je public_4342f0
        push eax
        push ebx
        call edi
        push eax
        call esi
        nop 
        lea esp, ss:[esp]
        public_4342f0 : nop
        mov ecx, dword ptr ss : [esp+0x70]
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x433f40)
    }
}

#undef public_433f7b
#undef public_433fd5
#undef public_433fec
#undef public_434063
#undef public_434071
#undef public_43415e
#undef public_4341e9
#undef public_434213
#undef public_43421c
#undef public_434288
#undef public_434297
#undef public_4342b4
#undef public_4342c8
#undef public_4342dc
#undef public_4342f0
