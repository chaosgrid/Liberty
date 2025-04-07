#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d20510);
CLANG_FORWARD_PROC_SYMBOL(public_6d228e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);

#define public_6d2055e _public_6d2055e
#define public_6d2056f _public_6d2056f
#define public_6d20583 _public_6d20583
#define public_6d2058b _public_6d2058b
#define public_6d20599 _public_6d20599
#define public_6d205c5 _public_6d205c5
#define public_6d205d9 _public_6d205d9
#define public_6d205ed _public_6d205ed
#define public_6d20602 _public_6d20602
#define public_6d20624 _public_6d20624
#define public_6d2064e _public_6d2064e
#define public_6d2065f _public_6d2065f
#define public_6d20673 _public_6d20673
#define public_6d2067b _public_6d2067b
#define public_6d20689 _public_6d20689
#define public_6d206b5 _public_6d206b5
#define public_6d206c9 _public_6d206c9
#define public_6d206dd _public_6d206dd
#define public_6d206f2 _public_6d206f2
#define public_6d206f7 _public_6d206f7

PROC_DECLARE(0x6d20510, internal_6d20510, public_6d20510);
extern "C" NAKED register_t __cdecl internal_6d20510()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x1C]
        lea ecx, ss:[ebp+0x1C]
        or edx, 0xFFFFFFFF
        cmp eax, edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6d206f7
        cmp dword ptr ds : [ecx+4], edx
        jne public_6d206f7
        mov esi, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x30], esi
        mov esi, dword ptr ss : [ebp+0xC]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], offset public_6d68a50
        mov dword ptr ss : [esp+0x2C], eax
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], edx
        public_6d2055e : nop
        test edx, edx
        mov dword ptr ss : [esp+0x18], ebx
        jne public_6d2056f
        cmp ebx, 0xFFFFFFFF
        je public_6d20602
        public_6d2056f : nop
        cmp edi, dword ptr ss : [ebp+0xC]
        je public_6d20602
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6d20583
        xor eax, eax
        jmp public_6d2058b
        public_6d20583 : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        public_6d2058b : nop
        mov edx, dword ptr ss : [ebp+0x18]
        cmp edx, eax
        jae public_6d20599
        mov dword ptr ds : [ecx+edx*4], 0
        public_6d20599 : nop
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        call public_6d228e0
        mov ecx, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [ebp+0x18]
        call public_6d31890
        cmp esi, eax
        jae public_6d205c5
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+esi*4], ebp
        public_6d205c5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        lea eax, ss:[esp+0x1C]
        jb public_6d205d9
        lea eax, ss:[esp+0x14]
        public_6d205d9 : nop
        mov edx, dword ptr ds : [eax]
        cmp ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], edx
        lea eax, ss:[esp+0x20]
        jb public_6d205ed
        lea eax, ss:[esp+0x18]
        public_6d205ed : nop
        mov ebx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_6d2055e
        public_6d20602 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], ebx
        je public_6d206f7
        mov eax, edx
        test eax, eax
        jne public_6d20624
        mov eax, ebx
        cmp eax, 0xFFFFFFFF
        je public_6d206f7
        public_6d20624 : nop
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x4C]
        mov esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x40], edx
        or edx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], eax
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], edx
        xor ebx, ebx
        public_6d2064e : nop
        test edx, edx
        mov dword ptr ss : [esp+0x18], ebx
        jne public_6d2065f
        cmp ebx, 0xFFFFFFFF
        je public_6d206f2
        public_6d2065f : nop
        cmp edi, dword ptr ss : [ebp+0xC]
        je public_6d206f2
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6d20673
        xor eax, eax
        jmp public_6d2067b
        public_6d20673 : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        public_6d2067b : nop
        mov edx, dword ptr ss : [ebp+0x18]
        cmp edx, eax
        jae public_6d20689
        mov dword ptr ds : [ecx+edx*4], 0
        public_6d20689 : nop
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        call public_6d228e0
        mov ecx, dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ss : [ebp+0x18]
        call public_6d31890
        cmp esi, eax
        jae public_6d206b5
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+esi*4], ebp
        public_6d206b5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        lea eax, ss:[esp+0x1C]
        jb public_6d206c9
        lea eax, ss:[esp+0x14]
        public_6d206c9 : nop
        mov edx, dword ptr ds : [eax]
        cmp ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], edx
        lea eax, ss:[esp+0x20]
        jb public_6d206dd
        lea eax, ss:[esp+0x18]
        public_6d206dd : nop
        mov ebx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        jmp public_6d2064e
        public_6d206f2 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], ebx
        public_6d206f7 : nop
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x48]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        pop ebp
        mov dword ptr ds : [eax+4], ecx
        pop ebx
        add esp, 0x34
        ret 0xC
        UNREACHABLE_TRAP(0x6d20510)
    }
}

#undef public_6d2055e
#undef public_6d2056f
#undef public_6d20583
#undef public_6d2058b
#undef public_6d20599
#undef public_6d205c5
#undef public_6d205d9
#undef public_6d205ed
#undef public_6d20602
#undef public_6d20624
#undef public_6d2064e
#undef public_6d2065f
#undef public_6d20673
#undef public_6d2067b
#undef public_6d20689
#undef public_6d206b5
#undef public_6d206c9
#undef public_6d206dd
#undef public_6d206f2
#undef public_6d206f7
