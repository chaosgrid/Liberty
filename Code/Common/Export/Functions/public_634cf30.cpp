#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634cf30);

#define public_634cf45 _public_634cf45
#define public_634cf58 _public_634cf58

PROC_DECLARE(0x634cf30, internal_634cf30, public_634cf30);
extern "C" NAKED register_t __cdecl internal_634cf30()
{
    __asm
    {
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0x126]
        dec esi
        js public_634cf58
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_634cf45 : nop
        mov eax, dword ptr ds : [edi+0x128]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+8]
        dec esi
        jns public_634cf45
        pop ebx
        public_634cf58 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634cf30)
    }
}

#undef public_634cf45
#undef public_634cf58
