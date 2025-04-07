#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6327550 _public_6327550
#define public_6327577 _public_6327577

PROC_DECLARE(0x6327540, internal_6327540, public_6327540);
extern "C" NAKED register_t __cdecl internal_6327540()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6327577
        mov edi, edi
        public_6327550 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+0x18]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x18], ecx
        jne public_6327550
        public_6327577 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6327540)
    }
}

#undef public_6327550
#undef public_6327577
