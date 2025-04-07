#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f81960);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f8197d _public_6f8197d
#define public_6f8199d _public_6f8199d

PROC_DECLARE(0x6f81960, internal_6f81960, public_6f81960);
extern "C" NAKED register_t __cdecl internal_6f81960()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [esi+4]
        push 0x10
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6f8197d
        mov ebx, eax
        public_6f8197d : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f8199d
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6f8199d : nop
        inc dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f81960)
    }
}

#undef public_6f8197d
#undef public_6f8199d
