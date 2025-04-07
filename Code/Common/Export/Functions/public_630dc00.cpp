#include "Common-PCH.h"


#define public_630dc40 _public_630dc40
#define public_630dc48 _public_630dc48
#define public_630dc4a _public_630dc4a

PROC_DECLARE(0x630dc00, internal_630dc00, public_630dc00);
extern "C" NAKED register_t __cdecl internal_630dc00()
{
    __asm
    {
        push esi
        push 0xC
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_630dc4a
        mov cl, byte ptr ds : [esi+0x12]
        mov edx, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ds : [edx]
        mov dl, cl
        inc dl
        mov byte ptr ds : [esi+0x12], dl
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0xA], cl
        mov dword ptr ds : [eax], 0
        mov word ptr ds : [eax+8], 0x4F
        mov edx, dword ptr ds : [esi]
        test edx, edx
        mov ecx, esi
        pop edi
        je public_630dc48
        mov edi, edi
        public_630dc40 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        jne public_630dc40
        public_630dc48 : nop
        mov dword ptr ds : [ecx], eax
        public_630dc4a : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630dc00)
    }
}

#undef public_630dc40
#undef public_630dc48
#undef public_630dc4a
