#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3ab00 _public_6d3ab00
#define public_6d3ab24 _public_6d3ab24
#define public_6d3ab28 _public_6d3ab28
#define public_6d3ab5b _public_6d3ab5b
#define public_6d3ab5d _public_6d3ab5d
#define public_6d3ab6a _public_6d3ab6a
#define public_6d3ab7a _public_6d3ab7a

PROC_DECLARE(0x6d3aab0, internal_6d3aab0, public_6d3aab0);
extern "C" NAKED register_t __cdecl internal_6d3aab0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi+0x10]
        lea ebx, ds:[edi+0x10]
        mov esi, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+0x10]
        xor ebp, ebp
        test eax, eax
        mov dword ptr ss : [esp+0x18], ebp
        je public_6d3ab28
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+4]
        push ebx
        mov dword ptr ds : [edi+0x18], edx
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_6d3ab24
        mov ecx, dword ptr ds : [ebx]
        sub ecx, dword ptr ss : [esp+0x10]
        test ecx, 0xFFFFFFFE
        jne public_6d3ab00
        mov ebp, dword ptr ds : [esi+0xC]
        jmp public_6d3ab28
        lea esp, ss:[esp]
        public_6d3ab00 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x10]
        inc ebp
        cmp ebp, eax
        mov dword ptr ss : [esp+0x18], ebp
        jae public_6d3ab28
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+4]
        push ebx
        mov dword ptr ds : [edi+0x18], edx
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_6d3ab00
        public_6d3ab24 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_6d3ab28 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        jb public_6d3ab7a
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov ebx, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, ebx
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3ab5b
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3ab5d
        public_6d3ab5b : nop
        mov eax, edx
        public_6d3ab5d : nop
        test eax, eax
        je public_6d3ab6a
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ebp
        public_6d3ab6a : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+0x18], edx
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        public_6d3ab7a : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ebx], eax
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d3aab0)
    }
}

#undef public_6d3ab00
#undef public_6d3ab24
#undef public_6d3ab28
#undef public_6d3ab5b
#undef public_6d3ab5d
#undef public_6d3ab6a
#undef public_6d3ab7a
