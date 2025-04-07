#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634cea0);

#define public_634ceb5 _public_634ceb5
#define public_634cec8 _public_634cec8

PROC_DECLARE(0x634cea0, internal_634cea0, public_634cea0);
extern "C" NAKED register_t __cdecl internal_634cea0()
{
    __asm
    {
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0x126]
        dec esi
        js public_634cec8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_634ceb5 : nop
        mov eax, dword ptr ds : [edi+0x128]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+4]
        dec esi
        jns public_634ceb5
        pop ebx
        public_634cec8 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634cea0)
    }
}

#undef public_634ceb5
#undef public_634cec8
