#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f020);

#define public_6f4f034 _public_6f4f034
#define public_6f4f047 _public_6f4f047

PROC_DECLARE(0x6f4f020, internal_6f4f020, public_6f4f020);
extern "C" NAKED register_t __cdecl internal_6f4f020()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        sub eax, edx
        mov edx, dword ptr ss : [esp+4]
        inc eax
        cmp eax, edx
        ja public_6f4f047
        push esi
        public_6f4f034 : nop
        mov esi, dword ptr ds : [ecx+8]
        add ecx, 8
        sub edx, eax
        mov eax, dword ptr ds : [ecx+4]
        sub eax, esi
        inc eax
        cmp eax, edx
        jbe public_6f4f034
        pop esi
        public_6f4f047 : nop
        mov eax, dword ptr ds : [ecx]
        add eax, edx
        ret 4
        UNREACHABLE_TRAP(0x6f4f020)
    }
}

#undef public_6f4f034
#undef public_6f4f047
