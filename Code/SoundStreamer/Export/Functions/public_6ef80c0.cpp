#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4e1d);
CLANG_FORWARD_PROC_SYMBOL(public_6ef80c0);

#define public_6ef80ff _public_6ef80ff

PROC_DECLARE(0x6ef80c0, internal_6ef80c0, public_6ef80c0);
extern "C" NAKED register_t __cdecl internal_6ef80c0()
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
        call public_6ef4e1d
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
        jne public_6ef80ff
        mov ecx, 2
        public_6ef80ff : nop
        push ecx
        call public_6ef4e1d
        pop ebp
        pop ecx
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6ef80c0)
    }
}

#undef public_6ef80ff
