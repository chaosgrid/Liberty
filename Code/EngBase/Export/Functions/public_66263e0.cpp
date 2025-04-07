#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e70);
CLANG_FORWARD_PROC_SYMBOL(public_66265e0);
CLANG_FORWARD_PROC_SYMBOL(public_6626f20);
CLANG_FORWARD_PROC_SYMBOL(public_6626f90);
CLANG_FORWARD_PROC_SYMBOL(public_6627050);
CLANG_FORWARD_PROC_SYMBOL(public_66270f0);
CLANG_FORWARD_PROC_SYMBOL(public_6627150);
CLANG_FORWARD_PROC_SYMBOL(public_6627180);
CLANG_FORWARD_PROC_SYMBOL(public_6627d60);
CLANG_FORWARD_PROC_SYMBOL(public_6627f70);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6626415 _public_6626415
#define public_662643a _public_662643a
#define public_6626443 _public_6626443
#define public_66264b6 _public_66264b6
#define public_6626507 _public_6626507
#define public_662651a _public_662651a
#define public_6626529 _public_6626529
#define public_6626555 _public_6626555
#define public_66265a3 _public_66265a3
#define public_66265b2 _public_66265b2

PROC_DECLARE(0x66263e0, internal_66263e0, public_66263e0);
extern "C" NAKED register_t __cdecl internal_66263e0()
{
    __asm
    {
        sub esp, 0x94
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xA4]
        push edi
        mov ecx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [esi+0x2C]
        inc ecx
        test al, al
        mov dword ptr ds : [esi+8], ecx
        je public_6626415
        mov ebp, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ecx
        jne public_6626415
        inc dword ptr ds : [esi+0xC]
        jmp public_662643a
        public_6626415 : nop
        lea ecx, ss:[esp+0xAC]
        lea edx, ss:[esp+0x2C]
        push ecx
        push edx
        lea ecx, ds:[esi+0x10]
        call public_6612e70
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x14]
        cmp ebp, eax
        je public_6626443
        mov dword ptr ds : [esi+0x28], ebp
        mov byte ptr ds : [esi+0x2C], 1
        public_662643a : nop
        cmp ebp, dword ptr ds : [esi+0x14]
        jne public_6626507
        public_6626443 : nop
        mov al, byte ptr ss : [esp+0x13]
        xor ebx, ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], al
        call public_6627150
        lea ecx, ss:[esp+0x14]
        lea edx, ss:[esp+0xAC]
        push ecx
        push edx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        call public_6627180
        push eax
        lea ecx, ss:[esp+0x38]
        call public_6627d60
        lea eax, ss:[esp+0x34]
        lea ecx, ss:[esp+0x20]
        push eax
        push ecx
        lea ecx, ds:[esi+0x10]
        call public_6626f90
        lea ecx, ss:[esp+0x38]
        call public_6626f20
        lea ecx, ss:[esp+0x48]
        call public_6626f20
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x14]
        cmp edi, eax
        je public_66264b6
        mov dword ptr ds : [esi+0x28], edi
        mov byte ptr ds : [esi+0x2C], 1
        public_66264b6 : nop
        mov esi, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x18]
        mov ebp, edi
        call public_6627050
        mov edx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x30]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        call public_66270f0
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        call public_66281d0
        add esp, 4
        cmp edi, esi
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_6626507
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x94
        ret 0x10
        public_6626507 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov ebx, dword ptr ss : [esp+0xB0]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6626529
        mov edx, dword ptr ds : [ebx+4]
        public_662651a : nop
        cmp dword ptr ds : [eax+8], edx
        je public_66265b2
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_662651a
        public_6626529 : nop
        mov esi, dword ptr ss : [esp+0xB4]
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, 0x12
        lea edi, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x58], 0
        rep movsd
        test eax, eax
        mov dword ptr ss : [esp+0x54], edx
        jne public_6626555
        mov eax, offset public_662ace4
        public_6626555 : nop
        push eax
        lea ecx, ss:[esp+0x58]
        call public_66265e0
        mov edi, dword ptr ss : [ebp+0x14]
        lea esi, ss:[ebp+0x10]
        mov ecx, esi
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        call public_6627150
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x54]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push edx
        push eax
        call public_6627f70
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x60]
        add esp, 8
        inc edx
        test eax, eax
        mov dword ptr ds : [esi+8], edx
        je public_66265a3
        push eax
        call dword ptr ds : [public_662902c]
        add esp, 4
        public_66265a3 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x94
        ret 0x10
        public_66265b2 : nop
        mov esi, dword ptr ss : [esp+0xB4]
        lea edi, ds:[eax+0x10]
        mov ecx, 0x12
        mov al, 1
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x94
        ret 0x10
        UNREACHABLE_TRAP(0x66263e0)
    }
}

#undef public_6626415
#undef public_662643a
#undef public_6626443
#undef public_66264b6
#undef public_6626507
#undef public_662651a
#undef public_6626529
#undef public_6626555
#undef public_66265a3
#undef public_66265b2
