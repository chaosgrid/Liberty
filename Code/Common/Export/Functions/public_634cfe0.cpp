#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634cfe0);

#define public_634cff5 _public_634cff5
#define public_634d00a _public_634d00a
#define public_634d00e _public_634d00e

PROC_DECLARE(0x634cfe0, internal_634cfe0, public_634cfe0);
extern "C" NAKED register_t __cdecl internal_634cfe0()
{
    __asm
    {
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0xCA]
        dec esi
        js public_634d00e
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        public_634cff5 : nop
        mov eax, dword ptr ds : [edi+0xCC]
        mov ecx, dword ptr ds : [eax+esi*4]
        test byte ptr ds : [ecx+4], 4
        je public_634d00a
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+0xC]
        public_634d00a : nop
        dec esi
        jns public_634cff5
        pop ebp
        public_634d00e : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634cfe0)
    }
}

#undef public_634cff5
#undef public_634d00a
#undef public_634d00e
