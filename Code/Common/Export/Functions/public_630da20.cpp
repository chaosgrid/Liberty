#include "Common-PCH.h"


#define public_630da60 _public_630da60
#define public_630da68 _public_630da68
#define public_630da6a _public_630da6a

PROC_DECLARE(0x630da20, internal_630da20, public_630da20);
extern "C" NAKED register_t __cdecl internal_630da20()
{
    __asm
    {
        push esi
        push 0xC
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_630da6a
        mov cl, byte ptr ds : [esi+0xB]
        mov dl, cl
        inc dl
        mov byte ptr ds : [esi+0xB], dl
        mov edx, dword ptr ss : [esp+8]
        mov byte ptr ds : [eax+0xA], cl
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], edx
        mov word ptr ds : [eax+8], 0x73
        mov edx, dword ptr ds : [esi]
        test edx, edx
        mov ecx, esi
        je public_630da68
        lea ebx, ds:[ebx]
        public_630da60 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        jne public_630da60
        public_630da68 : nop
        mov dword ptr ds : [ecx], eax
        public_630da6a : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630da20)
    }
}

#undef public_630da60
#undef public_630da68
#undef public_630da6a
