#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634caf0);

#define public_634cb05 _public_634cb05
#define public_634cb18 _public_634cb18

PROC_DECLARE(0x634caf0, internal_634caf0, public_634caf0);
extern "C" NAKED register_t __cdecl internal_634caf0()
{
    __asm
    {
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0x12E]
        dec esi
        js public_634cb18
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_634cb05 : nop
        mov eax, dword ptr ds : [edi+0x130]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+0x10]
        dec esi
        jns public_634cb05
        pop ebx
        public_634cb18 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634caf0)
    }
}

#undef public_634cb05
#undef public_634cb18
