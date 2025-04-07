#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3440);

#define public_65f3454 _public_65f3454
#define public_65f345f _public_65f345f
#define public_65f3462 _public_65f3462
#define public_65f3467 _public_65f3467

PROC_DECLARE(0x65f3440, internal_65f3440, public_65f3440);
extern "C" NAKED register_t __cdecl internal_65f3440()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_65f3467
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_65f3454 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jae public_65f345f
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_65f3462
        public_65f345f : nop
        mov edx, dword ptr ds : [edx+8]
        public_65f3462 : nop
        cmp edx, ecx
        jne public_65f3454
        pop esi
        public_65f3467 : nop
        ret 4
        UNREACHABLE_TRAP(0x65f3440)
    }
}

#undef public_65f3454
#undef public_65f345f
#undef public_65f3462
#undef public_65f3467
