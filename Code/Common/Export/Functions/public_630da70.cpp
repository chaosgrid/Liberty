#include "Common-PCH.h"


#define public_630dab0 _public_630dab0
#define public_630dab8 _public_630dab8
#define public_630daba _public_630daba

PROC_DECLARE(0x630da70, internal_630da70, public_630da70);
extern "C" NAKED register_t __cdecl internal_630da70()
{
    __asm
    {
        push esi
        push 0xC
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_630daba
        mov cl, byte ptr ds : [esi+0xC]
        mov edx, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ds : [edx]
        mov dl, cl
        inc dl
        mov byte ptr ds : [esi+0xC], dl
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0xA], cl
        mov dword ptr ds : [eax], 0
        mov word ptr ds : [eax+8], 0x47
        mov edx, dword ptr ds : [esi]
        test edx, edx
        mov ecx, esi
        pop edi
        je public_630dab8
        mov edi, edi
        public_630dab0 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        jne public_630dab0
        public_630dab8 : nop
        mov dword ptr ds : [ecx], eax
        public_630daba : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630da70)
    }
}

#undef public_630dab0
#undef public_630dab8
#undef public_630daba
