#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e440);
CLANG_FORWARD_PROC_SYMBOL(public_6f37570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f4530a _public_6f4530a
#define public_6f45337 _public_6f45337
#define public_6f453cc _public_6f453cc
#define public_6f45420 _public_6f45420
#define public_6f45445 _public_6f45445
#define public_6f45475 _public_6f45475
#define public_6f4549b _public_6f4549b
#define public_6f454c1 _public_6f454c1
#define public_6f454df _public_6f454df

PROC_DECLARE(0x6f451a0, internal_6f451a0, public_6f451a0);
extern "C" NAKED register_t __cdecl internal_6f451a0()
{
    __asm
    {
        sub esp, 0xB8
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        mov esi, dword ptr ss : [esp+0xCC]
        lea eax, ds:[ebx+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_6f4aa40
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [esi+4]
        je public_6f454c1
        lea eax, ds:[ebx+0x18]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov ecx, esi
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0x68]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f454c1
        mov ebp, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [ebp+0xD0]
        test eax, eax
        je public_6f454c1
        mov eax, dword ptr ds : [ebx+0x5C]
        mov ecx, dword ptr ss : [esp+0xC8]
        mov edx, dword ptr ds : [ebx]
        push edi
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x18]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x34], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], eax
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        mov esi, eax
        test byte ptr ds : [ebx+0x30], 2
        mov ecx, 9
        lea edi, ss:[esp+0x80]
        rep movsd
        je public_6f45337
        mov eax, dword ptr ss : [ebp+0xD0]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_6f45337
        lea ecx, ss:[esp+0x3C]
        call public_6f37570
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        call dword ptr ds : [eax+0x18]
        mov edx, dword ptr ss : [ebp]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x3C]
        rep movsd
        mov ecx, ebp
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x20]
        sub esp, 0xC
        fadd dword ptr ds : [ebx+0x68]
        mov dword ptr ss : [esp+0x6C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x70], edx
        mov eax, dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x7C]
        fadd dword ptr ds : [ebx+0x64]
        mov dword ptr ss : [esp+0x74], eax
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [ebx+0x60]
        fstp dword ptr ss : [esp]
        call public_6f22d50
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f4530a
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f4530a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        lea edx, ss:[esp+0x40]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        public_6f45337 : nop
        mov eax, dword ptr ds : [ebx+0x30]
        test al, 4
        je public_6f4549b
        test al, 8
        mov eax, dword ptr ss : [ebp+0xD0]
        mov ecx, dword ptr ds : [eax]
        je public_6f45420
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        jne public_6f4549b
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x68], eax
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x60], eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x5C], 0x3F800000
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        call dword ptr ds : [eax+0x18]
        mov esi, eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x3C]
        rep movsd
        jne public_6f453cc
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f453cc : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x40]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx+0x20]
        push eax
        mov eax, dword ptr ds : [ebx+0x70]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [ebx+0x24]
        push ecx
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [ebx+0x6C]
        push edx
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x94]
        push edx
        call public_6f2e440
        add esp, 0x18
        jmp public_6f4549b
        public_6f45420 : nop
        lea edx, ss:[esp+0x70]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jne public_6f4549b
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f45445
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f45445 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        lea edx, ss:[esp+0xA8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x18]
        mov esi, eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f45475
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f45475 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xA4]
        push edx
        push esi
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x3C]
        lea edi, ss:[esp+0x80]
        rep movsd
        public_6f4549b : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x80]
        push eax
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x30]
        push eax
        call dword ptr ds : [edx+0xC]
        pop edi
        public_6f454c1 : nop
        mov ebx, dword ptr ds : [ebx+0x1C]
        cmp dword ptr ss : [esp+0xC8], ebx
        jb public_6f454df
        test ebx, ebx
        jl public_6f454df
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xB8
        ret 8
        public_6f454df : nop
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xB8
        ret 8
        UNREACHABLE_TRAP(0x6f451a0)
    }
}

#undef public_6f4530a
#undef public_6f45337
#undef public_6f453cc
#undef public_6f45420
#undef public_6f45445
#undef public_6f45475
#undef public_6f4549b
#undef public_6f454c1
#undef public_6f454df
