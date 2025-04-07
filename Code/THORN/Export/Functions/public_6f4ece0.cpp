#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ec40);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ec60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ece0);

#define public_6f4ed0c _public_6f4ed0c
#define public_6f4ed28 _public_6f4ed28

PROC_DECLARE(0x6f4ece0, internal_6f4ece0, public_6f4ece0);
extern "C" NAKED register_t __cdecl internal_6f4ece0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        jne public_6f4ed28
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        mov dword ptr ds : [esi+4], 1
        call public_6f4ec40
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 4
        xor edi, edi
        test eax, eax
        jle public_6f4ed28
        push ebx
        xor ebx, ebx
        public_6f4ed0c : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, ebx
        add ecx, eax
        push ecx
        call public_6f4ec60
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 4
        inc edi
        add ebx, 0x10
        cmp edi, eax
        jl public_6f4ed0c
        pop ebx
        public_6f4ed28 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4ece0)
    }
}

#undef public_6f4ed0c
#undef public_6f4ed28
