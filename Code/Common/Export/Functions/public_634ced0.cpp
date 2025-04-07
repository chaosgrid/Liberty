#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ced0);

#define public_634cee5 _public_634cee5
#define public_634cef7 _public_634cef7

PROC_DECLARE(0x634ced0, internal_634ced0, public_634ced0);
extern "C" NAKED register_t __cdecl internal_634ced0()
{
    __asm
    {
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0x126]
        dec esi
        js public_634cef7
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_634cee5 : nop
        mov eax, dword ptr ds : [edi+0x128]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx]
        dec esi
        jns public_634cee5
        pop ebx
        public_634cef7 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634ced0)
    }
}

#undef public_634cee5
#undef public_634cef7
