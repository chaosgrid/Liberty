#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_447b60);
CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);
CLANG_FORWARD_PROC_SYMBOL(public_4f9540);
CLANG_FORWARD_PROC_SYMBOL(public_4fc8b0);
CLANG_FORWARD_PROC_SYMBOL(public_4fcea0);
CLANG_FORWARD_PROC_SYMBOL(public_5377c0);
CLANG_FORWARD_PROC_SYMBOL(public_53f340);
CLANG_FORWARD_PROC_SYMBOL(public_5426e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_53f35e _public_53f35e
#define public_53f360 _public_53f360
#define public_53f3ac _public_53f3ac
#define public_53f3ae _public_53f3ae
#define public_53f405 _public_53f405
#define public_53f431 _public_53f431
#define public_53f479 _public_53f479
#define public_53f504 _public_53f504
#define public_53f506 _public_53f506
#define public_53f52d _public_53f52d
#define public_53f553 _public_53f553
#define public_53f568 _public_53f568
#define public_53f57a _public_53f57a
#define public_53f59f _public_53f59f
#define public_53f5a1 _public_53f5a1
#define public_53f5dc _public_53f5dc
#define public_53f5f1 _public_53f5f1
#define public_53f5fa _public_53f5fa

PROC_DECLARE(0x53f340, internal_53f340, public_53f340);
extern "C" NAKED register_t __cdecl internal_53f340()
{
    __asm
    {
        sub esp, 0xAC
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        push esi
        push edi
        je public_53f35e
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        je public_53f360
        public_53f35e : nop
        xor eax, eax
        public_53f360 : nop
        mov edx, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        mov dword ptr ss : [esp+0x40], eax
        je public_53f5fa
        mov bl, byte ptr ss : [esp+0xC4]
        test bl, bl
        je public_53f431
        mov eax, dword ptr ss : [esp+0xC0]
        push eax
        lea ecx, ss:[esp+0x78]
        push ecx
        call dword ptr ds : [public_5c65b0]
        mov eax, dword ptr ss : [ebp+0x10]
        add esp, 8
        test eax, eax
        je public_53f3ac
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x67
        cmp dl, 0x67
        je public_53f3ae
        public_53f3ac : nop
        xor eax, eax
        public_53f3ae : nop
        lea esi, ds:[eax+8]
        mov ecx, 9
        lea edi, ss:[esp+0x10]
        rep movsd
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x34]
        call public_447b60
        mov eax, dword ptr ds : [public_678a28]
        test eax, eax
        jne public_53f405
        call public_5b73e0
        mov dword ptr ds : [public_678a28], eax
        public_53f405 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x74]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0xA0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x98]
        lea edi, ss:[esp+0x10]
        rep movsd
        jmp public_53f479
        public_53f431 : nop
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        public_53f479 : nop
        mov dword ptr ss : [esp+0x34], 0
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, 9
        lea esi, ss:[esp+0x10]
        lea edi, ss:[esp+0x44]
        rep movsd
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x38], 0
        mov ecx, dword ptr ss : [esp+0x38]
        lea esi, ds:[eax+0x58]
        mov dword ptr ss : [esp+0x3C], 0
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x6C], ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], edx
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_53f5fa
        push esi
        call public_40f080
        mov edi, eax
        mov eax, dword ptr ds : [edi+0x14]
        add esp, 4
        test eax, eax
        je public_53f52d
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx], 0
        je public_53f52d
        push 0x84
        call public_4f79a0
        add esp, 4
        test eax, eax
        je public_53f504
        push 0
        mov ecx, eax
        call public_4f9540
        jmp public_53f506
        public_53f504 : nop
        xor eax, eax
        public_53f506 : nop
        mov dword ptr ss : [ebp+0xD0], eax
        mov cl, byte ptr ds : [eax+0x70]
        shl bl, 3
        xor bl, cl
        and bl, 8
        xor bl, cl
        mov byte ptr ds : [eax+0x70], bl
        mov ecx, dword ptr ss : [ebp+0xD0]
        mov dword ptr ss : [ebp+0xC8], ecx
        call public_4f7a80
        public_53f52d : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ss : [ebp+0xC8]
        test ecx, ecx
        lea ebx, ss:[ebp+0xC0]
        mov esi, eax
        je public_53f553
        lea eax, ss:[esp+0x44]
        push eax
        push esi
        push ebp
        call public_4f7d20
        public_53f553 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_53f568
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x44]
        push eax
        push esi
        call dword ptr ds : [edx+0x94]
        public_53f568 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_53f57a
        lea edx, ss:[esp+0x44]
        push edx
        push esi
        call public_5377c0
        public_53f57a : nop
        mov ecx, dword ptr ss : [ebp+0xC8]
        test ecx, ecx
        je public_53f5f1
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax]
        test al, al
        je public_53f5dc
        mov ecx, dword ptr ss : [ebp+0x10]
        test ecx, ecx
        je public_53f59f
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x67
        cmp dl, 0x67
        je public_53f5a1
        public_53f59f : nop
        xor ecx, ecx
        public_53f5a1 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x34]
        push edx
        call dword ptr ds : [eax+0x54]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        push ecx
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+0xD0]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fstp dword ptr ss : [esp]
        call public_4fc8b0
        jmp public_53f5f1
        public_53f5dc : nop
        mov ecx, dword ptr ss : [ebp+0xC8]
        call public_4f7a90
        mov dword ptr ss : [ebp+0xC8], 0
        public_53f5f1 : nop
        push ebx
        lea ecx, ss:[ebp+0x28]
        call public_4fcea0
        public_53f5fa : nop
        mov ecx, ebp
        call public_5426e0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 8
        UNREACHABLE_TRAP(0x53f340)
    }
}

#undef public_53f35e
#undef public_53f360
#undef public_53f3ac
#undef public_53f3ae
#undef public_53f405
#undef public_53f431
#undef public_53f479
#undef public_53f504
#undef public_53f506
#undef public_53f52d
#undef public_53f553
#undef public_53f568
#undef public_53f57a
#undef public_53f59f
#undef public_53f5a1
#undef public_53f5dc
#undef public_53f5f1
#undef public_53f5fa
