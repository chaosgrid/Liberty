#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411ac0);

#define public_411ad4 _public_411ad4
#define public_411adf _public_411adf
#define public_411ae2 _public_411ae2
#define public_411ae7 _public_411ae7

PROC_DECLARE(0x411ac0, internal_411ac0, public_411ac0);
extern "C" NAKED register_t __cdecl internal_411ac0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_411ae7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_411ad4 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jae public_411adf
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_411ae2
        public_411adf : nop
        mov edx, dword ptr ds : [edx+8]
        public_411ae2 : nop
        cmp edx, ecx
        jne public_411ad4
        pop esi
        public_411ae7 : nop
        ret 4
        UNREACHABLE_TRAP(0x411ac0)
    }
}

#undef public_411ad4
#undef public_411adf
#undef public_411ae2
#undef public_411ae7
