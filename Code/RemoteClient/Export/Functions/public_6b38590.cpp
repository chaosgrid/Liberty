#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38590);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b385a0 _public_6b385a0
#define public_6b385c7 _public_6b385c7

PROC_DECLARE(0x6b38590, internal_6b38590, public_6b38590);
extern "C" NAKED register_t __cdecl internal_6b38590()
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
        je public_6b385c7
        mov edi, edi
        public_6b385a0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6b6a092
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6b385a0
        public_6b385c7 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6b6a092
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b38590)
    }
}

#undef public_6b385a0
#undef public_6b385c7
