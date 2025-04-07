#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d228e0);

#define public_6d20733 _public_6d20733
#define public_6d20740 _public_6d20740
#define public_6d20757 _public_6d20757
#define public_6d2075f _public_6d2075f
#define public_6d20770 _public_6d20770
#define public_6d207a6 _public_6d207a6
#define public_6d207a9 _public_6d207a9
#define public_6d207c6 _public_6d207c6
#define public_6d207cf _public_6d207cf
#define public_6d207d7 _public_6d207d7
#define public_6d207ed _public_6d207ed
#define public_6d207f5 _public_6d207f5
#define public_6d20802 _public_6d20802
#define public_6d20810 _public_6d20810
#define public_6d20824 _public_6d20824
#define public_6d20845 _public_6d20845

PROC_DECLARE(0x6d20710, internal_6d20710, public_6d20710);
extern "C" NAKED register_t __cdecl internal_6d20710()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        or edx, 0xFFFFFFFF
        xor ecx, ecx
        push edi
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x10], esi
        public_6d20733 : nop
        test edx, edx
        jne public_6d20740
        cmp ecx, 0xFFFFFFFF
        je public_6d20845
        public_6d20740 : nop
        cmp esi, dword ptr ss : [ebp+0xC]
        je public_6d20845
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6d20757
        xor eax, eax
        jmp public_6d2075f
        public_6d20757 : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        public_6d2075f : nop
        mov edx, dword ptr ss : [ebp+0x18]
        cmp edx, eax
        jae public_6d20770
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx+edx*4], 0
        public_6d20770 : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi]
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d207cf
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
        call public_6d228e0
        mov edi, dword ptr ss : [esp+0x1C]
        cmp edi, 0xFFFFFFFF
        mov ecx, dword ptr ds : [eax]
        je public_6d207a6
        cmp ecx, 0xFFFFFFFF
        je public_6d207a6
        add edi, ecx
        jmp public_6d207a9
        public_6d207a6 : nop
        or edi, 0xFFFFFFFF
        public_6d207a9 : nop
        mov esi, dword ptr ss : [esp+0x20]
        cmp esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], edi
        mov eax, dword ptr ds : [eax+4]
        je public_6d207c6
        cmp eax, 0xFFFFFFFF
        je public_6d207c6
        add esi, eax
        mov dword ptr ss : [esp+0x20], esi
        jmp public_6d207d7
        public_6d207c6 : nop
        or esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], esi
        jmp public_6d207d7
        public_6d207cf : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        public_6d207d7 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], esi
        jne public_6d207ed
        xor eax, eax
        jmp public_6d207f5
        public_6d207ed : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        public_6d207f5 : nop
        mov edx, dword ptr ss : [ebp+0x18]
        cmp edx, eax
        jae public_6d20802
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+edx*4], ebp
        public_6d20802 : nop
        cmp edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x24]
        jb public_6d20810
        lea eax, ss:[esp+0x14]
        public_6d20810 : nop
        mov ecx, dword ptr ds : [eax]
        cmp dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x28]
        jb public_6d20824
        lea eax, ss:[esp+0x18]
        public_6d20824 : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        jmp public_6d20733
        public_6d20845 : nop
        mov eax, dword ptr ss : [esp+0x38]
        pop edi
        mov dword ptr ss : [ebp+0x1C], edx
        mov dword ptr ss : [ebp+0x20], ecx
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        pop ebx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x6d20710)
    }
}

#undef public_6d20733
#undef public_6d20740
#undef public_6d20757
#undef public_6d2075f
#undef public_6d20770
#undef public_6d207a6
#undef public_6d207a9
#undef public_6d207c6
#undef public_6d207cf
#undef public_6d207d7
#undef public_6d207ed
#undef public_6d207f5
#undef public_6d20802
#undef public_6d20810
#undef public_6d20824
#undef public_6d20845
