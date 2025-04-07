#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46a84);

#define public_6d46aa3 _public_6d46aa3
#define public_6d46aae _public_6d46aae
#define public_6d46abe _public_6d46abe
#define public_6d46ac9 _public_6d46ac9
#define public_6d46aed _public_6d46aed
#define public_6d46afb _public_6d46afb
#define public_6d46b0b _public_6d46b0b

PROC_DECLARE(0x6d46a84, internal_6d46a84, public_6d46a84);
extern "C" NAKED register_t __cdecl internal_6d46a84()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr ds : [esi+8]
        push ebx
        mov ebx, dword ptr ds : [esi+0x18]
        shl eax, 7
        imul ebx, eax
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [esi+0x10]
        push edi
        xor edi, edi
        test eax, eax
        jle public_6d46b0b
        public_6d46aa3 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        sub eax, edi
        cmp ecx, eax
        jge public_6d46aae
        mov eax, ecx
        public_6d46aae : nop
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [esi+0x1C]
        add ecx, edi
        sub edx, ecx
        cmp eax, edx
        jl public_6d46abe
        mov eax, edx
        public_6d46abe : nop
        mov edx, dword ptr ds : [esi+4]
        sub edx, ecx
        cmp eax, edx
        jl public_6d46ac9
        mov eax, edx
        public_6d46ac9 : nop
        test eax, eax
        jle public_6d46b0b
        imul eax, dword ptr ss : [ebp-8]
        cmp byte ptr ss : [ebp+0xC], 0
        push eax
        mov dword ptr ss : [ebp-4], eax
        push ebx
        je public_6d46aed
        mov eax, dword ptr ds : [esi]
        push dword ptr ds : [eax+edi*4]
        lea eax, ds:[esi+0x28]
        push eax
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [esi+0x2C]
        jmp public_6d46afb
        public_6d46aed : nop
        mov ecx, dword ptr ds : [esi]
        push dword ptr ds : [ecx+edi*4]
        lea eax, ds:[esi+0x28]
        push eax
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [eax]
        public_6d46afb : nop
        add edi, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        add ebx, dword ptr ss : [ebp-4]
        add esp, 0x14
        cmp edi, eax
        jl public_6d46aa3
        public_6d46b0b : nop
        pop edi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d46a84)
    }
}

#undef public_6d46aa3
#undef public_6d46aae
#undef public_6d46abe
#undef public_6d46ac9
#undef public_6d46aed
#undef public_6d46afb
#undef public_6d46b0b
