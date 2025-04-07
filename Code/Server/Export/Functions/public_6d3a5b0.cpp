#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3a5e7 _public_6d3a5e7
#define public_6d3a5fc _public_6d3a5fc
#define public_6d3a630 _public_6d3a630
#define public_6d3a65a _public_6d3a65a
#define public_6d3a662 _public_6d3a662
#define public_6d3a664 _public_6d3a664
#define public_6d3a66d _public_6d3a66d
#define public_6d3a67c _public_6d3a67c

PROC_DECLARE(0x6d3a5b0, internal_6d3a5b0, public_6d3a5b0);
extern "C" NAKED register_t __cdecl internal_6d3a5b0()
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
        je public_6d3a5fc
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, ebp
        cmp edx, ecx
        je public_6d3a5fc
        mov dx, word ptr ds : [ecx]
        cmp dx, word ptr ds : [eax+8]
        je public_6d3a5e7
        cmp dx, word ptr ds : [eax+0xE]
        jne public_6d3a5fc
        public_6d3a5e7 : nop
        add ecx, 2
        mov edx, ecx
        sub edx, ebp
        test edx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], ecx
        jne public_6d3a630
        mov ebx, dword ptr ds : [edi+0xC]
        public_6d3a5fc : nop
        cmp ebx, dword ptr ds : [edi+0xC]
        jb public_6d3a67c
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+8]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3a662
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3a664
        lea ecx, ds:[ecx]
        public_6d3a630 : nop
        mov eax, dword ptr ds : [edi+0x10]
        inc ebx
        cmp ebx, eax
        jae public_6d3a5fc
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x10]
        cmp edx, ecx
        je public_6d3a5fc
        mov dx, word ptr ds : [ecx]
        cmp dx, word ptr ds : [eax+8]
        je public_6d3a65a
        cmp dx, word ptr ds : [eax+0xE]
        jne public_6d3a5fc
        public_6d3a65a : nop
        add ecx, 2
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_6d3a630
        public_6d3a662 : nop
        mov eax, edx
        public_6d3a664 : nop
        test eax, eax
        je public_6d3a66d
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebx
        public_6d3a66d : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6d3a67c : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d3a5b0)
    }
}

#undef public_6d3a5e7
#undef public_6d3a5fc
#undef public_6d3a630
#undef public_6d3a65a
#undef public_6d3a662
#undef public_6d3a664
#undef public_6d3a66d
#undef public_6d3a67c
