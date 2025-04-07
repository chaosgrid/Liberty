#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3880);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3950);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3d30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3d70);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f466e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed38b0 _public_6ed38b0
#define public_6ed38d8 _public_6ed38d8
#define public_6ed38fd _public_6ed38fd
#define public_6ed3901 _public_6ed3901
#define public_6ed3921 _public_6ed3921

PROC_DECLARE(0x6ed3880, internal_6ed3880, public_6ed3880);
extern "C" NAKED register_t __cdecl internal_6ed3880()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx+8]
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6ed38fd
        mov ecx, eax
        cmp eax, ecx
        jne public_6ed38fd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ed38d8
        lea esp, ss:[esp]
        public_6ed38b0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ed3d30
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6ed3d70
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ed38b0
        public_6ed38d8 : nop
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
        call public_6f1df30
        jmp public_6ed3921
        public_6ed38fd : nop
        cmp eax, edi
        je public_6ed3921
        public_6ed3901 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f466e0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6ed3950
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ed3901
        public_6ed3921 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ed3880)
    }
}

#undef public_6ed38b0
#undef public_6ed38d8
#undef public_6ed38fd
#undef public_6ed3901
#undef public_6ed3921
