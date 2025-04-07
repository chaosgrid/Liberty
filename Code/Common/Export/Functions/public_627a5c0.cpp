#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

#define public_627a5fd _public_627a5fd
#define public_627a624 _public_627a624
#define public_627a63d _public_627a63d
#define public_627a63f _public_627a63f
#define public_627a643 _public_627a643
#define public_627a658 _public_627a658

PROC_DECLARE(0x627a5c0, internal_627a5c0, public_627a5c0);
extern "C" NAKED register_t __cdecl internal_627a5c0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        mov bl, 1
        call public_630d3f0
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_63fbbc8
        call public_6301640
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_63fbbcc]
        je public_627a5fd
        lea ecx, ds:[eax+0x10]
        test ecx, ecx
        jne public_627a624
        public_627a5fd : nop
        mov edx, dword ptr ds : [public_6399028]
        push esi
        push 0xE1
/*FIXUP push offset public_639b130 @0x627a609*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b130
        mov eax, 0x100002
/*FIXUP push offset public_639b1c0 @0x627a613*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b1c0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop esi
        mov al, bl
        pop ebx
        pop ecx
        ret 
        public_627a624 : nop
        mov edx, dword ptr ds : [ecx+8]
        xor al, al
        test edx, edx
        jne public_627a643
        fld dword ptr ds : [public_63fbbc4]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 1
        je public_627a658
        public_627a63d : nop
        xor al, al
        public_627a63f : nop
        pop esi
        pop ebx
        pop ecx
        ret 
        public_627a643 : nop
        cmp edx, 1
        jne public_627a63f
        fld dword ptr ds : [public_63fbbc4]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 5
        jp public_627a63d
        public_627a658 : nop
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x627a5c0)
    }
}

#undef public_627a5fd
#undef public_627a624
#undef public_627a63d
#undef public_627a63f
#undef public_627a643
#undef public_627a658
