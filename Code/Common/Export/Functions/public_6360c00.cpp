#include "Common-PCH.h"


#define public_6360c18 _public_6360c18
#define public_6360c27 _public_6360c27

PROC_DECLARE(0x6360c00, internal_6360c00, public_6360c00);
extern "C" NAKED register_t __cdecl internal_6360c00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0x90]
        xor esi, esi
        mov si, word ptr ds : [edi+0x2A]
        mov ebx, ecx
        dec esi
        js public_6360c27
        public_6360c18 : nop
        mov ecx, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [ecx+esi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+0xC]
        dec esi
        jns public_6360c18
        public_6360c27 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6360c00)
    }
}

#undef public_6360c18
#undef public_6360c27
