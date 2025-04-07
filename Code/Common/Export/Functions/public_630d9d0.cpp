#include "Common-PCH.h"


#define public_630da10 _public_630da10
#define public_630da18 _public_630da18
#define public_630da1a _public_630da1a

PROC_DECLARE(0x630d9d0, internal_630d9d0, public_630d9d0);
extern "C" NAKED register_t __cdecl internal_630d9d0()
{
    __asm
    {
        push esi
        push 0xC
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_630da1a
        mov cl, byte ptr ds : [esi+0xA]
        mov edx, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ds : [edx]
        mov dl, cl
        inc dl
        mov byte ptr ds : [esi+0xA], dl
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0xA], cl
        mov dword ptr ds : [eax], 0
        mov word ptr ds : [eax+8], 0x42
        mov edx, dword ptr ds : [esi]
        test edx, edx
        mov ecx, esi
        pop edi
        je public_630da18
        mov edi, edi
        public_630da10 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        jne public_630da10
        public_630da18 : nop
        mov dword ptr ds : [ecx], eax
        public_630da1a : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630d9d0)
    }
}

#undef public_630da10
#undef public_630da18
#undef public_630da1a
