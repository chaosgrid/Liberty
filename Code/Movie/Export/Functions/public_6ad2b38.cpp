#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad2b38);

#define public_6ad2b63 _public_6ad2b63

PROC_DECLARE(0x6ad2b38, internal_6ad2b38, public_6ad2b38);
extern "C" NAKED register_t __cdecl internal_6ad2b38()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0
        and dword ptr ds : [esi], 0
        call dword ptr ds : [public_6ada064]
        cmp word ptr ds : [eax], 0x5A4D
        jne public_6ad2b63
        mov ecx, dword ptr ds : [eax+0x3C]
        test ecx, ecx
        je public_6ad2b63
        add eax, ecx
        mov cl, byte ptr ds : [eax+0x1A]
        mov byte ptr ds : [esi], cl
        mov al, byte ptr ds : [eax+0x1B]
        mov byte ptr ds : [esi+1], al
        public_6ad2b63 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad2b38)
    }
}

#undef public_6ad2b63
