#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4e4ba0);
CLANG_FORWARD_PROC_SYMBOL(public_4e4cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7950);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);

#define public_4e1a10 _public_4e1a10
#define public_4e1a3d _public_4e1a3d
#define public_4e1a4f _public_4e1a4f
#define public_4e1a74 _public_4e1a74
#define public_4e1b0b _public_4e1b0b
#define public_4e1b3e _public_4e1b3e
#define public_4e1b40 _public_4e1b40
#define public_4e1b6c _public_4e1b6c
#define public_4e1b76 _public_4e1b76
#define public_4e1b95 _public_4e1b95

PROC_DECLARE(0x4e19e0, internal_4e19e0, public_4e19e0);
extern "C" NAKED register_t __cdecl internal_4e19e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        cmp edx, 0x26
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov esi, ecx
        jne public_4e1b95
        cmp eax, dword ptr ds : [esi+0x4EC]
        jne public_4e1a10
        mov eax, dword ptr ds : [esi-0x38]
        lea ecx, ds:[esi-0x38]
        call dword ptr ds : [eax+0x30]
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        public_4e1a10 : nop
        mov ecx, dword ptr ds : [esi+0x360]
        test ecx, ecx
        je public_4e1b95
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_4e1b95
        cmp eax, dword ptr ds : [esi+0x4E0]
        jne public_4e1a3d
        lea edi, ds:[esi-0x38]
        mov ecx, edi
        call public_4e4ba0
        jmp public_4e1a4f
        public_4e1a3d : nop
        cmp eax, dword ptr ds : [esi+0x4DC]
        jne public_4e1a74
        lea edi, ds:[esi-0x38]
        mov ecx, edi
        call public_4e4cc0
        public_4e1a4f : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x3C]
        mov ecx, dword ptr ds : [esi+0x4CC]
        mov eax, dword ptr ds : [ecx]
        push 0x14
        push 1
        push 0x50
        call dword ptr ds : [eax+0xA8]
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        public_4e1a74 : nop
        cmp eax, dword ptr ds : [esi+0x4E8]
        jne public_4e1b0b
        call public_54baf0
        test eax, eax
        je public_4e1b6c
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_4e1b6c
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e1b6c
        mov esi, dword ptr ds : [esi+0x360]
        test esi, esi
        je public_4e1b6c
        lea eax, ds:[esi-8]
        test eax, eax
        je public_4e1b6c
        add eax, 0xC
        test eax, eax
        je public_4e1b6c
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4e1b6c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4e1b6c
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        je public_4e1b6c
        push 0
        push 0xC9
        call public_5763b0
        add esp, 8
        pop edi
        movzx eax, al
        pop esi
        ret 0xC
        public_4e1b0b : nop
        cmp eax, dword ptr ds : [esi+0x4E4]
        jne public_4e1b76
        call public_54baf0
        mov edi, eax
        test edi, edi
        je public_4e1b6c
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_4e1b6c
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e1b6c
        mov esi, dword ptr ds : [esi+0x360]
        test esi, esi
        je public_4e1b3e
        add esi, 0xFFFFFFF8
        jmp public_4e1b40
        public_4e1b3e : nop
        xor esi, esi
        public_4e1b40 : nop
        mov edx, dword ptr ds : [public_67ecd0]
        push ebx
        mov ebx, dword ptr ds : [edx]
        call public_4c4830
        push eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        call dword ptr ds : [ebx+0xCC]
        pop ebx
        public_4e1b6c : nop
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        public_4e1b76 : nop
        cmp eax, dword ptr ds : [esi+0x4D8]
        jne public_4e1b95
        push 0
        push 0xCA
        call public_5763b0
        add esp, 8
        pop edi
        movzx eax, al
        pop esi
        ret 0xC
        public_4e1b95 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push eax
        push edx
        mov ecx, esi
        call public_4e7950
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4e19e0)
    }
}

#undef public_4e1a10
#undef public_4e1a3d
#undef public_4e1a4f
#undef public_4e1a74
#undef public_4e1b0b
#undef public_4e1b3e
#undef public_4e1b40
#undef public_4e1b6c
#undef public_4e1b76
#undef public_4e1b95
