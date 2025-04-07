#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fd750);

#define public_66fd764 _public_66fd764
#define public_66fd76f _public_66fd76f
#define public_66fd772 _public_66fd772
#define public_66fd777 _public_66fd777

PROC_DECLARE(0x66fd750, internal_66fd750, public_66fd750);
extern "C" NAKED register_t __cdecl internal_66fd750()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_66fd777
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_66fd764 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jge public_66fd76f
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_66fd772
        public_66fd76f : nop
        mov edx, dword ptr ds : [edx+8]
        public_66fd772 : nop
        cmp edx, ecx
        jne public_66fd764
        pop esi
        public_66fd777 : nop
        ret 4
        UNREACHABLE_TRAP(0x66fd750)
    }
}

#undef public_66fd764
#undef public_66fd76f
#undef public_66fd772
#undef public_66fd777
