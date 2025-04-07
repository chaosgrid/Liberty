#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634cfa0);

#define public_634cfb5 _public_634cfb5
#define public_634cfca _public_634cfca
#define public_634cfce _public_634cfce

PROC_DECLARE(0x634cfa0, internal_634cfa0, public_634cfa0);
extern "C" NAKED register_t __cdecl internal_634cfa0()
{
    __asm
    {
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0xCA]
        dec esi
        js public_634cfce
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        public_634cfb5 : nop
        mov eax, dword ptr ds : [edi+0xCC]
        mov ecx, dword ptr ds : [eax+esi*4]
        test byte ptr ds : [ecx+4], 4
        je public_634cfca
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx+8]
        public_634cfca : nop
        dec esi
        jns public_634cfb5
        pop ebp
        public_634cfce : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634cfa0)
    }
}

#undef public_634cfb5
#undef public_634cfca
#undef public_634cfce
