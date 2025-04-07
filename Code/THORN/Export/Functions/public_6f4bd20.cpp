#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b190);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b960);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fd40);

#define public_6f4bd82 _public_6f4bd82

PROC_DECLARE(0x6f4bd20, internal_6f4bd20, public_6f4bd20);
extern "C" NAKED register_t __cdecl internal_6f4bd20()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6f4b960
        add esp, 4
        cmp eax, 0xFFFFFFFC
        jne public_6f4bd82
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
        mov edi, dword ptr ss : [esp+0x1C]
        push eax
        push edi
        push ebx
        call public_6f4fd40
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 0x14
        test eax, eax
        mov dword ptr ds : [ecx], eax
        pop ebx
        je public_6f4bd82
        inc edi
        shl edi, 4
        add edi, esi
        push edi
        call public_6f4b190
        add esp, 4
        pop edi
        pop esi
        ret 
        public_6f4bd82 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4bd20)
    }
}

#undef public_6f4bd82
