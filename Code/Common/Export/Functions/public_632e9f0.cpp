#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632ea2a _public_632ea2a
#define public_632ea62 _public_632ea62
#define public_632ea6d _public_632ea6d

PROC_DECLARE(0x632e9f0, internal_632e9f0, public_632e9f0);
extern "C" NAKED register_t __cdecl internal_632e9f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ds : [public_639902c]
/*FIXUP push offset public_63a4948 @0x632e9fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4948
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_632ea2a
        push 0xC
        call public_6391d9c
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_632ea6d
        pop edi
        mov dword ptr ds : [eax], offset public_63a4920
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        pop esi
        ret 
/*FIXUP public_632ea2a : nop
        push offset public_63a4914 @0x632ea2a*/
  FIXUP public_632ea2a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4914
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_632ea62
        push 0x14
        call public_6391d9c
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_632ea6d
        mov dl, byte ptr ss : [esp+0xC]
        pop edi
        mov byte ptr ds : [eax+4], dl
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], offset public_63a48ec
        pop esi
        ret 
/*FIXUP public_632ea62 : nop
        push offset public_63a48dc @0x632ea62*/
  FIXUP public_632ea62 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a48dc
        push esi
        call edi
        add esp, 8
        public_632ea6d : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x632e9f0)
    }
}

#undef public_632ea2a
#undef public_632ea62
#undef public_632ea6d
