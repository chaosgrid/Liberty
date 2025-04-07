#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);

#define public_6ce1974 _public_6ce1974
#define public_6ce1984 _public_6ce1984

PROC_DECLARE(0x6ce1960, internal_6ce1960, public_6ce1960);
extern "C" NAKED register_t __cdecl internal_6ce1960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        mov ecx, eax
        jbe public_6ce1984
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        public_6ce1974 : nop
        mov di, word ptr ds : [edx]
        mov word ptr ds : [ecx], di
        add ecx, 2
        add edx, 2
        dec esi
        jne public_6ce1974
        pop edi
        public_6ce1984 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ce1960)
    }
}

#undef public_6ce1974
#undef public_6ce1984
