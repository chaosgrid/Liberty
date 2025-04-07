#include "Common-PCH.h"


#define public_630d9c0 _public_630d9c0
#define public_630d9c8 _public_630d9c8
#define public_630d9ca _public_630d9ca

PROC_DECLARE(0x630d980, internal_630d980, public_630d980);
extern "C" NAKED register_t __cdecl internal_630d980()
{
    __asm
    {
        push esi
        push 0xC
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_630d9ca
        mov cl, byte ptr ds : [esi+9]
        mov edx, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ds : [edx]
        mov dl, cl
        inc dl
        mov byte ptr ds : [esi+9], dl
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0xA], cl
        mov dword ptr ds : [eax], 0
        mov word ptr ds : [eax+8], 0x53
        mov edx, dword ptr ds : [esi]
        test edx, edx
        mov ecx, esi
        pop edi
        je public_630d9c8
        mov edi, edi
        public_630d9c0 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        jne public_630d9c0
        public_630d9c8 : nop
        mov dword ptr ds : [ecx], eax
        public_630d9ca : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630d980)
    }
}

#undef public_630d9c0
#undef public_630d9c8
#undef public_630d9ca
