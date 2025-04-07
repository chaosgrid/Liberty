#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6301640);

#define public_627a66f _public_627a66f
#define public_627a69d _public_627a69d
#define public_627a6c4 _public_627a6c4
#define public_627a6dd _public_627a6dd
#define public_627a6df _public_627a6df
#define public_627a6e5 _public_627a6e5
#define public_627a6fa _public_627a6fa

PROC_DECLARE(0x627a660, internal_627a660, public_627a660);
extern "C" NAKED register_t __cdecl internal_627a660()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jne public_627a66f
        mov al, 1
        pop esi
        pop ecx
        ret 
        public_627a66f : nop
        push ebx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_63fbbc8
        mov bl, 1
        mov dword ptr ss : [esp+0x18], esi
        call public_6301640
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_63fbbcc]
        je public_627a69d
        lea ecx, ds:[eax+0x10]
        test ecx, ecx
        jne public_627a6c4
        public_627a69d : nop
        mov edx, dword ptr ds : [public_6399028]
        push esi
        push 0xD4
/*FIXUP push offset public_639b130 @0x627a6a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b130
        mov eax, 0x100002
/*FIXUP push offset public_639b170 @0x627a6b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b170
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov al, bl
        pop ebx
        pop esi
        pop ecx
        ret 
        public_627a6c4 : nop
        mov edx, dword ptr ds : [ecx+8]
        xor al, al
        test edx, edx
        jne public_627a6e5
        fld dword ptr ds : [public_63fbbc4]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 1
        je public_627a6fa
        public_627a6dd : nop
        xor al, al
        public_627a6df : nop
        mov bl, al
        pop ebx
        pop esi
        pop ecx
        ret 
        public_627a6e5 : nop
        cmp edx, 1
        jne public_627a6df
        fld dword ptr ds : [public_63fbbc4]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 5
        jp public_627a6dd
        public_627a6fa : nop
        mov al, 1
        mov bl, al
        pop ebx
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x627a660)
    }
}

#undef public_627a66f
#undef public_627a69d
#undef public_627a6c4
#undef public_627a6dd
#undef public_627a6df
#undef public_627a6e5
#undef public_627a6fa
