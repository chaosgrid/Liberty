#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3bb10);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cc20);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3bb40 _public_6f3bb40
#define public_6f3bb5f _public_6f3bb5f
#define public_6f3bb78 _public_6f3bb78
#define public_6f3bb80 _public_6f3bb80
#define public_6f3bba0 _public_6f3bba0

PROC_DECLARE(0x6f3bb10, internal_6f3bb10, public_6f3bb10);
extern "C" NAKED register_t __cdecl internal_6f3bb10()
{
    __asm
    {
        sub esp, 8
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
        je public_6f3bb78
        mov ecx, eax
        cmp eax, ecx
        jne public_6f3bb78
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f3bb5f
        nop 
        lea esp, ss:[esp]
        public_6f3bb40 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f3dba0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f3bb40
        public_6f3bb5f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6f3bba0
        public_6f3bb78 : nop
        cmp eax, edi
        je public_6f3bba0
        lea esp, ss:[esp]
        public_6f3bb80 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f3cc20
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f3c7e0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f3bb80
        public_6f3bba0 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6f57e26
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6f57e26
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f3bb10)
    }
}

#undef public_6f3bb40
#undef public_6f3bb5f
#undef public_6f3bb78
#undef public_6f3bb80
#undef public_6f3bba0
