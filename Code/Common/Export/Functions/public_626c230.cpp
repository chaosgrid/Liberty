#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c230);

#define public_626c241 _public_626c241
#define public_626c256 _public_626c256

PROC_DECLARE(0x626c230, internal_626c230, public_626c230);
extern "C" NAKED register_t __cdecl internal_626c230()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_626c256
        push esi
        public_626c241 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        add ecx, 8
        add eax, 8
        cmp ecx, edx
        jne public_626c241
        pop esi
        public_626c256 : nop
        ret 
        UNREACHABLE_TRAP(0x626c230)
    }
}

#undef public_626c241
#undef public_626c256
