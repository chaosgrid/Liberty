#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a820);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f4a830 _public_6f4a830
#define public_6f4a857 _public_6f4a857

PROC_DECLARE(0x6f4a820, internal_6f4a820, public_6f4a820);
extern "C" NAKED register_t __cdecl internal_6f4a820()
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
        je public_6f4a857
        mov edi, edi
        public_6f4a830 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6f57e26
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6f4a830
        public_6f4a857 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6f57e26
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4a820)
    }
}

#undef public_6f4a830
#undef public_6f4a857
