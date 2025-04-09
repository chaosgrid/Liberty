#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412070);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_43ba90);
CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_447cd0);

#define public_44d3c5 _public_44d3c5
#define public_44d3ec _public_44d3ec
#define public_44d3fd _public_44d3fd
#define public_44d404 _public_44d404

PROC_DECLARE(0x44d380, internal_44d380, public_44d380);
extern "C" NAKED register_t __cdecl internal_44d380()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_44d404
        cmp eax, 1
        jne public_44d3c5
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [esi+0x14]
        fst dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [public_61650c]
        fnstsw ax
        test ah, 1
        jne public_44d404
        push 1
        mov dword ptr ds : [esi+0xC], 2
        call public_41dda0
        push 0x3F800000
        call public_412070
        add esp, 8
        pop esi
        ret 4
        public_44d3c5 : nop
        cmp eax, 2
        jne public_44d404
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_44d3ec
        push eax
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        mov ecx, offset public_668708
        call public_43ba90
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 4
        public_44d3ec : nop
        cmp eax, 1
        jne public_44d3fd
        call public_446be0
        mov ecx, eax
        call public_447cd0
        public_44d3fd : nop
        mov dword ptr ds : [esi+0xC], 0
        public_44d404 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x44d380)
    }
}

#undef public_44d3c5
#undef public_44d3ec
#undef public_44d3fd
#undef public_44d404
