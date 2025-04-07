#include "Server-PCH.h"


#define public_6d3a1f0 _public_6d3a1f0
#define public_6d3a230 _public_6d3a230
#define public_6d3a247 _public_6d3a247
#define public_6d3a2aa _public_6d3a2aa
#define public_6d3a2ac _public_6d3a2ac

PROC_DECLARE(0x6d3a190, internal_6d3a190, public_6d3a190);
extern "C" NAKED register_t __cdecl internal_6d3a190()
{
    __asm
    {
        sub esp, 0x10
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x14]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        push edi
        mov edi, dword ptr ds : [eax+0x1008]
        mov eax, dword ptr ds : [edi-4]
        sub edi, 4
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edi
        je public_6d3a247
        mov eax, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+0x18], esi
        mov eax, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [edx]
        mov esi, dword ptr ds : [esi+4]
        shl eax, 5
        mov bl, byte ptr ds : [eax+esi+8]
        add eax, esi
        test bl, bl
        je public_6d3a247
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov ebp, dword ptr ds : [edx+0x10]
        mov dword ptr ss : [esp+0x10], eax
        je public_6d3a230
        nop 
        lea esp, ss:[esp]
        public_6d3a1f0 : nop
        mov di, word ptr ss : [ebp]
        test di, di
        je public_6d3a247
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64ba0]
        push edi
        mov ebx, eax
        call dword ptr ds : [public_6d64ba0]
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 8
        cmp ax, bx
        jne public_6d3a247
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 2
        add ebp, 2
        cmp esi, eax
        jne public_6d3a1f0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        public_6d3a230 : nop
        mov dword ptr ds : [edx+0x10], ebp
        inc dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ecx+4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0x18], ecx
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        public_6d3a247 : nop
        mov eax, dword ptr ds : [edx+0x14]
        mov edi, dword ptr ds : [eax+0x1008]
        mov esi, dword ptr ds : [eax+0x1004]
        add edi, 0xFFFFFFF8
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [eax+0x1008], edi
        jne public_6d3a2aa
        mov esi, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1000], ecx
        add ecx, 0x10
        mov dword ptr ds : [eax+0x1004], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x1008], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0x100C], ecx
        mov eax, esi
        jmp public_6d3a2ac
        public_6d3a2aa : nop
        mov eax, ecx
        public_6d3a2ac : nop
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [edx+0x10], ecx
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d3a190)
    }
}

#undef public_6d3a1f0
#undef public_6d3a230
#undef public_6d3a247
#undef public_6d3a2aa
#undef public_6d3a2ac
