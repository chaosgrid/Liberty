#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4031c0);
CLANG_FORWARD_PROC_SYMBOL(public_403c10);
CLANG_FORWARD_PROC_SYMBOL(public_403e90);
CLANG_FORWARD_PROC_SYMBOL(public_403ff0);
CLANG_FORWARD_PROC_SYMBOL(public_404340);
CLANG_FORWARD_PROC_SYMBOL(public_404490);
CLANG_FORWARD_PROC_SYMBOL(public_4044b0);
CLANG_FORWARD_PROC_SYMBOL(public_404af0);
CLANG_FORWARD_PROC_SYMBOL(public_404b70);

#define public_402fc4 _public_402fc4
#define public_402fdf _public_402fdf
#define public_402ff3 _public_402ff3
#define public_40300e _public_40300e
#define public_403022 _public_403022
#define public_40303c _public_40303c
#define public_403052 _public_403052
#define public_403056 _public_403056
#define public_403073 _public_403073
#define public_403092 _public_403092
#define public_4030a6 _public_4030a6
#define public_4030c2 _public_4030c2
#define public_4030d6 _public_4030d6
#define public_4030f2 _public_4030f2
#define public_40310e _public_40310e
#define public_403112 _public_403112
#define public_403132 _public_403132
#define public_403150 _public_403150
#define public_403158 _public_403158
#define public_40317d _public_40317d
#define public_403193 _public_403193

PROC_DECLARE(0x402fa0, internal_402fa0, public_402fa0);
extern "C" NAKED register_t __cdecl internal_402fa0()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        lea ebx, ds:[eax+4]
        mov eax, dword ptr ds : [ebx+8]
        push esi
        push edi
        mov edi, ecx
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], edi
        lea esi, ds:[edi+4]
        jbe public_402fc4
        or ebp, 0xFFFFFFFF
        public_402fc4 : nop
        cmp esi, ebx
        jne public_402fdf
        push 0xFFFFFFFF
        push ebp
        mov ecx, esi
        call public_404340
        push 0
        push 0
        mov ecx, esi
        call public_404340
        jmp public_403056
        public_402fdf : nop
        test ebp, ebp
        jbe public_403022
        cmp ebp, eax
        jne public_403022
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_402ff3
        mov eax, offset public_41c3f4
        public_402ff3 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_403022
        push 1
        mov ecx, esi
        call public_403e90
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_40300e
        mov eax, offset public_41c3f4
        public_40300e : nop
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_403056
        public_403022 : nop
        push 1
        push ebp
        mov ecx, esi
        call public_4044b0
        test al, al
        je public_403052
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_40303c
        mov ebx, offset public_41c3f4
        public_40303c : nop
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push ebx
        push eax
        call public_4031c0
        add esp, 0xC
        push ebp
        mov ecx, esi
        call public_404490
        public_403052 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_403056 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [public_41b8ac]
        mov eax, dword ptr ds : [edx]
        lea esi, ds:[ecx+0x14]
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, ecx
        cmp eax, ebp
        lea ebx, ds:[edi+0x14]
        jae public_403073
        mov ebp, eax
        public_403073 : nop
        cmp ebx, esi
        jne public_403092
        push eax
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_41b8b8]
        push 0
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_41b8b8]
        jmp public_403112
        public_403092 : nop
        test ebp, ebp
        jbe public_4030d6
        cmp ebp, ecx
        jne public_4030d6
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_4030a6
        mov eax, dword ptr ds : [public_41b8b4]
        public_4030a6 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4030d6
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_41b870]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_4030c2
        mov eax, dword ptr ds : [public_41b8b4]
        public_4030c2 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_403112
        public_4030d6 : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_41b874]
        test al, al
        je public_40310e
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_4030f2
        mov esi, dword ptr ds : [public_41b8b4]
        public_4030f2 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_41b8b0]
        public_40310e : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_403112 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        lea eax, ds:[ecx+0x24]
        lea ebp, ds:[edi+0x24]
        cmp ebp, eax
        je public_403193
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov eax, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], eax
        je public_403150
        public_403132 : nop
        cmp ebx, dword ptr ss : [esp+0x18]
        je public_403150
        push 0xFFFFFFFF
        push 0
        lea ecx, ds:[ebx+8]
        push ecx
        lea ecx, ds:[esi+8]
        call public_403c10
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        mov ebx, dword ptr ds : [ebx]
        jne public_403132
        public_403150 : nop
        cmp esi, edi
        mov dword ptr ss : [esp+0x14], esi
        je public_40317d
        public_403158 : nop
        push 0
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_404b70
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebp
        call public_404af0
        cmp dword ptr ss : [esp+0x14], edi
        jne public_403158
        public_40317d : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push ebx
        push edi
        mov ecx, ebp
        call public_403ff0
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x28]
        public_403193 : nop
        mov al, byte ptr ds : [ecx+0x30]
        mov byte ptr ds : [edi+0x30], al
        mov dl, byte ptr ds : [ecx+0x31]
        mov byte ptr ds : [edi+0x31], dl
        mov al, byte ptr ds : [ecx+0x32]
        mov byte ptr ds : [edi+0x32], al
        mov ecx, dword ptr ds : [ecx+0x34]
        mov dword ptr ds : [edi+0x34], ecx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x402fa0)
    }
}

#undef public_402fc4
#undef public_402fdf
#undef public_402ff3
#undef public_40300e
#undef public_403022
#undef public_40303c
#undef public_403052
#undef public_403056
#undef public_403073
#undef public_403092
#undef public_4030a6
#undef public_4030c2
#undef public_4030d6
#undef public_4030f2
#undef public_40310e
#undef public_403112
#undef public_403132
#undef public_403150
#undef public_403158
#undef public_40317d
#undef public_403193
