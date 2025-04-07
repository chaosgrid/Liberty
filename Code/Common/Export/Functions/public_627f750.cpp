#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f750);

#define public_627f764 _public_627f764
#define public_627f76e _public_627f76e
#define public_627f772 _public_627f772
#define public_627f777 _public_627f777

PROC_DECLARE(0x627f750, internal_627f750, public_627f750);
extern "C" NAKED register_t __cdecl internal_627f750()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_627f777
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_627f764 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jge public_627f76e
        mov edx, dword ptr ds : [edx+8]
        jmp public_627f772
        public_627f76e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_627f772 : nop
        cmp edx, ecx
        jne public_627f764
        pop esi
        public_627f777 : nop
        ret 4
        UNREACHABLE_TRAP(0x627f750)
    }
}

#undef public_627f764
#undef public_627f76e
#undef public_627f772
#undef public_627f777
