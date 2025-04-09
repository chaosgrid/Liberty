#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);

#define public_41d8b4 _public_41d8b4
#define public_41d8c4 _public_41d8c4

PROC_DECLARE(0x41d8a0, internal_41d8a0, public_41d8a0);
extern "C" NAKED register_t __cdecl internal_41d8a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        mov ecx, eax
        jbe public_41d8c4
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        public_41d8b4 : nop
        mov di, word ptr ds : [edx]
        mov word ptr ds : [ecx], di
        add ecx, 2
        add edx, 2
        dec esi
        jne public_41d8b4
        pop edi
        public_41d8c4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x41d8a0)
    }
}

#undef public_41d8b4
#undef public_41d8c4
