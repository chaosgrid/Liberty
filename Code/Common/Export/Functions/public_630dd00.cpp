#include "Common-PCH.h"


#define public_630dd40 _public_630dd40
#define public_630dd48 _public_630dd48
#define public_630dd4a _public_630dd4a

PROC_DECLARE(0x630dd00, internal_630dd00, public_630dd00);
extern "C" NAKED register_t __cdecl internal_630dd00()
{
    __asm
    {
        push esi
        push 0xC
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_630dd4a
        mov cl, byte ptr ds : [esi+0x14]
        mov dl, cl
        inc dl
        mov byte ptr ds : [esi+0x14], dl
        mov edx, dword ptr ss : [esp+8]
        mov byte ptr ds : [eax+0xA], cl
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], edx
        mov word ptr ds : [eax+8], 0x49
        mov edx, dword ptr ds : [esi]
        test edx, edx
        mov ecx, esi
        je public_630dd48
        lea ebx, ds:[ebx]
        public_630dd40 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        jne public_630dd40
        public_630dd48 : nop
        mov dword ptr ds : [ecx], eax
        public_630dd4a : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630dd00)
    }
}

#undef public_630dd40
#undef public_630dd48
#undef public_630dd4a
