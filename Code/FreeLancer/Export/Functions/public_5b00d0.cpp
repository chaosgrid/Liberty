#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b00d0);

#define public_5b00e0 _public_5b00e0
#define public_5b00f1 _public_5b00f1
#define public_5b0106 _public_5b0106
#define public_5b012c _public_5b012c

PROC_DECLARE(0x5b00d0, internal_5b00d0, public_5b00d0);
extern "C" NAKED register_t __cdecl internal_5b00d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        nop 
        public_5b00e0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
        call ebx
        add esp, 8
        test al, al
        je public_5b0106
        public_5b00f1 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        push edx
        push eax
        call ebx
        add esp, 8
        test al, al
        jne public_5b00f1
        public_5b0106 : nop
        mov ecx, dword ptr ds : [edi-4]
        mov edx, dword ptr ss : [esp+0x18]
        sub edi, 4
        push ecx
        push edx
        call ebx
        add esp, 8
        test al, al
        jne public_5b0106
        cmp edi, esi
        jbe public_5b012c
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [edi], eax
        add esi, 4
        jmp public_5b00e0
        public_5b012c : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5b00d0)
    }
}

#undef public_5b00e0
#undef public_5b00f1
#undef public_5b0106
#undef public_5b012c
