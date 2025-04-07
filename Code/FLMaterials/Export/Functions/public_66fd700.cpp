#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fd700);

#define public_66fd714 _public_66fd714
#define public_66fd71e _public_66fd71e
#define public_66fd722 _public_66fd722
#define public_66fd727 _public_66fd727

PROC_DECLARE(0x66fd700, internal_66fd700, public_66fd700);
extern "C" NAKED register_t __cdecl internal_66fd700()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_66fd727
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_66fd714 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jge public_66fd71e
        mov edx, dword ptr ds : [edx+8]
        jmp public_66fd722
        public_66fd71e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_66fd722 : nop
        cmp edx, ecx
        jne public_66fd714
        pop esi
        public_66fd727 : nop
        ret 4
        UNREACHABLE_TRAP(0x66fd700)
    }
}

#undef public_66fd714
#undef public_66fd71e
#undef public_66fd722
#undef public_66fd727
