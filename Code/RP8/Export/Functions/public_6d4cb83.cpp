#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4cb83);

#define public_6d4cbe5 _public_6d4cbe5

PROC_DECLARE(0x6d4cb83, internal_6d4cb83, public_6d4cb83);
extern "C" NAKED register_t __cdecl internal_6d4cb83()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov ebx, 0x400
        mov edi, eax
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi+0x1A0]
        push ebx
        push 1
        push edi
        call dword ptr ds : [eax]
        push ebx
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+4]
        push 1
        push edi
        call dword ptr ds : [eax]
        push ebx
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        push 1
        push edi
        call dword ptr ds : [eax]
        push ebx
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        push 1
        push edi
        call dword ptr ds : [eax]
        add esp, 0x30
        mov dword ptr ds : [esi+0x14], eax
        xor eax, eax
        mov edx, 0x5B6900
        mov dword ptr ss : [ebp-8], 0xFF1DAF00
        mov dword ptr ss : [ebp-4], 0xFF4D0B80
        mov ecx, 0x2C8D00
        public_6d4cbe5 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov edi, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-4], 0x166E9
        sar edi, 0x10
        mov dword ptr ds : [eax+ebx], edi
        mov edi, dword ptr ss : [ebp-8]
        mov ebx, dword ptr ds : [esi+0xC]
        add dword ptr ss : [ebp-8], 0x1C5A2
        sar edi, 0x10
        mov dword ptr ds : [eax+ebx], edi
        mov edi, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+edi], edx
        mov edi, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+edi], ecx
        sub ecx, 0x581A
        sub edx, 0xB6D2
        add eax, 4
        cmp ecx, 0xFFD4CB1A
        jge public_6d4cbe5
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4cb83)
    }
}

#undef public_6d4cbe5
