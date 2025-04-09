#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_581560);

#define public_581593 _public_581593

PROC_DECLARE(0x581560, internal_581560, public_581560);
extern "C" NAKED register_t __cdecl internal_581560()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        je public_581593
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_581593
        mov ecx, dword ptr ds : [esi+0x664]
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ebx, dword ptr ds : [edi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        push 0x3E
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        pop ebx
        public_581593 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x581560)
    }
}

#undef public_581593
