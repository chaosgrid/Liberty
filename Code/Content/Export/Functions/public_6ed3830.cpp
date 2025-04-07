#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3830);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed3840 _public_6ed3840
#define public_6ed3867 _public_6ed3867

PROC_DECLARE(0x6ed3830, internal_6ed3830, public_6ed3830);
extern "C" NAKED register_t __cdecl internal_6ed3830()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6ed3867
        mov edi, edi
        public_6ed3840 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0x14]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x14], ecx
        jne public_6ed3840
        public_6ed3867 : nop
        mov eax, dword ptr ds : [edi+0x10]
        push eax
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi+0x14], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ed3830)
    }
}

#undef public_6ed3840
#undef public_6ed3867
