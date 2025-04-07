#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24610);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ce20);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e540);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ea20);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2ce50 _public_6f2ce50
#define public_6f2ce78 _public_6f2ce78
#define public_6f2ce91 _public_6f2ce91
#define public_6f2ce95 _public_6f2ce95
#define public_6f2ceb5 _public_6f2ceb5

PROC_DECLARE(0x6f2ce20, internal_6f2ce20, public_6f2ce20);
extern "C" NAKED register_t __cdecl internal_6f2ce20()
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
        je public_6f2ce91
        mov ecx, eax
        cmp eax, ecx
        jne public_6f2ce91
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f2ce78
        nop 
        lea esp, ss:[esp]
        public_6f2ce50 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f2ea20
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f2f5a0
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f2ce50
        public_6f2ce78 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6f2ceb5
        public_6f2ce91 : nop
        cmp eax, edi
        je public_6f2ceb5
        public_6f2ce95 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f24610
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f2e540
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f2ce95
        public_6f2ceb5 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f2ce20)
    }
}

#undef public_6f2ce50
#undef public_6f2ce78
#undef public_6f2ce91
#undef public_6f2ce95
#undef public_6f2ceb5
