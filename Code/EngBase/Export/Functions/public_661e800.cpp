#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d700);
CLANG_FORWARD_PROC_SYMBOL(public_661d730);
CLANG_FORWARD_PROC_SYMBOL(public_661d750);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_661e81d _public_661e81d
#define public_661e841 _public_661e841
#define public_661e845 _public_661e845
#define public_661e84a _public_661e84a
#define public_661e89f _public_661e89f
#define public_661e8b2 _public_661e8b2
#define public_661e8c3 _public_661e8c3

PROC_DECLARE(0x661e800, internal_661e800, public_661e800);
extern "C" NAKED register_t __cdecl internal_661e800()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor ebp, ebp
        cmp dword ptr ds : [edi], 8
        jne public_661e8b2
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_661e81d : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_661e845
        test cl, cl
        je public_661e841
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_661e845
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_661e81d
        public_661e841 : nop
        xor eax, eax
        jmp public_661e84a
        public_661e845 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_661e84a : nop
        test eax, eax
        pop ebx
        jne public_661e8b2
        push 0x20
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_661e89f
        mov ecx, esi
        call public_661d730
        push edi
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_6629578
        mov dword ptr ds : [esi+0x1C], 1
        call public_661d700
        mov edi, eax
        test edi, edi
        je public_661e8c3
        call public_661d750
        push esi
        call public_66281d0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_661e89f : nop
        mov edx, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        pop edi
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_661e8b2 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        pop ebp
        ret 0xC
        public_661e8c3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x661e800)
    }
}

#undef public_661e81d
#undef public_661e841
#undef public_661e845
#undef public_661e84a
#undef public_661e89f
#undef public_661e8b2
#undef public_661e8c3
