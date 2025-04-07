#include "Common-PCH.h"


#define public_632828a _public_632828a
#define public_6328337 _public_6328337
#define public_6328362 _public_6328362

PROC_DECLARE(0x6328240, internal_6328240, public_6328240);
extern "C" NAKED register_t __cdecl internal_6328240()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        test ebx, ebx
        push esi
        mov esi, ecx
        je public_6328362
        movzx eax, byte ptr ds : [esi+0x1C]
        imul eax, 0x7C
        mov eax, dword ptr ds : [eax+public_64019a8]
        push ebp
        mov ebp, dword ptr ds : [esi+0x3C]
        push edi
        push eax
        push ebp
        mov dword ptr ss : [esp+0x1C], ebp
        call dword ptr ds : [public_6399088]
        mov edi, dword ptr ss : [esp+0x2C]
        cmp edi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        jne public_632828a
        push ebx
        call dword ptr ds : [public_6399238]
        add esp, 4
        mov edi, eax
        public_632828a : nop
        mov al, byte ptr ss : [esp+0x28]
        test al, al
        je public_6328337
        mov ecx, dword ptr ds : [esi+0x3C]
        push 0
        push ecx
        call dword ptr ds : [public_63990a0]
        mov edx, dword ptr ds : [esi+0x3C]
        push 0
        push edx
        call dword ptr ds : [public_63990b0]
        mov eax, dword ptr ds : [esi+0x3C]
        push 1
        push eax
        call dword ptr ds : [public_63990ac]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov ebp, dword ptr ds : [public_63990a8]
        push 0xA0A0A
        push ecx
        call ebp
        mov eax, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [public_63ed674]
        push 0
        push edi
        push ebx
        add edx, eax
        mov eax, dword ptr ds : [esi+0x30]
        push 0
        add edx, ecx
        mov ecx, dword ptr ds : [esi+0x38]
        push 2
        push edx
        mov edx, dword ptr ds : [public_63ed670]
        add eax, ecx
        mov ecx, dword ptr ds : [esi+0x3C]
        add eax, edx
        push eax
        push ecx
        call dword ptr ds : [public_63990a4]
        mov edx, dword ptr ds : [esi+0x1D]
        mov eax, dword ptr ds : [esi+0x3C]
        and edx, 0xFFFFFF
        push edx
        push eax
        call ebp
        mov ecx, dword ptr ds : [esi+0x2C]
        mov ebp, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [esi+0x30]
        push 0
        push edi
        push ebx
        push 0
        push 2
        add ecx, ebp
        push ecx
        add edx, eax
        mov eax, dword ptr ds : [esi+0x3C]
        push edx
        push eax
        call dword ptr ds : [public_63990a4]
        mov ebp, dword ptr ss : [esp+0x14]
        public_6328337 : nop
        mov edx, dword ptr ds : [esi+0x3C]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        push ebx
        push edx
        call dword ptr ds : [public_6399098]
        mov edi, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        add edi, eax
        push ebp
        mov dword ptr ds : [esi+0x30], edi
        call dword ptr ds : [public_6399088]
        pop edi
        pop ebp
        public_6328362 : nop
        pop esi
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6328240)
    }
}

#undef public_632828a
#undef public_6328337
#undef public_6328362
