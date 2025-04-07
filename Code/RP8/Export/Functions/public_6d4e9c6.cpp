#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4e9c6);

#define public_6d4e9eb _public_6d4e9eb
#define public_6d4e9f3 _public_6d4e9f3
#define public_6d4ea28 _public_6d4ea28
#define public_6d4ea2b _public_6d4ea2b
#define public_6d4ea48 _public_6d4ea48
#define public_6d4ea65 _public_6d4ea65
#define public_6d4ea79 _public_6d4ea79
#define public_6d4ea7c _public_6d4ea7c
#define public_6d4ea98 _public_6d4ea98
#define public_6d4eac2 _public_6d4eac2
#define public_6d4ead5 _public_6d4ead5
#define public_6d4eaec _public_6d4eaec

PROC_DECLARE(0x6d4e9c6, internal_6d4e9c6, public_6d4e9c6);
extern "C" NAKED register_t __cdecl internal_6d4e9c6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [edi+0x4C], 1
        mov esi, dword ptr ds : [edi+0x1A4]
        jne public_6d4e9eb
        mov dword ptr ss : [ebp-0xC], 0x1FE
        mov byte ptr ds : [esi+0x1C], 1
        jmp public_6d4e9f3
        public_6d4e9eb : nop
        and dword ptr ss : [ebp-0xC], 0
        and byte ptr ds : [esi+0x1C], 0
        public_6d4e9f3 : nop
        push dword ptr ds : [edi+0x64]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edi+4]
        add ecx, 0x100
        push ecx
        push 1
        push edi
        call dword ptr ds : [eax+8]
        xor ebx, ebx
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 0x10
        cmp dword ptr ds : [edi+0x64], ebx
        mov dword ptr ss : [ebp-0x18], ebx
        jle public_6d4eaec
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [ebp-0x10], ecx
        jmp public_6d4ea2b
        public_6d4ea28 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        public_6d4ea2b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [ecx]
        cdq 
        idiv ecx
        cmp dword ptr ss : [ebp-0xC], 0
        mov dword ptr ss : [ebp-0x14], eax
        je public_6d4ea48
        mov eax, dword ptr ds : [esi+0x18]
        lea eax, ds:[eax+ebx*4]
        add dword ptr ds : [eax], 0xFF
        public_6d4ea48 : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov edi, dword ptr ds : [eax+ebx*4]
        lea eax, ds:[ecx+0xFE]
        cdq 
        lea ebx, ds:[ecx+ecx-2]
        idiv ebx
        and dword ptr ss : [ebp-8], 0
        and dword ptr ss : [ebp-4], 0
        mov edx, eax
        public_6d4ea65 : nop
        cmp dword ptr ss : [ebp-4], edx
        jle public_6d4ea98
        mov eax, dword ptr ss : [ebp-8]
        lea ebx, ds:[ecx+ecx-2]
        imul eax, 0x1FE
        jmp public_6d4ea7c
        public_6d4ea79 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        public_6d4ea7c : nop
        add eax, 0x1FE
        mov dword ptr ss : [ebp-0x1C], eax
        lea eax, ds:[eax+ecx+0xFE]
        cdq 
        idiv ebx
        inc dword ptr ss : [ebp-8]
        mov edx, eax
        cmp dword ptr ss : [ebp-4], edx
        jg public_6d4ea79
        public_6d4ea98 : nop
        mov al, byte ptr ss : [ebp-8]
        imul byte ptr ss : [ebp-0x14]
        mov ebx, dword ptr ss : [ebp-4]
        inc dword ptr ss : [ebp-4]
        cmp dword ptr ss : [ebp-4], 0xFF
        mov byte ptr ds : [ebx+edi], al
        jle public_6d4ea65
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d4ead5
        xor edx, edx
        inc edx
        lea eax, ds:[edi+0xFF]
        lea ecx, ds:[edi-1]
        public_6d4eac2 : nop
        mov bl, byte ptr ds : [edi]
        mov byte ptr ds : [ecx], bl
        mov bl, byte ptr ds : [eax]
        mov byte ptr ds : [eax+edx], bl
        inc edx
        dec ecx
        cmp edx, 0xFF
        jle public_6d4eac2
        public_6d4ead5 : nop
        mov ebx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp+8]
        add dword ptr ss : [ebp-0x10], 4
        inc ebx
        cmp ebx, dword ptr ds : [eax+0x64]
        mov dword ptr ss : [ebp-0x18], ebx
        jl public_6d4ea28
        public_6d4eaec : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4e9c6)
    }
}

#undef public_6d4e9eb
#undef public_6d4e9f3
#undef public_6d4ea28
#undef public_6d4ea2b
#undef public_6d4ea48
#undef public_6d4ea65
#undef public_6d4ea79
#undef public_6d4ea7c
#undef public_6d4ea98
#undef public_6d4eac2
#undef public_6d4ead5
#undef public_6d4eaec
