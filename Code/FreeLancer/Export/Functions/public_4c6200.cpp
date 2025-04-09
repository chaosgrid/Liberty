#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6200);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c6210 _public_4c6210
#define public_4c6237 _public_4c6237

PROC_DECLARE(0x4c6200, internal_4c6200, public_4c6200);
extern "C" NAKED register_t __cdecl internal_4c6200()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x20]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_4c6237
        mov edi, edi
        public_4c6210 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [edi+0x24]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x24], ecx
        jne public_4c6210
        public_4c6237 : nop
        mov eax, dword ptr ds : [edi+0x20]
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x24], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4c6200)
    }
}

#undef public_4c6210
#undef public_4c6237
