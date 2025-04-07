#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b210);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620b21e _public_620b21e
#define public_620b245 _public_620b245

PROC_DECLARE(0x620b210, internal_620b210, public_620b210);
extern "C" NAKED register_t __cdecl internal_620b210()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_620b245
        public_620b21e : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        call public_62460e0
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_620b21e
        public_620b245 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62460e0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x620b210)
    }
}

#undef public_620b21e
#undef public_620b245
