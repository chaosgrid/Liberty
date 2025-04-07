#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2540);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d254e _public_65d254e
#define public_65d2575 _public_65d2575

PROC_DECLARE(0x65d2540, internal_65d2540, public_65d2540);
extern "C" NAKED register_t __cdecl internal_65d2540()
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
        je public_65d2575
        public_65d254e : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        call public_65d6cb8
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_65d254e
        public_65d2575 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_65d6cb8
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65d2540)
    }
}

#undef public_65d254e
#undef public_65d2575
