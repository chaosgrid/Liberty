#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf79d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad12b0);

#define public_6ad12ef _public_6ad12ef

PROC_DECLARE(0x6ad12b0, internal_6ad12b0, public_6ad12b0);
extern "C" NAKED register_t __cdecl internal_6ad12b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 4
        push ebx
        push ecx
        mov eax, dword ptr ss : [ebp+0xC]
        add eax, 0xC
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [ebp+8]
        push ebp
        push dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov ebp, dword ptr ss : [ebp-4]
        call public_6acf79d
        push esi
        push edi
        call eax
        pop edi
        pop esi
        mov ebx, ebp
        pop ebp
        mov ecx, dword ptr ss : [ebp+0x10]
        push ebp
        mov ebp, ebx
        cmp ecx, 0x100
        jne public_6ad12ef
        mov ecx, 2
        public_6ad12ef : nop
        push ecx
        call public_6acf79d
        pop ebp
        pop ecx
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6ad12b0)
    }
}

#undef public_6ad12ef
