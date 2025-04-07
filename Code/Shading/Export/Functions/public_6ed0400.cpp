#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0400);

#define public_6ed0418 _public_6ed0418

PROC_DECLARE(0x6ed0400, internal_6ed0400, public_6ed0400);
extern "C" NAKED register_t __cdecl internal_6ed0400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed583c]
        cmp eax, offset public_6ed5838
        push esi
        mov esi, eax
        jne public_6ed0418
        add dword ptr ds : [public_6ed5840], 3
        pop esi
        ret 
        public_6ed0418 : nop
        mov dl, byte ptr ss : [esp+8]
        mov ecx, eax
        mov byte ptr ds : [eax], dl
        inc ecx
        mov byte ptr ds : [ecx], 0
        inc ecx
        mov byte ptr ds : [ecx], 0
        inc ecx
        mov eax, esi
        mov dword ptr ds : [public_6ed583c], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ed0400)
    }
}

#undef public_6ed0418
