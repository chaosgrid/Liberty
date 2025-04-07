#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6acf712);
CLANG_FORWARD_PROC_SYMBOL(public_6acf7a6);

#define public_6acf72f _public_6acf72f
#define public_6acf76a _public_6acf76a
#define public_6acf76c _public_6acf76c

PROC_DECLARE(0x6acf712, internal_6acf712, public_6acf712);
extern "C" NAKED register_t __cdecl internal_6acf712()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push 0xFFFFFFFE
/*FIXUP push offset _public_6acf6f0 @0x6acf71c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6acf6f0
        push dword ptr fs : [0]
        mov dword ptr fs : [0], esp
        public_6acf72f : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+0xC]
        cmp esi, 0xFFFFFFFF
        je public_6acf76c
        cmp esi, dword ptr ss : [esp+0x24]
        je public_6acf76c
        lea esi, ds:[esi+esi*2]
        mov ecx, dword ptr ds : [ebx+esi*4]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        cmp dword ptr ds : [ebx+esi*4+4], 0
        jne public_6acf76a
        push 0x101
        mov eax, dword ptr ds : [ebx+esi*4+8]
        call public_6acf7a6
        call dword ptr ds : [ebx+esi*4+8]
        public_6acf76a : nop
        jmp public_6acf72f
        public_6acf76c : nop
        pop dword ptr fs : [0]
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6acf712)
    }
}

#undef public_6acf72f
#undef public_6acf76a
#undef public_6acf76c
