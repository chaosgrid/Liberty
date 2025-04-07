#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d34d84);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d007);

#define public_6d34da4 _public_6d34da4
#define public_6d34dc1 _public_6d34dc1
#define public_6d34dd7 _public_6d34dd7
#define public_6d34ded _public_6d34ded
#define public_6d34e1e _public_6d34e1e
#define public_6d34e22 _public_6d34e22
#define public_6d34e36 _public_6d34e36
#define public_6d34e6e _public_6d34e6e
#define public_6d34e72 _public_6d34e72
#define public_6d34e8e _public_6d34e8e
#define public_6d34ecd _public_6d34ecd
#define public_6d34ed6 _public_6d34ed6
#define public_6d34ef8 _public_6d34ef8
#define public_6d34f05 _public_6d34f05
#define public_6d34f1d _public_6d34f1d
#define public_6d34f28 _public_6d34f28
#define public_6d34f39 _public_6d34f39
#define public_6d34f3f _public_6d34f3f
#define public_6d34f57 _public_6d34f57
#define public_6d34f63 _public_6d34f63
#define public_6d34f76 _public_6d34f76
#define public_6d34f77 _public_6d34f77
#define public_6d34f79 _public_6d34f79

PROC_DECLARE(0x6d34d84, internal_6d34d84, public_6d34d84);
extern "C" NAKED register_t __cdecl internal_6d34d84()
{
    __asm
    {
        mov eax, public_6d5d007
        call public_6d5cd8c
        sub esp, 0x14
        push esi
        mov esi, ecx
        cmp byte ptr ds : [esi+8], 1
        je public_6d34da4
        mov eax, 0x80004005
        jmp public_6d34f79
        public_6d34da4 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax+0x1058]
        push ebx
        push edi
        mov edi, dword ptr ds : [ecx+0x1058]
        cmp edx, edi
        mov dword ptr ss : [ebp-0x18], edx
        ja public_6d34dc1
        mov dword ptr ss : [ebp-0x18], edi
        public_6d34dc1 : nop
        mov edx, dword ptr ds : [eax+0x105C]
        mov edi, dword ptr ds : [ecx+0x105C]
        cmp edx, edi
        mov dword ptr ss : [ebp-0x20], edx
        jb public_6d34dd7
        mov dword ptr ss : [ebp-0x20], edi
        public_6d34dd7 : nop
        mov eax, dword ptr ds : [eax+0x1060]
        mov ecx, dword ptr ds : [ecx+0x1060]
        cmp eax, ecx
        mov dword ptr ss : [ebp-0x1C], eax
        jb public_6d34ded
        mov dword ptr ss : [ebp-0x1C], ecx
        public_6d34ded : nop
        mov edi, dword ptr ss : [ebp-0x18]
        shl edi, 4
        push edi
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x14], eax
        and dword ptr ss : [ebp-4], 0
        test eax, eax
        mov ebx, offset _public_6d2f87d
        je public_6d34e1e
        push ebx
        push dword ptr ss : [ebp-0x18]
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x10], eax
        jmp public_6d34e22
        public_6d34e1e : nop
        and dword ptr ss : [ebp-0x10], 0
        public_6d34e22 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0x10], 0
        jne public_6d34e36
        mov eax, 0x80004005
        jmp public_6d34f77
        public_6d34e36 : nop
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+0x1058]
        mov dword ptr ss : [ebp-0x18], eax
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x14], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], 1
        je public_6d34e6e
        push ebx
        push dword ptr ss : [ebp-0x18]
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6d34e72
        public_6d34e6e : nop
        and dword ptr ss : [ebp-0x18], 0
        public_6d34e72 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0x18], 0
        jne public_6d34e8e
        push dword ptr ss : [ebp-0x10]
        call public_6d2f249
        mov eax, 0x80004005
        jmp public_6d34f76
        public_6d34e8e : nop
        mov ecx, edi
        mov edi, dword ptr ss : [ebp-0x10]
        mov edx, ecx
        shr ecx, 2
        mov ebx, dword ptr ss : [ebp-0x1C]
        and dword ptr ss : [ebp-0x14], 0
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x1058]
        mov edi, dword ptr ss : [ebp-0x18]
        shl ecx, 4
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        test ebx, ebx
        rep stosb
        jbe public_6d34f28
        public_6d34ecd : nop
        mov ebx, dword ptr ss : [ebp-0x20]
        xor edi, edi
        test ebx, ebx
        jbe public_6d34ef8
        public_6d34ed6 : nop
        push dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [esi]
        push dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+4]
        push dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [esi+4]
        push dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+8]
        inc edi
        cmp edi, ebx
        jb public_6d34ed6
        public_6d34ef8 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+0x105C]
        mov edi, ebx
        jae public_6d34f1d
        public_6d34f05 : nop
        push dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [ecx]
        push dword ptr ss : [ebp-0x14]
        push edi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+4]
        inc edi
        cmp edi, dword ptr ds : [ecx+0x105C]
        jb public_6d34f05
        public_6d34f1d : nop
        mov ebx, dword ptr ss : [ebp-0x1C]
        inc dword ptr ss : [ebp-0x14]
        cmp dword ptr ss : [ebp-0x14], ebx
        jb public_6d34ecd
        public_6d34f28 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+0x1060]
        jae public_6d34f63
        mov eax, dword ptr ds : [ecx+0x105C]
        public_6d34f39 : nop
        xor edi, edi
        test eax, eax
        jbe public_6d34f57
        public_6d34f3f : nop
        push dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+0x105C]
        inc edi
        cmp edi, eax
        jb public_6d34f3f
        public_6d34f57 : nop
        mov ecx, dword ptr ds : [esi+4]
        inc ebx
        cmp ebx, dword ptr ds : [ecx+0x1060]
        jb public_6d34f39
        public_6d34f63 : nop
        push dword ptr ss : [ebp-0x10]
        call public_6d2f249
        push dword ptr ss : [ebp-0x18]
        call public_6d2f249
        pop ecx
        xor eax, eax
        public_6d34f76 : nop
        pop ecx
        public_6d34f77 : nop
        pop edi
        pop ebx
        public_6d34f79 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d34d84)
    }
}

#undef public_6d34da4
#undef public_6d34dc1
#undef public_6d34dd7
#undef public_6d34ded
#undef public_6d34e1e
#undef public_6d34e22
#undef public_6d34e36
#undef public_6d34e6e
#undef public_6d34e72
#undef public_6d34e8e
#undef public_6d34ecd
#undef public_6d34ed6
#undef public_6d34ef8
#undef public_6d34f05
#undef public_6d34f1d
#undef public_6d34f28
#undef public_6d34f39
#undef public_6d34f3f
#undef public_6d34f57
#undef public_6d34f63
#undef public_6d34f76
#undef public_6d34f77
#undef public_6d34f79
