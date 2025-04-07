#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62719cf _public_62719cf
#define public_62719ef _public_62719ef

PROC_DECLARE(0x62719b0, internal_62719b0, public_62719b0);
extern "C" NAKED register_t __cdecl internal_62719b0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [esi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_62719cf
        mov ebx, eax
        public_62719cf : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_62719ef
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_62719ef : nop
        inc dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62719b0)
    }
}

#undef public_62719cf
#undef public_62719ef
