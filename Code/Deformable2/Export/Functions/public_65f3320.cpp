#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3320);

#define public_65f3334 _public_65f3334
#define public_65f333e _public_65f333e
#define public_65f3342 _public_65f3342
#define public_65f3347 _public_65f3347

PROC_DECLARE(0x65f3320, internal_65f3320, public_65f3320);
extern "C" NAKED register_t __cdecl internal_65f3320()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_65f3347
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_65f3334 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_65f333e
        mov edx, dword ptr ds : [edx+8]
        jmp public_65f3342
        public_65f333e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_65f3342 : nop
        cmp edx, ecx
        jne public_65f3334
        pop esi
        public_65f3347 : nop
        ret 4
        UNREACHABLE_TRAP(0x65f3320)
    }
}

#undef public_65f3334
#undef public_65f333e
#undef public_65f3342
#undef public_65f3347
