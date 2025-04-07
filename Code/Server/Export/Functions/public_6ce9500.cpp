#include "Server-PCH.h"


#define public_6ce953f _public_6ce953f

PROC_DECLARE(0x6ce9500, internal_6ce9500, public_6ce9500);
extern "C" NAKED register_t __cdecl internal_6ce9500()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        push ebx
        call dword ptr ds : [eax+0x204]
        test al, al
        jne public_6ce953f
        mov edx, dword ptr ds : [esi]
        push edi
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x1FC]
        mov eax, dword ptr ds : [esi]
        push edi
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x200]
        mov edx, dword ptr ds : [esi]
        push edi
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x208]
        public_6ce953f : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ce9500)
    }
}

#undef public_6ce953f
