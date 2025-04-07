#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ad74);

#define public_6d4ad87 _public_6d4ad87
#define public_6d4adaf _public_6d4adaf
#define public_6d4adbd _public_6d4adbd
#define public_6d4ade4 _public_6d4ade4
#define public_6d4adf5 _public_6d4adf5
#define public_6d4adf8 _public_6d4adf8
#define public_6d4ae27 _public_6d4ae27
#define public_6d4ae29 _public_6d4ae29
#define public_6d4ae38 _public_6d4ae38
#define public_6d4ae42 _public_6d4ae42
#define public_6d4ae55 _public_6d4ae55
#define public_6d4ae5a _public_6d4ae5a

PROC_DECLARE(0x6d4ad74, internal_6d4ad74, public_6d4ad74);
extern "C" NAKED register_t __cdecl internal_6d4ad74()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ds : [esi]
        jmp public_6d4ae38
        public_6d4ad87 : nop
        cmp dword ptr ds : [esi+8], 0
        jne public_6d4adf8
        test ebx, ebx
        jne public_6d4adaf
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax+0x14]
        push eax
        call dword ptr ds : [ecx+0xC]
        test al, al
        pop ecx
        je public_6d4ae5a
        mov eax, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+4]
        public_6d4adaf : nop
        movzx ecx, byte ptr ds : [edi]
        dec ebx
        mov eax, 0xFF
        inc edi
        cmp ecx, eax
        jne public_6d4ae29
        public_6d4adbd : nop
        test ebx, ebx
        jne public_6d4ade4
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax+0x14]
        push eax
        call dword ptr ds : [ecx+0xC]
        test al, al
        pop ecx
        je public_6d4ae5a
        mov eax, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+4]
        mov eax, 0xFF
        public_6d4ade4 : nop
        movzx ecx, byte ptr ds : [edi]
        dec ebx
        inc edi
        cmp ecx, eax
        je public_6d4adbd
        test ecx, ecx
        jne public_6d4adf5
        mov ecx, eax
        jmp public_6d4ae29
        public_6d4adf5 : nop
        mov dword ptr ds : [esi+8], ecx
        public_6d4adf8 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, dword ptr ss : [ebp+0x14]
        jge public_6d4ae42
        mov eax, dword ptr ds : [esi+0x20]
        cmp byte ptr ds : [eax], 0
        jne public_6d4ae27
        mov eax, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [eax+0x14], 0x71
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+0x20]
        pop ecx
        pop ecx
        mov byte ptr ds : [eax], 1
        public_6d4ae27 : nop
        xor ecx, ecx
        public_6d4ae29 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        shl eax, 8
        or eax, ecx
        add dword ptr ss : [ebp+0x10], 8
        mov dword ptr ss : [ebp+0xC], eax
        public_6d4ae38 : nop
        cmp dword ptr ss : [ebp+0x10], 0x19
        jl public_6d4ad87
        public_6d4ae42 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], ebx
        mov al, 1
        public_6d4ae55 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        public_6d4ae5a : nop
        xor al, al
        jmp public_6d4ae55
        UNREACHABLE_TRAP(0x6d4ad74)
    }
}

#undef public_6d4ad87
#undef public_6d4adaf
#undef public_6d4adbd
#undef public_6d4ade4
#undef public_6d4adf5
#undef public_6d4adf8
#undef public_6d4ae27
#undef public_6d4ae29
#undef public_6d4ae38
#undef public_6d4ae42
#undef public_6d4ae55
#undef public_6d4ae5a
