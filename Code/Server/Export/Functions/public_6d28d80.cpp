#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d28d80);

#define public_6d28d9c _public_6d28d9c
#define public_6d28db8 _public_6d28db8

PROC_DECLARE(0x6d28d80, internal_6d28d80, public_6d28d80);
extern "C" NAKED register_t __cdecl internal_6d28d80()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_6d1baa0
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6d28d9c
        mov ebx, eax
        public_6d28d9c : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d28db8
        mov edx, dword ptr ss : [esp+0x10]
        mov cx, word ptr ds : [edx]
        mov word ptr ds : [eax], cx
        public_6d28db8 : nop
        inc dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d28d80)
    }
}

#undef public_6d28d9c
#undef public_6d28db8
