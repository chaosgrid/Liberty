#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad0603);
CLANG_FORWARD_PROC_SYMBOL(public_6ad078e);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4030);

#define public_6ad0633 _public_6ad0633
#define public_6ad0640 _public_6ad0640
#define public_6ad0657 _public_6ad0657
#define public_6ad0659 _public_6ad0659
#define public_6ad0682 _public_6ad0682
#define public_6ad0689 _public_6ad0689
#define public_6ad068c _public_6ad068c
#define public_6ad06a3 _public_6ad06a3

PROC_DECLARE(0x6ad0603, internal_6ad0603, public_6ad0603);
extern "C" NAKED register_t __cdecl internal_6ad0603()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+8]
        push edi
        mov eax, dword ptr ds : [esi+4]
        dec eax
        cmp byte ptr ss : [ebp+0x14], 0
        je public_6ad0633
        cmp eax, dword ptr ss : [ebp+0xC]
        jne public_6ad0633
        xor ecx, ecx
        cmp dword ptr ds : [esi], 0x2D
        sete cl
        add ecx, eax
        add ecx, ebx
        mov eax, ecx
        mov byte ptr ds : [eax], 0x30
        and byte ptr ds : [eax+1], 0
        public_6ad0633 : nop
        cmp dword ptr ds : [esi], 0x2D
        mov edi, ebx
        jne public_6ad0640
        mov byte ptr ds : [ebx], 0x2D
        lea edi, ds:[ebx+1]
        public_6ad0640 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jg public_6ad0657
        push 1
        push edi
        call public_6ad078e
        pop ecx
        mov byte ptr ds : [edi], 0x30
        pop ecx
        inc edi
        jmp public_6ad0659
        public_6ad0657 : nop
        add edi, eax
        public_6ad0659 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        jle public_6ad06a3
        push 1
        push edi
        call public_6ad078e
        mov al, byte ptr ds : [public_6addc14]
        pop ecx
        mov byte ptr ds : [edi], al
        mov esi, dword ptr ds : [esi+4]
        inc edi
        pop ecx
        test esi, esi
        jge public_6ad06a3
        cmp byte ptr ss : [ebp+0x14], 0
        je public_6ad0682
        neg esi
        jmp public_6ad0689
        public_6ad0682 : nop
        neg esi
        cmp dword ptr ss : [ebp+0xC], esi
        jl public_6ad068c
        public_6ad0689 : nop
        mov dword ptr ss : [ebp+0xC], esi
        public_6ad068c : nop
        push dword ptr ss : [ebp+0xC]
        push edi
        call public_6ad078e
        push dword ptr ss : [ebp+0xC]
        push 0x30
        push edi
        call public_6ad4030
        add esp, 0x14
        public_6ad06a3 : nop
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad0603)
    }
}

#undef public_6ad0633
#undef public_6ad0640
#undef public_6ad0657
#undef public_6ad0659
#undef public_6ad0682
#undef public_6ad0689
#undef public_6ad068c
#undef public_6ad06a3
