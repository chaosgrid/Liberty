#include "Common-PCH.h"


#define public_630dbf0 _public_630dbf0
#define public_630dbf8 _public_630dbf8
#define public_630dbfa _public_630dbfa

PROC_DECLARE(0x630dbb0, internal_630dbb0, public_630dbb0);
extern "C" NAKED register_t __cdecl internal_630dbb0()
{
    __asm
    {
        push esi
        push 0xC
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_630dbfa
        mov cl, byte ptr ds : [esi+0x11]
        mov edx, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ds : [edx]
        mov dl, cl
        inc dl
        mov byte ptr ds : [esi+0x11], dl
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0xA], cl
        mov dword ptr ds : [eax], 0
        mov word ptr ds : [eax+8], 0x5A
        mov edx, dword ptr ds : [esi]
        test edx, edx
        mov ecx, esi
        pop edi
        je public_630dbf8
        mov edi, edi
        public_630dbf0 : nop
        mov ecx, edx
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        jne public_630dbf0
        public_630dbf8 : nop
        mov dword ptr ds : [ecx], eax
        public_630dbfa : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630dbb0)
    }
}

#undef public_630dbf0
#undef public_630dbf8
#undef public_630dbfa
