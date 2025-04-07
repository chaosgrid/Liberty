#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d24eb7 _public_6d24eb7
#define public_6d24eb9 _public_6d24eb9
#define public_6d24ec0 _public_6d24ec0
#define public_6d24ece _public_6d24ece
#define public_6d24ee8 _public_6d24ee8
#define public_6d24eea _public_6d24eea
#define public_6d24ef1 _public_6d24ef1
#define public_6d24f06 _public_6d24f06

PROC_DECLARE(0x6d24e70, internal_6d24e70, public_6d24e70);
extern "C" NAKED register_t __cdecl internal_6d24e70()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        test al, al
        lea eax, ds:[edx+4]
        mov dword ptr ds : [ecx+0x1008], eax
        je public_6d24ece
        cmp eax, dword ptr ds : [ecx+0x100C]
        jbe public_6d24eb7
        add eax, 0xFFFFFFFC
        push 4
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d24eb9
        public_6d24eb7 : nop
        mov eax, edx
        public_6d24eb9 : nop
        test eax, eax
        je public_6d24ec0
        mov byte ptr ds : [eax], 1
        public_6d24ec0 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6d24ece : nop
        cmp eax, dword ptr ds : [ecx+0x100C]
        jbe public_6d24ee8
        add eax, 0xFFFFFFFC
        push 4
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d24eea
        public_6d24ee8 : nop
        mov eax, edx
        public_6d24eea : nop
        test eax, eax
        je public_6d24ef1
        mov byte ptr ds : [eax], 0
        public_6d24ef1 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        je public_6d24f06
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6d24f06 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d24e70)
    }
}

#undef public_6d24eb7
#undef public_6d24eb9
#undef public_6d24ec0
#undef public_6d24ece
#undef public_6d24ee8
#undef public_6d24eea
#undef public_6d24ef1
#undef public_6d24f06
