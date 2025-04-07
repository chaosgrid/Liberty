#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1ccb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f1ccd6 _public_6f1ccd6
#define public_6f1ccfb _public_6f1ccfb

PROC_DECLARE(0x6f1ccb0, internal_6f1ccb0, public_6f1ccb0);
extern "C" NAKED register_t __cdecl internal_6f1ccb0()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6f1ccfb
        mov eax, dword ptr ds : [edi+8]
        push esi
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        add esi, 8
        test ecx, ecx
        je public_6f1ccd6
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi], 0
        public_6f1ccd6 : nop
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0xC]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0xC], eax
        pop esi
        public_6f1ccfb : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f1ccb0)
    }
}

#undef public_6f1ccd6
#undef public_6f1ccfb
