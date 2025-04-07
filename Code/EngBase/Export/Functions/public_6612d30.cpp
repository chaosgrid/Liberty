#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6613c00);
CLANG_FORWARD_PROC_SYMBOL(public_6613fe0);
CLANG_FORWARD_PROC_SYMBOL(public_661a640);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6612d96 _public_6612d96
#define public_6612d9a _public_6612d9a
#define public_6612dbc _public_6612dbc
#define public_6612de6 _public_6612de6

PROC_DECLARE(0x6612d30, internal_6612d30, public_6612d30);
extern "C" NAKED register_t __cdecl internal_6612d30()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        mov edx, dword ptr ss : [ebp+0x18]
        dec edx
        mov eax, edx
        mov dword ptr ss : [ebp+0x18], edx
        cmp eax, ebx
        mov dword ptr ss : [esp+8], eax
        jne public_6612de6
        push esi
        lea esi, ss:[ebp+4]
        push edi
        mov dword ptr ss : [ebp], offset public_66291e4
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x1C], eax
        je public_6612d96
        mov ecx, eax
        cmp eax, ecx
        jne public_6612d96
        mov eax, dword ptr ds : [edi+4]
        mov ecx, esi
        push eax
        call public_6613fe0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6612dbc
        public_6612d96 : nop
        cmp eax, edi
        je public_6612dbc
        public_6612d9a : nop
        lea ecx, ss:[esp+0x1C]
        mov ebx, eax
        call public_661a640
        lea eax, ss:[esp+0x14]
        push ebx
        push eax
        mov ecx, esi
        call public_6613c00
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, edi
        jne public_6612d9a
        xor ebx, ebx
        public_6612dbc : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_66281d0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebx
        push edx
        mov dword ptr ds : [esi+0x10], ebx
        call public_66281d0
        push ebp
        mov dword ptr ds : [esi+8], ebx
        call public_66281d0
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        pop edi
        pop esi
        public_6612de6 : nop
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6612d30)
    }
}

#undef public_6612d96
#undef public_6612d9a
#undef public_6612dbc
#undef public_6612de6
