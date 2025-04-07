#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d204c0);

#define public_6d204dd _public_6d204dd
#define public_6d204f5 _public_6d204f5

PROC_DECLARE(0x6d204c0, internal_6d204c0, public_6d204c0);
extern "C" NAKED register_t __cdecl internal_6d204c0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_6d1baa0
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6d204dd
        mov ebx, eax
        public_6d204dd : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d204f5
        mov dword ptr ds : [eax], 0
        public_6d204f5 : nop
        inc dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edx+4]
        add eax, 8
        mov dword ptr ds : [edi+0x14], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d204c0)
    }
}

#undef public_6d204dd
#undef public_6d204f5
