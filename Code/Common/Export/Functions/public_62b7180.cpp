#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b7180);
CLANG_FORWARD_PROC_SYMBOL(public_62b9dd0);
CLANG_FORWARD_PROC_SYMBOL(public_62ba230);
CLANG_FORWARD_PROC_SYMBOL(public_62bae10);
CLANG_FORWARD_PROC_SYMBOL(public_62bb520);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b71b0 _public_62b71b0
#define public_62b71d8 _public_62b71d8
#define public_62b71fd _public_62b71fd
#define public_62b7201 _public_62b7201
#define public_62b7221 _public_62b7221

PROC_DECLARE(0x62b7180, internal_62b7180, public_62b7180);
extern "C" NAKED register_t __cdecl internal_62b7180()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_62b71fd
        mov ecx, eax
        cmp eax, ecx
        jne public_62b71fd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62b71d8
        nop 
        lea esp, ss:[esp]
        public_62b71b0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62ba230
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_62bb520
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62b71b0
        public_62b71d8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_632c410
        jmp public_62b7221
        public_62b71fd : nop
        cmp eax, edi
        je public_62b7221
        public_62b7201 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_62bae10
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62b9dd0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62b7201
        public_62b7221 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62b7180)
    }
}

#undef public_62b71b0
#undef public_62b71d8
#undef public_62b71fd
#undef public_62b7201
#undef public_62b7221
