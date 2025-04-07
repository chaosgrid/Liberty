#include "Shading-PCH.h"


#define public_6eb6220 _public_6eb6220
#define public_6eb6230 _public_6eb6230
#define public_6eb626a _public_6eb626a
#define public_6eb626c _public_6eb626c
#define public_6eb62b0 _public_6eb62b0
#define public_6eb6319 _public_6eb6319
#define public_6eb631b _public_6eb631b
#define public_6eb6360 _public_6eb6360
#define public_6eb637a _public_6eb637a
#define public_6eb6388 _public_6eb6388

PROC_DECLARE(0x6eb61e0, internal_6eb61e0, public_6eb61e0);
extern "C" NAKED register_t __cdecl internal_6eb61e0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        lea edx, ds:[ebx+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6eb6220
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6eb6220
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_6eb6220
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6eb6220 : nop
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed16cc
        mov eax, 0x89
        mov edi, edi
        public_6eb6230 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi]
        push ecx
        push eax
        push edi
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb6230
        mov edi, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push 0
        push esi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_6eb626a
        add eax, 0xFFFFFFFC
        jmp public_6eb626c
        public_6eb626a : nop
        xor eax, eax
        public_6eb626c : nop
        mov ecx, dword ptr ds : [esi]
        push eax
        push 0xB
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xD
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [esi]
        inc edx
        push edx
        push 0xE
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov edi, dword ptr ds : [ebx+4]
        mov ebp, 1
        mov esi, offset public_6ed16ec
        mov eax, ebp
        lea ecx, ds:[ecx]
        public_6eb62b0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb62b0
        mov al, byte ptr ds : [ebx+0x68]
        test al, al
        je public_6eb637a
        mov eax, dword ptr ds : [ebx+0x18]
        cmp dword ptr ds : [eax+0x30], 0xFFFFFFFF
        je public_6eb637a
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xB
        push 1
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edi, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [edi+0x34]
        mov esi, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [esi]
        add edi, 0x2C
        push eax
        push 1
        push esi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_6eb6319
        add eax, 0xFFFFFFFC
        jmp public_6eb631b
        public_6eb6319 : nop
        xor eax, eax
        public_6eb631b : nop
        mov ecx, dword ptr ds : [esi]
        push eax
        push 0xB
        push 1
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xD
        push 1
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [esi]
        inc edx
        push edx
        push 0xE
        push 1
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov edi, dword ptr ds : [ebx+4]
        mov ebp, 2
        mov esi, offset public_6ed1724
        mov eax, 1
        nop 
        public_6eb6360 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb6360
        public_6eb637a : nop
        mov ebx, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed175c
        mov eax, 1
        pop edi
        public_6eb6388 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebp
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb6388
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb61e0)
    }
}

#undef public_6eb6220
#undef public_6eb6230
#undef public_6eb626a
#undef public_6eb626c
#undef public_6eb62b0
#undef public_6eb6319
#undef public_6eb631b
#undef public_6eb6360
#undef public_6eb637a
#undef public_6eb6388
