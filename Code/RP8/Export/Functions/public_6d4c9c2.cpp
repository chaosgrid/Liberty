#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f05);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c586);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c666);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c671);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c679);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c756);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c7ad);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c817);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c8bb);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c9c2);

#define public_6d4ca12 _public_6d4ca12
#define public_6d4ca27 _public_6d4ca27
#define public_6d4ca2b _public_6d4ca2b
#define public_6d4ca48 _public_6d4ca48
#define public_6d4ca8b _public_6d4ca8b
#define public_6d4caa2 _public_6d4caa2
#define public_6d4cac1 _public_6d4cac1
#define public_6d4cac9 _public_6d4cac9
#define public_6d4caef _public_6d4caef
#define public_6d4caf7 _public_6d4caf7
#define public_6d4cb2e _public_6d4cb2e
#define public_6d4cb3d _public_6d4cb3d
#define public_6d4cb66 _public_6d4cb66
#define public_6d4cb7e _public_6d4cb7e

PROC_DECLARE(0x6d4c9c2, internal_6d4c9c2, public_6d4c9c2);
extern "C" NAKED register_t __cdecl internal_6d4c9c2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+4]
        push edi
        push 0xA0
        push 1
        push esi
        call dword ptr ds : [eax]
        mov ebx, eax
        mov dword ptr ds : [esi+0x19C], ebx
        and byte ptr ds : [ebx+8], 0
        add esp, 0xC
        mov dword ptr ds : [ebx], offset _public_6d4c586
        mov dword ptr ds : [ebx+4], offset _public_6d4c5a0
        cmp byte ptr ds : [esi+0x108], 0
        mov dword ptr ss : [ebp-0x10], ebx
        je public_6d4ca12
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x17
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4ca12 : nop
        cmp byte ptr ds : [esi+0x48], 0
        je public_6d4ca27
        cmp dword ptr ds : [esi+0x114], 1
        jle public_6d4ca27
        mov byte ptr ss : [ebp+0xB], 1
        jmp public_6d4ca2b
        public_6d4ca27 : nop
        and byte ptr ss : [ebp+0xB], 0
        public_6d4ca2b : nop
        and dword ptr ss : [ebp-8], 0
        cmp dword ptr ds : [esi+0x20], 0
        mov edi, dword ptr ds : [esi+0xC4]
        jle public_6d4cb7e
        lea ecx, ds:[ebx+0x34]
        add edi, 0x24
        mov dword ptr ss : [ebp-0x14], ecx
        public_6d4ca48 : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi-0x1C]
        mov ebx, dword ptr ds : [esi+0x114]
        imul eax, edx
        cdq 
        idiv ebx
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ds : [edi-0x18]
        imul eax, dword ptr ds : [edi]
        cdq 
        idiv ebx
        mov ebx, dword ptr ds : [esi+0x110]
        mov edx, dword ptr ds : [esi+0x10C]
        mov dword ptr ss : [ebp-4], ebx
        mov dword ptr ds : [ecx+0x30], eax
        cmp byte ptr ds : [edi+0xC], 0
        mov dword ptr ss : [ebp-0x18], eax
        jne public_6d4ca8b
        mov dword ptr ds : [ecx], offset _public_6d4c671
        jmp public_6d4cb66
        public_6d4ca8b : nop
        mov ebx, dword ptr ss : [ebp-0xC]
        cmp ebx, edx
        jne public_6d4caa2
        cmp eax, dword ptr ss : [ebp-4]
        jne public_6d4caa2
        mov dword ptr ds : [ecx], offset _public_6d4c666
        jmp public_6d4cb66
        public_6d4caa2 : nop
        add ebx, ebx
        cmp ebx, edx
        jne public_6d4caf7
        cmp eax, dword ptr ss : [ebp-4]
        jne public_6d4cac9
        cmp byte ptr ss : [ebp+0xB], 0
        je public_6d4cac1
        cmp dword ptr ds : [edi+4], 2
        jbe public_6d4cac1
        mov dword ptr ds : [ecx], offset _public_6d4c817
        jmp public_6d4cb3d
        public_6d4cac1 : nop
        mov dword ptr ds : [ecx], offset _public_6d4c756
        jmp public_6d4cb3d
        public_6d4cac9 : nop
        cmp ebx, edx
        jne public_6d4caf7
        add eax, eax
        cmp eax, dword ptr ss : [ebp-4]
        jne public_6d4caf7
        cmp byte ptr ss : [ebp+0xB], 0
        je public_6d4caef
        cmp dword ptr ds : [edi+4], 2
        jbe public_6d4caef
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx], offset _public_6d4c8bb
        mov byte ptr ds : [eax+8], 1
        jmp public_6d4cb3d
        public_6d4caef : nop
        mov dword ptr ds : [ecx], offset _public_6d4c7ad
        jmp public_6d4cb3d
        public_6d4caf7 : nop
        mov eax, edx
        cdq 
        idiv dword ptr ss : [ebp-0xC]
        test edx, edx
        mov dword ptr ss : [ebp-0xC], eax
        jne public_6d4cb2e
        mov eax, dword ptr ss : [ebp-4]
        cdq 
        idiv dword ptr ss : [ebp-0x18]
        test edx, edx
        jne public_6d4cb2e
        mov edx, dword ptr ss : [ebp-0x10]
        mov bl, byte ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx], offset _public_6d4c679
        mov ecx, dword ptr ss : [ebp-8]
        mov byte ptr ds : [ecx+edx+0x8C], bl
        mov byte ptr ds : [ecx+edx+0x96], al
        jmp public_6d4cb3d
        public_6d4cb2e : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x25
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4cb3d : nop
        push dword ptr ds : [esi+0x110]
        mov ebx, dword ptr ds : [esi+4]
        push dword ptr ds : [esi+0x10C]
        push dword ptr ds : [esi+0x5C]
        call public_6d45f05
        pop ecx
        pop ecx
        push eax
        push 1
        push esi
        call dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [ebp-0x14]
        add esp, 0x10
        mov dword ptr ds : [ecx-0x28], eax
        public_6d4cb66 : nop
        inc dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-8]
        add ecx, 4
        add edi, 0x54
        cmp eax, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [ebp-0x14], ecx
        jl public_6d4ca48
        public_6d4cb7e : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4c9c2)
    }
}

#undef public_6d4ca12
#undef public_6d4ca27
#undef public_6d4ca2b
#undef public_6d4ca48
#undef public_6d4ca8b
#undef public_6d4caa2
#undef public_6d4cac1
#undef public_6d4cac9
#undef public_6d4caef
#undef public_6d4caf7
#undef public_6d4cb2e
#undef public_6d4cb3d
#undef public_6d4cb66
#undef public_6d4cb7e
