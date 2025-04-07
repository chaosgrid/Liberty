#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced9d0);

#define public_6ced998 _public_6ced998

PROC_DECLARE(0x6ced940, internal_6ced940, public_6ced940);
extern "C" NAKED register_t __cdecl internal_6ced940()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        je public_6ced998
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6ced998
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6ced998
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [eax+0x90]
        cmp eax, 9
        jne public_6ced998
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x94]
        inc dword ptr ds : [esi+0xC]
        push ebx
        mov ecx, esi
        call public_6ced9d0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6ced998 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ced940)
    }
}

#undef public_6ced998
