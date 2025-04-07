#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef5645);

#define public_6ef5670 _public_6ef5670

PROC_DECLARE(0x6ef5645, internal_6ef5645, public_6ef5645);
extern "C" NAKED register_t __cdecl internal_6ef5645()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0
        and dword ptr ds : [esi], 0
        call dword ptr ds : [public_6efc01c]
        cmp word ptr ds : [eax], 0x5A4D
        jne public_6ef5670
        mov ecx, dword ptr ds : [eax+0x3C]
        test ecx, ecx
        je public_6ef5670
        add eax, ecx
        mov cl, byte ptr ds : [eax+0x1A]
        mov byte ptr ds : [esi], cl
        mov al, byte ptr ds : [eax+0x1B]
        mov byte ptr ds : [esi+1], al
        public_6ef5670 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef5645)
    }
}

#undef public_6ef5670
