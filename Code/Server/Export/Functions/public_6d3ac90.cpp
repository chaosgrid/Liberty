#include "Server-PCH.h"


#define public_6d3acd1 _public_6d3acd1
#define public_6d3acff _public_6d3acff
#define public_6d3ad19 _public_6d3ad19
#define public_6d3ad26 _public_6d3ad26
#define public_6d3ad47 _public_6d3ad47
#define public_6d3ad4c _public_6d3ad4c
#define public_6d3ad60 _public_6d3ad60
#define public_6d3ad79 _public_6d3ad79
#define public_6d3ad90 _public_6d3ad90
#define public_6d3ad9e _public_6d3ad9e
#define public_6d3ada8 _public_6d3ada8

PROC_DECLARE(0x6d3ac90, internal_6d3ac90, public_6d3ac90);
extern "C" NAKED register_t __cdecl internal_6d3ac90()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ebx, ecx
        xor ebp, ebp
        push edi
        mov edi, dword ptr ds : [ebx+0x10]
        cmp edi, ebp
        mov edx, esi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6d3ad4c
        mov ax, word ptr ds : [esi]
        test ax, ax
        mov ecx, dword ptr ds : [ebx+8]
        je public_6d3ad4c
        cmp ax, word ptr ds : [ecx+8]
        je public_6d3acd1
        cmp ax, word ptr ds : [ecx+0xE]
        jne public_6d3ad4c
        public_6d3acd1 : nop
        add esi, 2
        mov ebp, esi
        sub ebp, edx
        sar ebp, 1
        neg ebp
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6d3ad26
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d3acff
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        pop ecx
        ret 8
        public_6d3acff : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3ad19
        cmp dword ptr ds : [eax+8], esi
        jne public_6d3ad19
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6d3ad19 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        public_6d3ad26 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        inc eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x1C], eax
        jae public_6d3ad4c
        mov ax, word ptr ds : [esi]
        test ax, ax
        je public_6d3ad4c
        cmp ax, word ptr ds : [ecx+8]
        je public_6d3ad47
        cmp ax, word ptr ds : [ecx+0xE]
        jne public_6d3ad4c
        public_6d3ad47 : nop
        add esi, 2
        jmp public_6d3ad26
        public_6d3ad4c : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [ebx+0xC], eax
        ja public_6d3ada8
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6d3ad60 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d3ad90
        mov edx, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d3ad9e
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d3ad79 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        je public_6d3ada8
        mov eax, ecx
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        lea esi, ds:[esi+ebp*2]
        jmp public_6d3ad60
        public_6d3ad90 : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d3ad9e
        cmp dword ptr ds : [edi+8], esi
        jne public_6d3ad9e
        jmp public_6d3ad79
        public_6d3ad9e : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6d3ada8 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d3ac90)
    }
}

#undef public_6d3acd1
#undef public_6d3acff
#undef public_6d3ad19
#undef public_6d3ad26
#undef public_6d3ad47
#undef public_6d3ad4c
#undef public_6d3ad60
#undef public_6d3ad79
#undef public_6d3ad90
#undef public_6d3ad9e
#undef public_6d3ada8
