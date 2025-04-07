#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eed270);

#define public_6eed281 _public_6eed281
#define public_6eed289 _public_6eed289
#define public_6eed294 _public_6eed294

PROC_DECLARE(0x6eed270, internal_6eed270, public_6eed270);
extern "C" NAKED register_t __cdecl internal_6eed270()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6eed294
        push esi
        public_6eed281 : nop
        test eax, eax
        je public_6eed289
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_6eed289 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6eed281
        pop esi
        public_6eed294 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6eed270)
    }
}

#undef public_6eed281
#undef public_6eed289
#undef public_6eed294
