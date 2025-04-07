#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cedc30);

#define public_6cedbf8 _public_6cedbf8

PROC_DECLARE(0x6cedba0, internal_6cedba0, public_6cedba0);
extern "C" NAKED register_t __cdecl internal_6cedba0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        je public_6cedbf8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6cedbf8
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6cedbf8
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [eax+0x90]
        cmp eax, 9
        jne public_6cedbf8
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x94]
        inc dword ptr ds : [esi+0xC]
        push ebx
        mov ecx, esi
        call public_6cedc30
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6cedbf8 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6cedba0)
    }
}

#undef public_6cedbf8
