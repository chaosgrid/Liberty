#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d228e0);

#define public_6d24fed _public_6d24fed
#define public_6d24ff1 _public_6d24ff1
#define public_6d25004 _public_6d25004
#define public_6d25008 _public_6d25008
#define public_6d2500c _public_6d2500c
#define public_6d2505f _public_6d2505f
#define public_6d25062 _public_6d25062
#define public_6d2507b _public_6d2507b
#define public_6d25080 _public_6d25080
#define public_6d25088 _public_6d25088
#define public_6d250a0 _public_6d250a0
#define public_6d250b2 _public_6d250b2
#define public_6d250b6 _public_6d250b6
#define public_6d250b8 _public_6d250b8

PROC_DECLARE(0x6d24fa0, internal_6d24fa0, public_6d24fa0);
extern "C" NAKED register_t __cdecl internal_6d24fa0()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ds : [eax]
        mov esi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d25008
        push ebx
        lea edx, ss:[esp+0x24]
        push edx
        call public_6d228e0
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        or edx, 0xFFFFFFFF
        cmp esi, edx
        je public_6d24fed
        cmp ecx, edx
        je public_6d24fed
        add esi, ecx
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6d24ff1
        public_6d24fed : nop
        mov dword ptr ss : [esp+0x10], edx
        public_6d24ff1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edx
        je public_6d25004
        cmp ecx, edx
        je public_6d25004
        add eax, ecx
        jmp public_6d2500c
        public_6d25004 : nop
        mov eax, edx
        jmp public_6d2500c
        public_6d25008 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_6d2500c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebx, eax
        mov eax, dword ptr ds : [edi]
        mov edi, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x20], ecx
        cmp eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x24], ebx
        je public_6d250b6
        mov esi, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d25080
        push edi
        lea edx, ss:[esp+0x2C]
        push edx
        call public_6d228e0
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, 0xFFFFFFFF
        mov edx, dword ptr ds : [eax]
        je public_6d2505f
        cmp edx, 0xFFFFFFFF
        je public_6d2505f
        add ecx, edx
        jmp public_6d25062
        public_6d2505f : nop
        or ecx, 0xFFFFFFFF
        public_6d25062 : nop
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, 0xFFFFFFFF
        je public_6d2507b
        cmp edx, 0xFFFFFFFF
        je public_6d2507b
        add eax, edx
        jmp public_6d25088
        public_6d2507b : nop
        or eax, 0xFFFFFFFF
        jmp public_6d25088
        public_6d25080 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        public_6d25088 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        cmp ecx, edx
        mov dword ptr ss : [esp+0x1C], eax
        lea ecx, ss:[esp+0x18]
        jb public_6d250a0
        lea ecx, ss:[esp+0x20]
        public_6d250a0 : nop
        mov esi, dword ptr ds : [ecx]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], esi
        lea eax, ss:[esp+0x1C]
        jb public_6d250b2
        lea eax, ss:[esp+0x24]
        public_6d250b2 : nop
        mov ebx, dword ptr ds : [eax]
        jmp public_6d250b8
        public_6d250b6 : nop
        xor esi, esi
        public_6d250b8 : nop
        mov ecx, dword ptr ss : [ebp+0x34]
        mov eax, dword ptr ds : [ecx]
        push edi
        lea edx, ss:[esp+0x2C]
        push edx
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [ebp+0x1C], esi
        mov dword ptr ss : [ebp+0x20], ebx
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+4], ebx
        pop ebx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6d24fa0)
    }
}

#undef public_6d24fed
#undef public_6d24ff1
#undef public_6d25004
#undef public_6d25008
#undef public_6d2500c
#undef public_6d2505f
#undef public_6d25062
#undef public_6d2507b
#undef public_6d25080
#undef public_6d25088
#undef public_6d250a0
#undef public_6d250b2
#undef public_6d250b6
#undef public_6d250b8
