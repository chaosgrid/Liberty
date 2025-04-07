#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4e4f8);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e5aa);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e6ac);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e6bb);

#define public_6d4e701 _public_6d4e701
#define public_6d4e716 _public_6d4e716
#define public_6d4e75d _public_6d4e75d
#define public_6d4e77a _public_6d4e77a
#define public_6d4e791 _public_6d4e791
#define public_6d4e795 _public_6d4e795
#define public_6d4e7a1 _public_6d4e7a1
#define public_6d4e7ca _public_6d4e7ca

PROC_DECLARE(0x6d4e6bb, internal_6d4e6bb, public_6d4e6bb);
extern "C" NAKED register_t __cdecl internal_6d4e6bb()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        push edi
        push 0x2C
        push 1
        push esi
        call dword ptr ds : [eax]
        mov edi, eax
        mov dword ptr ds : [esi+0x1A4], edi
        xor ebp, ebp
        add esp, 0xC
        mov dword ptr ds : [edi], offset _public_6d4e5aa
        mov dword ptr ds : [edi+0xC], offset _public_6d4e6ac
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ds : [edi+0x28], ebp
        cmp dword ptr ds : [esi+0x64], 3
        je public_6d4e701
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x2E
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4e701 : nop
        mov eax, dword ptr ds : [esi+4]
        push ebx
        mov ebx, 0x80
        push ebx
        push 1
        push esi
        call dword ptr ds : [eax]
        add esp, 0xC
        mov dword ptr ds : [edi+0x18], eax
        public_6d4e716 : nop
        mov eax, dword ptr ds : [esi+4]
        push 0x1000
        push 1
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [ecx+ebp], eax
        add ebp, 4
        add esp, 0xC
        cmp ebp, ebx
        jl public_6d4e716
        mov byte ptr ds : [edi+0x1C], 1
        cmp byte ptr ds : [esi+0x5A], 0
        pop ebx
        je public_6d4e791
        mov ebp, dword ptr ds : [esi+0x54]
        push 8
        pop eax
        cmp ebp, eax
        jge public_6d4e75d
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x37
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4e75d : nop
        mov eax, 0x100
        cmp ebp, eax
        jle public_6d4e77a
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x38
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4e77a : nop
        mov eax, dword ptr ds : [esi+4]
        push 3
        push ebp
        push 1
        push esi
        call dword ptr ds : [eax+8]
        add esp, 0x10
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi+0x14], ebp
        jmp public_6d4e795
        public_6d4e791 : nop
        and dword ptr ds : [edi+0x10], 0
        public_6d4e795 : nop
        cmp dword ptr ds : [esi+0x4C], 0
        push 2
        pop ecx
        je public_6d4e7a1
        mov dword ptr ds : [esi+0x4C], ecx
        public_6d4e7a1 : nop
        cmp dword ptr ds : [esi+0x4C], ecx
        jne public_6d4e7ca
        mov eax, dword ptr ds : [esi+0x5C]
        mov edx, dword ptr ds : [esi+4]
        add eax, ecx
        lea eax, ds:[eax+eax*2]
        shl eax, 1
        push eax
        push 1
        push esi
        call dword ptr ds : [edx+4]
        add esp, 0xC
        mov dword ptr ds : [edi+0x20], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        jmp public_6d4e4f8
        public_6d4e7ca : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4e6bb)
    }
}

#undef public_6d4e701
#undef public_6d4e716
#undef public_6d4e75d
#undef public_6d4e77a
#undef public_6d4e791
#undef public_6d4e795
#undef public_6d4e7a1
#undef public_6d4e7ca
