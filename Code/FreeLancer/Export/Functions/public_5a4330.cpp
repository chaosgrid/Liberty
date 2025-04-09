#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be390);

#define public_5a4343 _public_5a4343
#define public_5a436d _public_5a436d

PROC_DECLARE(0x5a4330, internal_5a4330, public_5a4330);
extern "C" NAKED register_t __cdecl internal_5a4330()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xCC]
        test eax, eax
        push edi
        je public_5a4343
        call public_4be390
        public_5a4343 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_5a436d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_5a436d
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ebx, dword ptr ds : [edi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        push 0x2D
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        pop ebx
        public_5a436d : nop
        mov al, byte ptr ds : [esi+0x35C]
        and al, 0xFE
        pop edi
        mov byte ptr ds : [esi+0x35C], al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5a4330)
    }
}

#undef public_5a4343
#undef public_5a436d
