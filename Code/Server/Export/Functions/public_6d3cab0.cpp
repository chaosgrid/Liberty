#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3cae6 _public_6d3cae6
#define public_6d3cb01 _public_6d3cb01
#define public_6d3cb0f _public_6d3cb0f
#define public_6d3cb24 _public_6d3cb24
#define public_6d3cb59 _public_6d3cb59
#define public_6d3cb70 _public_6d3cb70
#define public_6d3cb90 _public_6d3cb90
#define public_6d3cba3 _public_6d3cba3
#define public_6d3cbad _public_6d3cbad
#define public_6d3cbc5 _public_6d3cbc5
#define public_6d3cbd6 _public_6d3cbd6
#define public_6d3cbde _public_6d3cbde
#define public_6d3cbf3 _public_6d3cbf3
#define public_6d3cbf5 _public_6d3cbf5
#define public_6d3cc06 _public_6d3cc06

PROC_DECLARE(0x6d3cab0, internal_6d3cab0, public_6d3cab0);
extern "C" NAKED register_t __cdecl internal_6d3cab0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [edi+0x18], edx
        mov esi, dword ptr ds : [eax+8]
        mov ebx, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [eax+0xC]
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], 0
        mov edx, ecx
        je public_6d3cb0f
        mov ecx, esi
        sub ebx, esi
        public_6d3cae6 : nop
        mov si, word ptr ds : [edx]
        test si, si
        je public_6d3cbde
        cmp word ptr ds : [ecx], si
        je public_6d3cb01
        cmp word ptr ds : [ecx+ebx], si
        jne public_6d3cbde
        public_6d3cb01 : nop
        add ecx, 2
        add edx, 2
        cmp ecx, eax
        jne public_6d3cae6
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d3cb0f : nop
        mov eax, edx
        sub eax, ecx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [edi+0x10], edx
        jne public_6d3cb59
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        public_6d3cb24 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov esi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, esi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3cbf3
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3cbf5
        public_6d3cb59 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d3cbd6
        cmp eax, 1
        mov dword ptr ss : [esp+0x18], 1
        jbe public_6d3cb24
        lea ecx, ds:[ecx]
        public_6d3cb70 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x18], eax
        mov esi, dword ptr ds : [edx+8]
        mov ebx, dword ptr ds : [edx+0xC]
        cmp esi, ebx
        mov ecx, dword ptr ds : [edi+0x10]
        je public_6d3cbad
        mov edx, dword ptr ds : [edx+0x18]
        mov eax, esi
        sub edx, esi
        lea ecx, ds:[ecx]
        public_6d3cb90 : nop
        mov si, word ptr ds : [ecx]
        test si, si
        je public_6d3cbc5
        cmp word ptr ds : [eax], si
        je public_6d3cba3
        cmp word ptr ds : [eax+edx], si
        jne public_6d3cbc5
        public_6d3cba3 : nop
        add eax, 2
        add ecx, 2
        cmp eax, ebx
        jne public_6d3cb90
        public_6d3cbad : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jb public_6d3cb70
        jmp public_6d3cb24
        public_6d3cbc5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6d3cbd6 : nop
        mov dword ptr ds : [edi+0x10], ecx
        jmp public_6d3cb24
        public_6d3cbde : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d3cb24
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6d3cbf3 : nop
        mov eax, edx
        public_6d3cbf5 : nop
        test eax, eax
        je public_6d3cc06
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        public_6d3cc06 : nop
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+0x18], edx
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d3cab0)
    }
}

#undef public_6d3cae6
#undef public_6d3cb01
#undef public_6d3cb0f
#undef public_6d3cb24
#undef public_6d3cb59
#undef public_6d3cb70
#undef public_6d3cb90
#undef public_6d3cba3
#undef public_6d3cbad
#undef public_6d3cbc5
#undef public_6d3cbd6
#undef public_6d3cbde
#undef public_6d3cbf3
#undef public_6d3cbf5
#undef public_6d3cc06
