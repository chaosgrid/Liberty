#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d354ab _public_6d354ab
#define public_6d354e0 _public_6d354e0
#define public_6d35502 _public_6d35502
#define public_6d35504 _public_6d35504
#define public_6d3550d _public_6d3550d
#define public_6d3551c _public_6d3551c

PROC_DECLARE(0x6d35470, internal_6d35470, public_6d35470);
extern "C" NAKED register_t __cdecl internal_6d35470()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [esi+0x10]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x10]
        xor ebx, ebx
        test eax, eax
        je public_6d354ab
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, ebp
        mov dword ptr ds : [esi+0x18], ecx
        cmp word ptr ds : [eax], bx
        je public_6d354ab
        add eax, 2
        mov edx, eax
        sub edx, ebp
        test edx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], eax
        jne public_6d354e0
        mov ebx, dword ptr ds : [edi+0xC]
        public_6d354ab : nop
        cmp ebx, dword ptr ds : [edi+0xC]
        jb public_6d3551c
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+8]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d35502
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d35504
        lea esp, ss:[esp]
        public_6d354e0 : nop
        mov eax, dword ptr ds : [edi+0x10]
        inc ebx
        cmp ebx, eax
        jae public_6d354ab
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [esi+0x10]
        cmp word ptr ds : [eax], 0
        je public_6d354ab
        add eax, 2
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d354e0
        public_6d35502 : nop
        mov eax, edx
        public_6d35504 : nop
        test eax, eax
        je public_6d3550d
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebx
        public_6d3550d : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6d3551c : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d35470)
    }
}

#undef public_6d354ab
#undef public_6d354e0
#undef public_6d35502
#undef public_6d35504
#undef public_6d3550d
#undef public_6d3551c
