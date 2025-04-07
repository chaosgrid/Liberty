#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4779a0);

#define public_4779b3 _public_4779b3
#define public_4779d0 _public_4779d0
#define public_4779fa _public_4779fa
#define public_477a0a _public_477a0a
#define public_477a20 _public_477a20
#define public_477a28 _public_477a28
#define public_477a40 _public_477a40
#define public_477a4a _public_477a4a
#define public_477a7c _public_477a7c
#define public_477a83 _public_477a83

PROC_DECLARE(0x4779a0, internal_4779a0, public_4779a0);
extern "C" NAKED register_t __cdecl internal_4779a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 0x80
        test eax, eax
        jge public_4779fa
        mov eax, 0x2140
        public_4779b3 : nop
        mov ecx, dword ptr ss : [esp+0x84]
        mov edx, dword ptr ds : [public_67eca8]
        push 0xFF
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        public_4779d0 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x8C]
        test ebx, ebx
        jne public_477a0a
        mov eax, dword ptr ss : [esp+0x88]
/*FIXUP push offset public_5d0ed8 @0x4779e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ed8
        push eax
        call dword ptr ds : [public_5c70ac]
        add esp, 8
        pop ebx
        add esp, 0x80
        ret 
        public_4779fa : nop
        jne public_4779b3
        mov eax, dword ptr ss : [esp+0x84]
        mov word ptr ds : [eax], 0
        jmp public_4779d0
        public_477a0a : nop
        push ebp
        mov ebp, dword ptr ds : [public_5c70ac]
        push esi
        push edi
        mov edi, 0xF4240
        xor cl, cl
        lea ebx, ds:[ebx]
        public_477a20 : nop
        cmp ebx, edi
        jge public_477a28
        test cl, cl
        je public_477a83
        public_477a28 : nop
        mov eax, ebx
        cdq 
        idiv edi
        test cl, cl
        mov esi, eax
        push esi
        je public_477a40
/*FIXUP push offset public_5d0ecc @0x477a34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ecc
        lea ecx, ss:[esp+0x18]
        push ecx
        jmp public_477a4a
/*FIXUP public_477a40 : nop
        push offset public_5d0ec4 @0x477a40*/
  FIXUP public_477a40 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        lea edx, ss:[esp+0x18]
        push edx
        public_477a4a : nop
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ss : [esp+0xA0]
        add esp, 0xC
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        call ebp
        add esp, 8
        cmp edi, 1
        jle public_477a7c
        mov edx, dword ptr ss : [esp+0x94]
/*FIXUP push offset public_5d0ec0 @0x477a71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec0
        push edx
        call ebp
        add esp, 8
        public_477a7c : nop
        imul esi, edi
        sub ebx, esi
        mov cl, 1
        public_477a83 : nop
        mov eax, 0x10624DD3
        imul edi
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        test edi, edi
        jg public_477a20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4779a0)
    }
}

#undef public_4779b3
#undef public_4779d0
#undef public_4779fa
#undef public_477a0a
#undef public_477a20
#undef public_477a28
#undef public_477a40
#undef public_477a4a
#undef public_477a7c
#undef public_477a83
