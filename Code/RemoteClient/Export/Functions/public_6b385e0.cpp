#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b385e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b385f0 _public_6b385f0
#define public_6b38617 _public_6b38617

PROC_DECLARE(0x6b385e0, internal_6b385e0, public_6b385e0);
extern "C" NAKED register_t __cdecl internal_6b385e0()
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
        je public_6b38617
        mov edi, edi
        public_6b385f0 : nop
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
        jne public_6b385f0
        public_6b38617 : nop
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
        UNREACHABLE_TRAP(0x6b385e0)
    }
}

#undef public_6b385f0
#undef public_6b38617
