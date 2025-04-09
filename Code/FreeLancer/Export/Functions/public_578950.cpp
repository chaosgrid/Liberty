#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_578950);

#define public_578964 _public_578964
#define public_57896f _public_57896f
#define public_578972 _public_578972
#define public_578977 _public_578977

PROC_DECLARE(0x578950, internal_578950, public_578950);
extern "C" NAKED register_t __cdecl internal_578950()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_578977
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_578964 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jge public_57896f
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_578972
        public_57896f : nop
        mov edx, dword ptr ds : [edx+8]
        public_578972 : nop
        cmp edx, ecx
        jne public_578964
        pop esi
        public_578977 : nop
        ret 4
        UNREACHABLE_TRAP(0x578950)
    }
}

#undef public_578964
#undef public_57896f
#undef public_578972
#undef public_578977
