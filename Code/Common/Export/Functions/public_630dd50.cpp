#include "Common-PCH.h"


#define public_630dd90 _public_630dd90
#define public_630dd98 _public_630dd98
#define public_630dd9a _public_630dd9a

PROC_DECLARE(0x630dd50, internal_630dd50, public_630dd50);
extern "C" NAKED register_t __cdecl internal_630dd50()
{
    __asm
    {
        push esi
        push 0xC
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_630dd9a
        mov cl, byte ptr ds : [esi+0x15]
        mov dl, cl
        inc dl
        mov byte ptr ds : [esi+0x15], dl
        mov edx, dword ptr ss : [esp+8]
        mov byte ptr ds : [eax+0xA], cl
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], edx
        mov word ptr ds : [eax+8], 0x4C
        mov edx, dword ptr ds : [esi]
        test edx, edx
        mov ecx, esi
        je public_630dd98
        lea ebx, ds:[ebx]
        public_630dd90 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        jne public_630dd90
        public_630dd98 : nop
        mov dword ptr ds : [ecx], eax
        public_630dd9a : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630dd50)
    }
}

#undef public_630dd90
#undef public_630dd98
#undef public_630dd9a
