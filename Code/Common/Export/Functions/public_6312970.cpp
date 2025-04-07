#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312970);

#define public_6312990 _public_6312990

PROC_DECLARE(0x6312970, internal_6312970, public_6312970);
extern "C" NAKED register_t __cdecl internal_6312970()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        cmp esi, 1
        jl public_6312990
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax]
        inc eax
        dec esi
        cmp dl, 1
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], esi
        sete al
        pop esi
        pop ecx
        ret 
        public_6312990 : nop
        mov dl, byte ptr ss : [esp+7]
        cmp dl, 1
        sete al
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6312970)
    }
}

#undef public_6312990
