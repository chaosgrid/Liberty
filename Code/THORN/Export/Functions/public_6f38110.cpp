#include "THORN-PCH.h"


#define public_6f3814b _public_6f3814b
#define public_6f38172 _public_6f38172
#define public_6f38182 _public_6f38182
#define public_6f3818e _public_6f3818e
#define public_6f38198 _public_6f38198
#define public_6f381a1 _public_6f381a1
#define public_6f381c2 _public_6f381c2
#define public_6f38228 _public_6f38228
#define public_6f38247 _public_6f38247
#define public_6f38249 _public_6f38249

PROC_DECLARE(0x6f38110, internal_6f38110, public_6f38110);
extern "C" NAKED register_t __cdecl internal_6f38110()
{
    __asm
    {
        sub esp, 0x38
        push esi
        mov esi, dword ptr ss : [esp+0x44]
        test esi, esi
        mov dword ptr ss : [esp+4], 0
        je public_6f38228
        mov eax, dword ptr ss : [esp+0x40]
        push ebx
        push ebp
        or ecx, 0xFFFFFFFF
        push edi
        lea ebx, ds:[eax+0xC]
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        cmp ebp, 0xFFFFFFFD
        jbe public_6f3814b
        call dword ptr ds : [public_6f5a01c]
        public_6f3814b : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6f38172
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f38172
        cmp cl, 0xFF
        je public_6f38172
        test ebp, ebp
        jne public_6f38198
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f381c2
        public_6f38172 : nop
        test ebp, ebp
        jne public_6f38182
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f381c2
        public_6f38182 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 0x1F
        ja public_6f3818e
        cmp eax, ebp
        jae public_6f381a1
        public_6f3818e : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        public_6f38198 : nop
        mov ecx, ebx
        push ebp
        call dword ptr ds : [public_6f5a018]
        public_6f381a1 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_6f381c2 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x18], offset public_6f60040
        mov ecx, 0xB
        lea edi, ss:[esp+0x1C]
        rep stosd
        mov dword ptr ss : [esp+0x30], 3
        mov dword ptr ss : [esp+0x34], 0x8000080
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x14], 0x34
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], 0x80000000
        mov dword ptr ss : [esp+0x28], 1
        call dword ptr ds : [public_6f5a000]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        pop edi
        pop ebp
        pop ebx
        jl public_6f38249
        public_6f38228 : nop
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov esi, eax
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f38247
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6f38247 : nop
        mov eax, esi
        public_6f38249 : nop
        pop esi
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x6f38110)
    }
}

#undef public_6f3814b
#undef public_6f38172
#undef public_6f38182
#undef public_6f3818e
#undef public_6f38198
#undef public_6f381a1
#undef public_6f381c2
#undef public_6f38228
#undef public_6f38247
#undef public_6f38249
