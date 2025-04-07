#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);

#define public_6d37485 _public_6d37485
#define public_6d374ba _public_6d374ba
#define public_6d374d2 _public_6d374d2
#define public_6d3750a _public_6d3750a
#define public_6d3751a _public_6d3751a
#define public_6d37536 _public_6d37536
#define public_6d37550 _public_6d37550
#define public_6d37555 _public_6d37555
#define public_6d3757f _public_6d3757f
#define public_6d37592 _public_6d37592
#define public_6d3759a _public_6d3759a
#define public_6d375b1 _public_6d375b1
#define public_6d375b3 _public_6d375b3
#define public_6d375c4 _public_6d375c4

PROC_DECLARE(0x6d37420, internal_6d37420, public_6d37420);
extern "C" NAKED register_t __cdecl internal_6d37420()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edi+0x10]
        mov edx, esi
        mov dword ptr ds : [edi+0x18], ecx
        movzx edx, word ptr ds : [edx]
        test dx, dx
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x1C], 0
        je public_6d3759a
        mov eax, dword ptr ds : [eax+8]
        push edx
        mov ecx, eax
        call public_6d3e580
        test al, al
        je public_6d3759a
        mov ebx, dword ptr ds : [edi+0x10]
        add ebx, 2
        mov eax, ebx
        sub eax, esi
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [edi+0x10], ebx
        jne public_6d374ba
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d37485 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov esi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, esi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d375b1
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d375b3
        public_6d374ba : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d37592
        cmp eax, 1
        mov dword ptr ss : [esp+0x1C], 1
        jbe public_6d37485
        public_6d374d2 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], edx
        mov ecx, dword ptr ds : [edi+0x10]
        xor esi, esi
        mov si, word ptr ds : [ecx]
        test si, si
        je public_6d3757f
        cmp si, 0xFF
        mov ebx, dword ptr ds : [eax+8]
        ja public_6d3751a
        push esi
        lea ecx, ds:[ebx+8]
        call public_6d2b9c0
        mov ebp, dword ptr ss : [esp+0x10]
        movzx eax, al
        test eax, eax
        jne public_6d37550
        public_6d3750a : nop
        push esi
        mov ecx, ebx
        call public_6d3ea70
        test al, al
        jne public_6d37550
        xor eax, eax
        jmp public_6d37555
        public_6d3751a : nop
        lea ecx, ds:[ebx+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d37536
        push esi
        mov ecx, ebx
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d37550
        public_6d37536 : nop
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x28]
        test ax, ax
        je public_6d3750a
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d3750a
        public_6d37550 : nop
        mov eax, 1
        public_6d37555 : nop
        movzx edx, byte ptr ds : [ebx+4]
        cmp edx, eax
        je public_6d3757f
        mov esi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 2
        mov dword ptr ds : [edi+0x10], esi
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jb public_6d374d2
        jmp public_6d37485
        public_6d3757f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x10], eax
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d37592 : nop
        mov dword ptr ds : [edi+0x10], esi
        jmp public_6d37485
        public_6d3759a : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d37485
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d375b1 : nop
        mov eax, edx
        public_6d375b3 : nop
        test eax, eax
        je public_6d375c4
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d375c4 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d37420)
    }
}

#undef public_6d37485
#undef public_6d374ba
#undef public_6d374d2
#undef public_6d3750a
#undef public_6d3751a
#undef public_6d37536
#undef public_6d37550
#undef public_6d37555
#undef public_6d3757f
#undef public_6d37592
#undef public_6d3759a
#undef public_6d375b1
#undef public_6d375b3
#undef public_6d375c4
