#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3afe6 _public_6d3afe6
#define public_6d3aff9 _public_6d3aff9
#define public_6d3b025 _public_6d3b025
#define public_6d3b035 _public_6d3b035
#define public_6d3b055 _public_6d3b055
#define public_6d3b065 _public_6d3b065
#define public_6d3b071 _public_6d3b071
#define public_6d3b076 _public_6d3b076
#define public_6d3b08a _public_6d3b08a
#define public_6d3b08c _public_6d3b08c
#define public_6d3b095 _public_6d3b095

PROC_DECLARE(0x6d3afb0, internal_6d3afb0, public_6d3afb0);
extern "C" NAKED register_t __cdecl internal_6d3afb0()
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
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, ebp
        mov dword ptr ds : [esi+0x18], ecx
        mov cx, word ptr ds : [edx]
        xor ebx, ebx
        test cx, cx
        je public_6d3b076
        cmp cx, word ptr ds : [eax+8]
        je public_6d3afe6
        cmp cx, word ptr ds : [eax+0xE]
        jne public_6d3b076
        public_6d3afe6 : nop
        add edx, 2
        mov dword ptr ds : [esi+0x10], edx
        sub edx, ebp
        test edx, 0xFFFFFFFE
        jne public_6d3b025
        mov ebx, dword ptr ds : [edi+0x10]
        public_6d3aff9 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+8]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3b08a
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3b08c
        public_6d3b025 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d3b071
        mov ebx, 1
        cmp eax, ebx
        jbe public_6d3aff9
        public_6d3b035 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov cx, word ptr ds : [edx]
        test cx, cx
        je public_6d3b065
        cmp cx, word ptr ds : [eax+8]
        je public_6d3b055
        cmp cx, word ptr ds : [eax+0xE]
        jne public_6d3b065
        public_6d3b055 : nop
        add edx, 2
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [edi+0xC]
        inc ebx
        cmp ebx, eax
        jb public_6d3b035
        jmp public_6d3aff9
        public_6d3b065 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d3b071 : nop
        mov dword ptr ds : [esi+0x10], ebp
        jmp public_6d3aff9
        public_6d3b076 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d3aff9
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d3b08a : nop
        mov eax, edx
        public_6d3b08c : nop
        test eax, eax
        je public_6d3b095
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebx
        public_6d3b095 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d3afb0)
    }
}

#undef public_6d3afe6
#undef public_6d3aff9
#undef public_6d3b025
#undef public_6d3b035
#undef public_6d3b055
#undef public_6d3b065
#undef public_6d3b071
#undef public_6d3b076
#undef public_6d3b08a
#undef public_6d3b08c
#undef public_6d3b095
