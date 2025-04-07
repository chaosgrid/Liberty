#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3adf5 _public_6d3adf5
#define public_6d3ae08 _public_6d3ae08
#define public_6d3ae40 _public_6d3ae40
#define public_6d3ae68 _public_6d3ae68
#define public_6d3ae70 _public_6d3ae70
#define public_6d3ae72 _public_6d3ae72
#define public_6d3ae7b _public_6d3ae7b
#define public_6d3ae8a _public_6d3ae8a

PROC_DECLARE(0x6d3adc0, internal_6d3adc0, public_6d3adc0);
extern "C" NAKED register_t __cdecl internal_6d3adc0()
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
        je public_6d3ae08
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, ebp
        mov dword ptr ds : [esi+0x18], ecx
        mov cx, word ptr ds : [edx]
        test cx, cx
        je public_6d3ae08
        cmp cx, word ptr ds : [eax+8]
        je public_6d3adf5
        cmp cx, word ptr ds : [eax+0xE]
        jne public_6d3ae08
        public_6d3adf5 : nop
        add edx, 2
        mov dword ptr ds : [esi+0x10], edx
        sub edx, ebp
        test edx, 0xFFFFFFFE
        jne public_6d3ae40
        mov ebx, dword ptr ds : [edi+0xC]
        public_6d3ae08 : nop
        cmp ebx, dword ptr ds : [edi+0xC]
        jb public_6d3ae8a
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+8]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3ae70
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3ae72
        lea esp, ss:[esp]
        public_6d3ae40 : nop
        mov eax, dword ptr ds : [edi+0x10]
        inc ebx
        cmp ebx, eax
        jae public_6d3ae08
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov cx, word ptr ds : [edx]
        test cx, cx
        je public_6d3ae08
        cmp cx, word ptr ds : [eax+8]
        je public_6d3ae68
        cmp cx, word ptr ds : [eax+0xE]
        jne public_6d3ae08
        public_6d3ae68 : nop
        add edx, 2
        mov dword ptr ds : [esi+0x10], edx
        jmp public_6d3ae40
        public_6d3ae70 : nop
        mov eax, edx
        public_6d3ae72 : nop
        test eax, eax
        je public_6d3ae7b
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebx
        public_6d3ae7b : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6d3ae8a : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d3adc0)
    }
}

#undef public_6d3adf5
#undef public_6d3ae08
#undef public_6d3ae40
#undef public_6d3ae68
#undef public_6d3ae70
#undef public_6d3ae72
#undef public_6d3ae7b
#undef public_6d3ae8a
