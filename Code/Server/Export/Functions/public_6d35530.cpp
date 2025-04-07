#include "Server-PCH.h"


#define public_6d35568 _public_6d35568
#define public_6d35581 _public_6d35581
#define public_6d3558d _public_6d3558d
#define public_6d3559b _public_6d3559b
#define public_6d355a0 _public_6d355a0
#define public_6d355b0 _public_6d355b0
#define public_6d355b7 _public_6d355b7
#define public_6d355c0 _public_6d355c0
#define public_6d355d9 _public_6d355d9
#define public_6d355ea _public_6d355ea
#define public_6d355f8 _public_6d355f8
#define public_6d35601 _public_6d35601

PROC_DECLARE(0x6d35530, internal_6d35530, public_6d35530);
extern "C" NAKED register_t __cdecl internal_6d35530()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        xor edi, edi
        cmp word ptr ds : [esi], di
        mov edx, ecx
        mov dword ptr ss : [esp+0xC], edx
        je public_6d355b0
        lea ecx, ds:[esi+2]
        cmp ecx, esi
        jne public_6d3558d
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d35568
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        movzx eax, al
        pop ebx
        pop ecx
        ret 8
        public_6d35568 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d35581
        cmp dword ptr ds : [eax+8], esi
        jne public_6d35581
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6d35581 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        public_6d3558d : nop
        mov eax, dword ptr ds : [edx+0xC]
        test eax, eax
        je public_6d3559b
        mov esi, ecx
        mov edi, 1
        public_6d3559b : nop
        cmp edi, eax
        jae public_6d355b7
        nop 
        public_6d355a0 : nop
        cmp word ptr ds : [esi], 0
        je public_6d35601
        add esi, 2
        inc edi
        cmp edi, eax
        jb public_6d355a0
        jmp public_6d355b7
        public_6d355b0 : nop
        mov eax, dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_6d35601
        public_6d355b7 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        nop 
        lea esp, ss:[esp]
        public_6d355c0 : nop
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d355ea
        mov eax, dword ptr ds : [ecx]
        push esi
        push ebx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        jne public_6d355f8
        mov edx, dword ptr ss : [esp+0xC]
        public_6d355d9 : nop
        cmp edi, dword ptr ds : [edx+0x10]
        jae public_6d35601
        inc edi
        cmp word ptr ds : [esi], 0
        je public_6d35601
        add esi, 2
        jmp public_6d355c0
        public_6d355ea : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d355f8
        cmp dword ptr ds : [ebx+8], esi
        jne public_6d355f8
        jmp public_6d355d9
        public_6d355f8 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6d35601 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d35530)
    }
}

#undef public_6d35568
#undef public_6d35581
#undef public_6d3558d
#undef public_6d3559b
#undef public_6d355a0
#undef public_6d355b0
#undef public_6d355b7
#undef public_6d355c0
#undef public_6d355d9
#undef public_6d355ea
#undef public_6d355f8
#undef public_6d35601
