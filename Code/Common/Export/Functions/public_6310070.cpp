#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262a30);
CLANG_FORWARD_PROC_SYMBOL(public_630f3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);

#define public_63100a5 _public_63100a5
#define public_63100c3 _public_63100c3
#define public_63100cf _public_63100cf
#define public_63100d1 _public_63100d1
#define public_63100ea _public_63100ea
#define public_63100ed _public_63100ed
#define public_6310103 _public_6310103
#define public_6310115 _public_6310115
#define public_6310117 _public_6310117
#define public_631013a _public_631013a
#define public_6310146 _public_6310146
#define public_631014a _public_631014a
#define public_6310155 _public_6310155
#define public_631015c _public_631015c
#define public_6310167 _public_6310167

PROC_DECLARE(0x6310070, internal_6310070, public_6310070);
extern "C" NAKED register_t __cdecl internal_6310070()
{
    __asm
    {
        push ecx
        mov al, byte ptr ds : [ecx+0x1564]
        push ebx
        xor ebx, ebx
        cmp al, bl
        je public_6310167
        mov eax, dword ptr ds : [ecx+0x1454]
        cmp eax, ebx
        push esi
        lea esi, ds:[ecx+0x1428]
        push edi
        je public_6310103
        movzx eax, word ptr ds : [eax+2]
        movsx ecx, word ptr ds : [esi+0x30]
        cmp ecx, eax
        jge public_6310103
        mov edi, 3
        public_63100a5 : nop
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], edi
        call public_6262a30
        mov dword ptr ds : [esi+0x34], eax
        cmp dword ptr ss : [esp+0xC], edi
        je public_63100c3
        mov dword ptr ds : [esi+0x34], ebx
        jmp public_63100ed
        public_63100c3 : nop
        mov edx, dword ptr ds : [esi+0x18]
        cmp edx, ebx
        je public_63100cf
        mov ecx, dword ptr ds : [esi+0x20]
        jmp public_63100d1
        public_63100cf : nop
        xor ecx, ecx
        public_63100d1 : nop
        mov eax, dword ptr ds : [esi+0x34]
        movzx eax, byte ptr ds : [eax+2]
        lea ecx, ds:[ecx+eax*4]
        add eax, ecx
        cmp edx, ebx
        je public_63100ed
        mov ecx, dword ptr ds : [esi+0x1C]
        cmp eax, ecx
        jbe public_63100ea
        mov eax, ecx
        public_63100ea : nop
        mov dword ptr ds : [esi+0x20], eax
        public_63100ed : nop
        inc word ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [esi+0x2C]
        mov ax, word ptr ds : [esi+0x30]
        movzx ecx, word ptr ds : [edx+2]
        movsx edx, ax
        cmp edx, ecx
        jl public_63100a5
        public_6310103 : nop
        mov edi, dword ptr ds : [esi+0x18]
        cmp edi, ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x34], ebx
        je public_6310115
        mov eax, dword ptr ds : [esi+0x20]
        jmp public_6310117
        public_6310115 : nop
        xor eax, eax
        public_6310117 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        cmp eax, dword ptr ds : [ecx+8]
        jae public_6310155
        cmp edi, ebx
        mov edx, 4
        je public_6310146
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x1C]
        cmp eax, ecx
        jae public_6310146
        sub ecx, eax
        cmp ecx, edx
        jae public_631013a
        mov edx, ecx
        public_631013a : nop
        lea ecx, ds:[eax+edi]
        add eax, edx
        mov dword ptr ds : [esi+0x20], eax
        mov eax, ecx
        jmp public_631014a
        public_6310146 : nop
        xor edx, edx
        xor eax, eax
        public_631014a : nop
        cmp edx, 4
        mov dword ptr ds : [esi+0x2C], eax
        je public_631015c
        mov dword ptr ds : [esi+0x2C], ebx
        public_6310155 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 
        public_631015c : nop
        pop edi
        mov word ptr ds : [esi+0x30], bx
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_6310167 : nop
        call public_630f3d0
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6310070)
    }
}

#undef public_63100a5
#undef public_63100c3
#undef public_63100cf
#undef public_63100d1
#undef public_63100ea
#undef public_63100ed
#undef public_6310103
#undef public_6310115
#undef public_6310117
#undef public_631013a
#undef public_6310146
#undef public_631014a
#undef public_6310155
#undef public_631015c
#undef public_6310167
