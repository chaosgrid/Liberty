#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634cf60);

#define public_634cf75 _public_634cf75
#define public_634cf89 _public_634cf89
#define public_634cf8d _public_634cf8d

PROC_DECLARE(0x634cf60, internal_634cf60, public_634cf60);
extern "C" NAKED register_t __cdecl internal_634cf60()
{
    __asm
    {
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0xCA]
        dec esi
        js public_634cf8d
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        public_634cf75 : nop
        mov eax, dword ptr ds : [edi+0xCC]
        mov ecx, dword ptr ds : [eax+esi*4]
        test byte ptr ds : [ecx+4], 1
        je public_634cf89
        mov edx, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [edx]
        public_634cf89 : nop
        dec esi
        jns public_634cf75
        pop ebp
        public_634cf8d : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634cf60)
    }
}

#undef public_634cf75
#undef public_634cf89
#undef public_634cf8d
