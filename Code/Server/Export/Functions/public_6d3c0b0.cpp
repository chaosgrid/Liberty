#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3c0e0 _public_6d3c0e0
#define public_6d3c0f7 _public_6d3c0f7
#define public_6d3c10a _public_6d3c10a
#define public_6d3c141 _public_6d3c141
#define public_6d3c160 _public_6d3c160
#define public_6d3c177 _public_6d3c177
#define public_6d3c17c _public_6d3c17c
#define public_6d3c17e _public_6d3c17e
#define public_6d3c18b _public_6d3c18b
#define public_6d3c19a _public_6d3c19a

PROC_DECLARE(0x6d3c0b0, internal_6d3c0b0, public_6d3c0b0);
extern "C" NAKED register_t __cdecl internal_6d3c0b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0x10]
        mov ebx, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ebx+0x10]
        xor ebp, ebp
        test eax, eax
        je public_6d3c10a
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+0x18], edx
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        cmp edx, ecx
        mov eax, dword ptr ds : [edi+0x10]
        je public_6d3c0f7
        public_6d3c0e0 : nop
        mov si, word ptr ds : [eax]
        test si, si
        je public_6d3c10a
        cmp word ptr ds : [edx], si
        jne public_6d3c10a
        add edx, 2
        add eax, 2
        cmp edx, ecx
        jne public_6d3c0e0
        public_6d3c0f7 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x10], eax
        sub eax, edx
        test eax, 0xFFFFFFFE
        jne public_6d3c141
        mov ebp, dword ptr ds : [ebx+0xC]
        public_6d3c10a : nop
        cmp ebp, dword ptr ds : [ebx+0xC]
        jb public_6d3c19a
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov esi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, esi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3c17c
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3c17e
        public_6d3c141 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        inc ebp
        cmp ebp, eax
        jae public_6d3c10a
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+0x18], edx
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        cmp edx, ecx
        mov eax, dword ptr ds : [edi+0x10]
        je public_6d3c177
        nop 
        public_6d3c160 : nop
        mov si, word ptr ds : [eax]
        test si, si
        je public_6d3c10a
        cmp word ptr ds : [edx], si
        jne public_6d3c10a
        add edx, 2
        add eax, 2
        cmp edx, ecx
        jne public_6d3c160
        public_6d3c177 : nop
        mov dword ptr ds : [edi+0x10], eax
        jmp public_6d3c141
        public_6d3c17c : nop
        mov eax, edx
        public_6d3c17e : nop
        test eax, eax
        je public_6d3c18b
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ebp
        public_6d3c18b : nop
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edi+0x18], edx
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6d3c19a : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x10], eax
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d3c0b0)
    }
}

#undef public_6d3c0e0
#undef public_6d3c0f7
#undef public_6d3c10a
#undef public_6d3c141
#undef public_6d3c160
#undef public_6d3c177
#undef public_6d3c17c
#undef public_6d3c17e
#undef public_6d3c18b
#undef public_6d3c19a
