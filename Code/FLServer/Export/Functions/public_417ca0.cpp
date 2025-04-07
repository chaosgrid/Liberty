#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417ca0);

#define public_417cb4 _public_417cb4
#define public_417cbe _public_417cbe
#define public_417cc2 _public_417cc2
#define public_417cc7 _public_417cc7

PROC_DECLARE(0x417ca0, internal_417ca0, public_417ca0);
extern "C" NAKED register_t __cdecl internal_417ca0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_417cc7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_417cb4 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_417cbe
        mov edx, dword ptr ds : [edx+8]
        jmp public_417cc2
        public_417cbe : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_417cc2 : nop
        cmp edx, ecx
        jne public_417cb4
        pop esi
        public_417cc7 : nop
        ret 4
        UNREACHABLE_TRAP(0x417ca0)
    }
}

#undef public_417cb4
#undef public_417cbe
#undef public_417cc2
#undef public_417cc7
