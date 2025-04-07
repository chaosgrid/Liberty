#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_548ef0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_542dcb _public_542dcb
#define public_542dcd _public_542dcd
#define public_542dec _public_542dec
#define public_542dff _public_542dff
#define public_542e01 _public_542e01

PROC_DECLARE(0x542da0, internal_542da0, public_542da0);
extern "C" NAKED register_t __cdecl internal_542da0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        fadd dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        push edi
        fst dword ptr ds : [esi+0x20]
        je public_542dff
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        jne public_542dcb
        fcomp dword ptr ds : [public_5dfb34]
        fnstsw ax
        test ah, 1
        jne public_542e01
        jmp public_542dcd
        public_542dcb : nop
        fstp st(0)
        public_542dcd : nop
        mov edi, dword ptr ds : [esi+0x18]
        call public_54baf0
        cmp edi, eax
        jne public_542dec
        add esi, 0x1C
        push esi
        call public_548ef0
        add esp, 4
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_542dec : nop
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax+0x15C]
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_542dff : nop
        fstp st(0)
        public_542e01 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x542da0)
    }
}

#undef public_542dcb
#undef public_542dcd
#undef public_542dec
#undef public_542dff
#undef public_542e01
