#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b960);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fd40);

#define public_6f4be1d _public_6f4be1d

PROC_DECLARE(0x6f4bd90, internal_6f4bd90, public_6f4bd90);
extern "C" NAKED register_t __cdecl internal_6f4bd90()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        call public_6f4b960
        add esp, 4
        cmp eax, 0xFFFFFFFC
        jne public_6f4be1d
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, edi
        shl eax, 4
        lea esi, ds:[edx+eax-0x10]
        push ebx
        push esi
        call public_6f4b6a0
        mov ebx, dword ptr ds : [eax+8]
        push edi
        call public_6f4bcf0
        mov ebp, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        push ebx
        call public_6f4fd40
        push 1
        mov edi, eax
        call public_6f4aff0
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x18
        add ecx, 0xFFFFFFF0
        test edi, edi
        mov dword ptr ds : [eax], ecx
        pop ebx
        je public_6f4be1d
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        inc ebp
        shl ebp, 4
        add ebp, esi
        mov dword ptr ss : [ebp], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [ecx+0xC]
        pop edi
        mov dword ptr ss : [ebp+0xC], eax
        pop esi
        mov eax, 1
        pop ebp
        ret 
        public_6f4be1d : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f4bd90)
    }
}

#undef public_6f4be1d
