#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c50e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5af0);
CLANG_FORWARD_PROC_SYMBOL(public_62e6200);
CLANG_FORWARD_PROC_SYMBOL(public_62e7400);
CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c33b8 _public_62c33b8
#define public_62c33ba _public_62c33ba
#define public_62c33c6 _public_62c33c6
#define public_62c33e6 _public_62c33e6
#define public_62c33e8 _public_62c33e8
#define public_62c3409 _public_62c3409
#define public_62c3414 _public_62c3414
#define public_62c3416 _public_62c3416
#define public_62c3472 _public_62c3472
#define public_62c3482 _public_62c3482
#define public_62c34d3 _public_62c34d3
#define public_62c34d5 _public_62c34d5
#define public_62c34e1 _public_62c34e1
#define public_62c350e _public_62c350e
#define public_62c351a _public_62c351a
#define public_62c351c _public_62c351c
#define public_62c3544 _public_62c3544
#define public_62c355b _public_62c355b
#define public_62c3573 _public_62c3573

PROC_DECLARE(0x62c3370, internal_62c3370, public_62c3370);
extern "C" NAKED register_t __cdecl internal_62c3370()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        lea edi, ss:[ebp+0x2F4]
        mov ecx, 0xB
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x24]
        lea eax, ss:[ebp+0x300]
        xor edi, edi
        push eax
        add ecx, 0x34
        mov dword ptr ss : [ebp+0x320], edi
        mov dword ptr ss : [ebp+0x32C], edi
        call public_62e74a0
        cmp eax, edi
        lea esi, ss:[ebp+0x324]
        je public_62c33b8
        add eax, 8
        jmp public_62c33ba
        public_62c33b8 : nop
        xor eax, eax
        public_62c33ba : nop
        cmp eax, dword ptr ds : [esi]
        je public_62c33c6
        push eax
        mov ecx, esi
        call public_6341610
        public_62c33c6 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_62c3573
        add eax, 0xFFFFFFF8
        cmp eax, edi
        je public_62c3573
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_62c33e6
        add eax, 0xFFFFFFF8
        jmp public_62c33e8
        public_62c33e6 : nop
        xor eax, eax
        public_62c33e8 : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        push eax
        add ecx, 0x34
        call public_62e7400
        cmp eax, edi
        je public_62c3409
        mov ecx, dword ptr ds : [esi]
        add eax, 8
        cmp eax, ecx
        je public_62c3409
        push eax
        mov ecx, esi
        call public_6341610
        public_62c3409 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        je public_62c3414
        lea eax, ds:[esi-8]
        jmp public_62c3416
        public_62c3414 : nop
        xor eax, eax
        public_62c3416 : nop
        push eax
        call public_62e6200
        add esp, 4
        lea ecx, ss:[ebp+0x304]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x24]
        add ecx, 0x34
        mov dword ptr ss : [ebp+0x32C], eax
        call public_62e74a0
        mov dword ptr ss : [ebp+0x388], eax
        mov al, byte ptr ss : [ebp+0x308]
        test al, al
        mov byte ptr ss : [ebp+0x334], al
        mov dword ptr ss : [ebp+0x408], 0xBF800000
        je public_62c3472
        mov eax, dword ptr ss : [ebp+0x30C]
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x330], eax
        mov dword ptr ss : [ebp+0x43C], eax
        call public_62c50e0
        jmp public_62c3482
        public_62c3472 : nop
        mov dword ptr ss : [ebp+0x440], edi
        mov dword ptr ss : [ebp+0x330], 0xFFFFFFFF
        public_62c3482 : nop
        mov edx, dword ptr ss : [ebp+0x31C]
        mov ecx, dword ptr ss : [ebp+0x314]
        mov eax, dword ptr ss : [ebp+0x318]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ss : [esp+0x18], edx
        push ebx
        lea edx, ss:[ebp+0x310]
        push edx
        add ecx, 0x34
        mov dword ptr ss : [esp+0x18], eax
        call public_62e74a0
        cmp eax, edi
        mov ebx, dword ptr ss : [ebp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ss:[ebp+0x450]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], edx
        je public_62c34d3
        add eax, 8
        jmp public_62c34d5
        public_62c34d3 : nop
        xor eax, eax
        public_62c34d5 : nop
        cmp eax, dword ptr ds : [esi]
        je public_62c34e1
        push eax
        mov ecx, esi
        call public_6341610
        public_62c34e1 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        je public_62c355b
        lea edi, ds:[eax-8]
        test edi, edi
        je public_62c355b
        fld dword ptr ss : [esp+0x1C]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62c350e
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x10], eax
        jmp public_62c3544
        public_62c350e : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_62c351a
        add eax, 0xFFFFFFF8
        jmp public_62c351c
        public_62c351a : nop
        xor eax, eax
        public_62c351c : nop
        push 4
        push 0x3F800000
        push eax
        call public_62e5af0
        fstp dword ptr ss : [esp+0x28]
        push 1
        push 0x3F800000
        push edi
        call public_62e5af0
        fdivr dword ptr ss : [esp+0x34]
        add esp, 0x18
        fstp dword ptr ds : [esi+0x10]
        public_62c3544 : nop
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62c355b
        mov dword ptr ds : [esi+0x10], 0x3F800000
        public_62c355b : nop
        mov cl, byte ptr ss : [ebp+0x28]
        pop ebx
        and cl, 0xFE
        pop edi
        or cl, 2
        pop esi
        mov byte ptr ss : [ebp+0x28], cl
        mov al, 1
        pop ebp
        add esp, 8
        ret 4
        public_62c3573 : nop
        mov dl, byte ptr ss : [ebp+0x28]
        and dl, 0xFD
        pop edi
        or dl, 1
        pop esi
        mov byte ptr ss : [ebp+0x28], dl
        mov al, 1
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62c3370)
    }
}

#undef public_62c33b8
#undef public_62c33ba
#undef public_62c33c6
#undef public_62c33e6
#undef public_62c33e8
#undef public_62c3409
#undef public_62c3414
#undef public_62c3416
#undef public_62c3472
#undef public_62c3482
#undef public_62c34d3
#undef public_62c34d5
#undef public_62c34e1
#undef public_62c350e
#undef public_62c351a
#undef public_62c351c
#undef public_62c3544
#undef public_62c355b
#undef public_62c3573
