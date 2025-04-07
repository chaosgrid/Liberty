#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6348900);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6348926 _public_6348926
#define public_634893f _public_634893f

PROC_DECLARE(0x6348900, internal_6348900, public_6348900);
extern "C" NAKED register_t __cdecl internal_6348900()
{
    __asm
    {
        push esi
        push edi
        push 0x14
        mov esi, ecx
        call public_6391d9c
        xor edi, edi
        add esp, 4
        cmp eax, edi
        je public_6348926
        lea ecx, ds:[eax+0xC]
        mov word ptr ds : [eax+6], di
        mov dword ptr ds : [eax+8], ecx
        mov word ptr ds : [eax+4], 2
        mov edi, eax
        public_6348926 : nop
        mov edx, dword ptr ss : [esp+0xC]
        add esi, 0x1C
        mov dword ptr ds : [edi], edx
        mov ax, word ptr ds : [esi+2]
        cmp ax, word ptr ds : [esi]
        jb public_634893f
        mov ecx, esi
        call public_63441a0
        public_634893f : nop
        mov edx, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov dword ptr ds : [edx+ecx*4], edi
        inc word ptr ds : [esi+2]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6348900)
    }
}

#undef public_6348926
#undef public_634893f
