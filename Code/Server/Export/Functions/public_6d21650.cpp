#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d228e0);

#define public_6d21673 _public_6d21673
#define public_6d21680 _public_6d21680
#define public_6d21697 _public_6d21697
#define public_6d2169f _public_6d2169f
#define public_6d216b0 _public_6d216b0
#define public_6d216e6 _public_6d216e6
#define public_6d216e9 _public_6d216e9
#define public_6d21706 _public_6d21706
#define public_6d2170f _public_6d2170f
#define public_6d21717 _public_6d21717
#define public_6d2172d _public_6d2172d
#define public_6d21735 _public_6d21735
#define public_6d21742 _public_6d21742
#define public_6d21750 _public_6d21750
#define public_6d21764 _public_6d21764
#define public_6d21783 _public_6d21783

PROC_DECLARE(0x6d21650, internal_6d21650, public_6d21650);
extern "C" NAKED register_t __cdecl internal_6d21650()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        push ebp
        mov ebp, ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ds : [edx]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x10], esi
        public_6d21673 : nop
        test ecx, ecx
        jne public_6d21680
        cmp eax, 0xFFFFFFFF
        je public_6d21783
        public_6d21680 : nop
        cmp esi, dword ptr ss : [ebp+0xC]
        je public_6d21783
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6d21697
        xor eax, eax
        jmp public_6d2169f
        public_6d21697 : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        public_6d2169f : nop
        mov edx, dword ptr ss : [ebp+0x18]
        cmp edx, eax
        jae public_6d216b0
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+edx*4], 0
        public_6d216b0 : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi]
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d2170f
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
        call public_6d228e0
        mov edi, dword ptr ss : [esp+0x1C]
        cmp edi, 0xFFFFFFFF
        mov ecx, dword ptr ds : [eax]
        je public_6d216e6
        cmp ecx, 0xFFFFFFFF
        je public_6d216e6
        add edi, ecx
        jmp public_6d216e9
        public_6d216e6 : nop
        or edi, 0xFFFFFFFF
        public_6d216e9 : nop
        mov esi, dword ptr ss : [esp+0x20]
        cmp esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], edi
        mov eax, dword ptr ds : [eax+4]
        je public_6d21706
        cmp eax, 0xFFFFFFFF
        je public_6d21706
        add esi, eax
        mov dword ptr ss : [esp+0x20], esi
        jmp public_6d21717
        public_6d21706 : nop
        or esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], esi
        jmp public_6d21717
        public_6d2170f : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        public_6d21717 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], esi
        jne public_6d2172d
        xor eax, eax
        jmp public_6d21735
        public_6d2172d : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        public_6d21735 : nop
        mov edx, dword ptr ss : [ebp+0x18]
        cmp edx, eax
        jae public_6d21742
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+edx*4], ebp
        public_6d21742 : nop
        cmp edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x24]
        jb public_6d21750
        lea eax, ss:[esp+0x14]
        public_6d21750 : nop
        mov ecx, dword ptr ds : [eax]
        cmp dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x28]
        jb public_6d21764
        lea eax, ss:[esp+0x18]
        public_6d21764 : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], edx
        mov eax, edx
        jmp public_6d21673
        public_6d21783 : nop
        mov dword ptr ss : [ebp+0x20], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [ebp+0x1C], ecx
        mov edx, dword ptr ds : [public_6d68a40]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [public_6d68a44]
        pop ebp
        mov dword ptr ds : [eax+4], ecx
        pop ebx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x6d21650)
    }
}

#undef public_6d21673
#undef public_6d21680
#undef public_6d21697
#undef public_6d2169f
#undef public_6d216b0
#undef public_6d216e6
#undef public_6d216e9
#undef public_6d21706
#undef public_6d2170f
#undef public_6d21717
#undef public_6d2172d
#undef public_6d21735
#undef public_6d21742
#undef public_6d21750
#undef public_6d21764
#undef public_6d21783
