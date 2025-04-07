#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ae40);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d480);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3ae70 _public_6f3ae70
#define public_6f3ae98 _public_6f3ae98
#define public_6f3aebd _public_6f3aebd
#define public_6f3aec1 _public_6f3aec1
#define public_6f3aee1 _public_6f3aee1

PROC_DECLARE(0x6f3ae40, internal_6f3ae40, public_6f3ae40);
extern "C" NAKED register_t __cdecl internal_6f3ae40()
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
        je public_6f3aebd
        mov ecx, eax
        cmp eax, ecx
        jne public_6f3aebd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f3ae98
        nop 
        lea esp, ss:[esp]
        public_6f3ae70 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f3e390
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f3fca0
        push ebx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f3ae70
        public_6f3ae98 : nop
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
        call public_6f3d1a0
        jmp public_6f3aee1
        public_6f3aebd : nop
        cmp eax, edi
        je public_6f3aee1
        public_6f3aec1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f3d480
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f3dfb0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f3aec1
        public_6f3aee1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6f57e26
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f3ae40)
    }
}

#undef public_6f3ae70
#undef public_6f3ae98
#undef public_6f3aebd
#undef public_6f3aec1
#undef public_6f3aee1
