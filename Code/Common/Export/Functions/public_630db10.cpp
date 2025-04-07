#include "Common-PCH.h"


#define public_630db50 _public_630db50
#define public_630db58 _public_630db58
#define public_630db5a _public_630db5a

PROC_DECLARE(0x630db10, internal_630db10, public_630db10);
extern "C" NAKED register_t __cdecl internal_630db10()
{
    __asm
    {
        push esi
        push 0xC
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_630db5a
        mov cl, byte ptr ds : [esi+0xF]
        mov edx, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ds : [edx]
        mov dl, cl
        inc dl
        mov byte ptr ds : [esi+0xF], dl
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0xA], cl
        mov dword ptr ds : [eax], 0
        mov word ptr ds : [eax+8], 0x52
        mov edx, dword ptr ds : [esi]
        test edx, edx
        mov ecx, esi
        pop edi
        je public_630db58
        mov edi, edi
        public_630db50 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        jne public_630db50
        public_630db58 : nop
        mov dword ptr ds : [ecx], eax
        public_630db5a : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630db10)
    }
}

#undef public_630db50
#undef public_630db58
#undef public_630db5a
