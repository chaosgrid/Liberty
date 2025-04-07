#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4d7270);
CLANG_FORWARD_PROC_SYMBOL(public_4eada0);
CLANG_FORWARD_PROC_SYMBOL(public_5a2940);

#define public_4eb482 _public_4eb482
#define public_4eb92b _public_4eb92b
#define public_4eb953 _public_4eb953
#define public_4ebb86 _public_4ebb86
#define public_4ebdca _public_4ebdca
#define public_4ebdd2 _public_4ebdd2

PROC_DECLARE(0x4eada0, internal_4eada0, public_4eada0);
extern "C" NAKED register_t __cdecl internal_4eada0()
{
    __asm
    {
        sub esp, 0xA8
        push ebx
        mov ebx, dword ptr ss : [esp+0xB0]
        mov eax, dword ptr ds : [ebx+0x20]
        mov dword ptr ss : [esp+0x2C], eax
        fld dword ptr ss : [esp+0x2C]
        push ebp
        fcomp qword ptr ds : [public_5c8ba8]
        push esi
        push edi
        fnstsw ax
        test ah, 0x44
        jnp public_4ebdd2
        fld dword ptr ss : [esp+0x38]
        lea ecx, ds:[ebx+4]
        mov edx, dword ptr ds : [ecx]
        fchs 
        mov eax, dword ptr ds : [ecx+4]
        fst dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x8C], edx
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x90], eax
        lea eax, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0x94], ecx
        push eax
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x34], edx
        push ecx
        lea edx, ss:[esp+0xA4]
        push edx
        mov dword ptr ss : [esp+0x40], 0
        call public_423b30
        mov eax, dword ptr ss : [esp+0xA8]
        mov edx, dword ptr ss : [esp+0xB0]
        mov ecx, dword ptr ss : [esp+0xAC]
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x84], ecx
        mov dword ptr ss : [esp+0x88], edx
        mov ecx, eax
        lea edx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0x38], eax
        push edx
        lea eax, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x40], ecx
        push eax
        lea ecx, ss:[esp+0xB0]
        push ecx
        mov dword ptr ss : [esp+0x4C], 0
        call public_423b30
        mov edx, dword ptr ss : [esp+0xB4]
        mov ecx, dword ptr ss : [esp+0xBC]
        mov eax, dword ptr ss : [esp+0xB8]
        mov dword ptr ss : [esp+0x80], edx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x84], eax
        mov eax, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x88], ecx
        lea ecx, ss:[esp+0xA4]
        mov dword ptr ss : [esp+0x44], edx
        push ecx
        lea edx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x4C], eax
        push edx
        lea eax, ss:[esp+0xBC]
        push eax
        mov dword ptr ss : [esp+0x58], 0
        call public_423b30
        mov ecx, dword ptr ss : [esp+0xC0]
        mov eax, dword ptr ss : [esp+0xC8]
        mov edx, dword ptr ss : [esp+0xC4]
        mov dword ptr ss : [esp+0x80], ecx
        mov ecx, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x84], edx
        mov dword ptr ss : [esp+0x88], eax
        mov edx, ecx
        lea eax, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0x50], ecx
        push eax
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x58], edx
        push ecx
        lea edx, ss:[esp+0xC8]
        push edx
        mov dword ptr ss : [esp+0x64], 0
        call public_423b30
        mov eax, dword ptr ss : [esp+0xCC]
        mov ecx, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ss : [esp+0xD4]
        add esp, 0x30
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], ecx
        fld dword ptr ss : [esp+0x38]
        mov ebp, dword ptr ss : [esp+0xC0]
        fsub dword ptr ds : [public_5d8ee8]
        movzx edi, byte ptr ss : [ebp]
        movzx eax, byte ptr ss : [ebp+1]
        fmul dword ptr ds : [public_5d6edc]
        fld dword ptr ds : [public_5d8eec]
        movzx ecx, byte ptr ss : [ebp+2]
        fsub dword ptr ds : [public_5d8ee8]
        mov dword ptr ss : [esp+0x58], edx
        fdivp 
        xor edx, edx
        mov dh, byte ptr ss : [ebp+3]
        or edx, edi
        shl edx, 8
        shl edi, 8
        or edx, eax
        or edi, eax
        mov al, byte ptr ss : [esp+0xC4]
        shl edx, 8
        shl edi, 8
        or edx, ecx
        or edi, ecx
        test al, al
        mov esi, edx
        fsubr dword ptr ds : [public_5d043c]
        fstp dword ptr ss : [esp+0x10]
        je public_4eb482
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_423b60
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x1C]
        add esp, 0xC
        lea eax, ss:[esp+0x50]
        push eax
        fstp dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x2C]
        call public_4d7270
        lea ecx, ss:[esp+0x50]
        push ecx
        lea edx, ss:[esp+0x78]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_423b60
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x1C]
        push 0x40000000
        fld dword ptr ss : [esp+0x28]
        push edi
        fmul dword ptr ss : [esp+0x24]
        push esi
        fld dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x2C]
        fmul dword ptr ss : [esp+0x28]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x70]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0x3C]
        call public_5a2940
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0xCC], eax
        lea eax, ss:[esp+0x88]
        mov dword ptr ss : [esp+0xD0], ecx
        push eax
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0xD8], edx
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        call public_423b60
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x50], ecx
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x54], edx
        fld dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x4C], eax
        fmul dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x94]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x98]
        lea eax, ss:[esp+0x94]
        fadd st, st(1)
        push eax
        lea ecx, ss:[esp+0x8C]
        push ecx
        fstp dword ptr ss : [esp+0x58]
        lea edx, ss:[esp+0x74]
        push edx
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0xA8]
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x60]
        call public_423b60
        mov ecx, dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x50], ecx
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x54], edx
        fld dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x4C], eax
        fmul dword ptr ss : [esp+0x48]
        push 0x40000000
        push edi
        push esi
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0xAC]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0xB0]
        mov dword ptr ss : [esp+0x70], eax
        fadd st, st(1)
        lea eax, ss:[esp+0x58]
        push eax
        fstp dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x78], ecx
        fstp st(0)
        lea ecx, ss:[esp+0x68]
        fstp st(0)
        push ecx
        fld dword ptr ss : [esp+0xBC]
        fadd dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x80], edx
        fadd dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x7C]
        call public_5a2940
        add esp, 0x4C
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        call public_423b60
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x30], eax
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x34], ecx
        fld dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x2C], edx
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x68]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x6C]
        fadd st, st(1)
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x78]
        fstp dword ptr ss : [esp+0x34]
        push eax
        lea ecx, ss:[esp+0x54]
        fstp st(0)
        push ecx
        fstp st(0)
        fld dword ptr ss : [esp+0x7C]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x40]
        call public_423b60
        mov eax, dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x30], eax
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x34], ecx
        fld dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x2C], edx
        fmul dword ptr ss : [esp+0x28]
        push 0x40000000
        push edi
        push esi
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x80]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0xA4], edx
        fadd st, st(1)
        lea edx, ss:[esp+0x38]
        push edx
        fstp dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0xAC], eax
        fstp st(0)
        lea eax, ss:[esp+0x48]
        fstp st(0)
        push eax
        fld dword ptr ss : [esp+0x90]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0xB4], ecx
        call public_5a2940
        lea ecx, ss:[esp+0xA0]
        push ecx
        lea edx, ss:[esp+0x80]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        call public_423b60
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x5C], edx
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x60], eax
        fld dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x58], ecx
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0xAC]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0xB0]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x5C]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0xB4]
        fadd dword ptr ss : [esp+0x60]
        lea ecx, ss:[esp+0xAC]
        push ecx
        lea edx, ss:[esp+0xA4]
        push edx
        fstp dword ptr ss : [esp+0x68]
        lea eax, ss:[esp+0x80]
        push eax
        call public_423b60
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x5C], edx
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x60], eax
        fld dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x60]
        add esp, 0x44
        fld dword ptr ss : [esp+0x74]
        push 0x40000000
        fadd st, st(2)
        push edi
        mov dword ptr ss : [esp+0xA4], ecx
        mov dword ptr ss : [esp+0xA8], edx
        fstp dword ptr ss : [esp+0x1C]
        push esi
        fld dword ptr ss : [esp+0x84]
        lea ecx, ss:[esp+0x20]
        fadd st, st(1)
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0xB8], eax
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x90]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0xB4]
        call public_5a2940
        mov al, byte ptr ss : [esp+0xDC]
        add esp, 0x14
        test al, al
        je public_4eb92b
        push 0x40000000
        push edi
        push esi
        lea eax, ss:[esp+0xA8]
        push eax
        lea ecx, ss:[esp+0xBC]
        push ecx
        call public_5a2940
        push 0x40000000
        push edi
        push esi
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0xA4]
        push eax
        call public_5a2940
        add esp, 0x28
        jmp public_4eb92b
        public_4eb482 : nop
        lea ecx, ss:[esp+0x50]
        push ecx
        lea edx, ss:[esp+0x60]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_423b60
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x1C]
        push 0x40000000
        fld dword ptr ss : [esp+0x28]
        push edi
        fmul dword ptr ss : [esp+0x24]
        push esi
        fld dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x68]
        fmul dword ptr ss : [esp+0x28]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        fstp dword ptr ss : [esp+0x3C]
        fxch 
        fadd dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0x3C]
        call public_5a2940
        lea eax, ss:[esp+0x70]
        push eax
        lea ecx, ss:[esp+0x98]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        call public_423b60
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x44], ecx
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x48], edx
        fld dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x40], eax
        fmul dword ptr ss : [esp+0x3C]
        push 0x40000000
        push edi
        push esi
        fstp dword ptr ss : [esp+0x54]
        lea eax, ss:[esp+0x4C]
        fxch 
        push eax
        fadd dword ptr ss : [esp+0x8C]
        lea ecx, ss:[esp+0x8C]
        push ecx
        fstp dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x94]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp+0x5C]
        call public_5a2940
        add esp, 0x40
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x78]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        call public_423b60
        fld dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ecx
        fmul dword ptr ss : [esp+0x1C]
        push 0x40000000
        fld dword ptr ss : [esp+0x28]
        push edi
        fmul dword ptr ss : [esp+0x24]
        push esi
        fld dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0x80]
        fmul dword ptr ss : [esp+0x28]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x88]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x90]
        fstp dword ptr ss : [esp+0x3C]
        call public_5a2940
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x80]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        call public_423b60
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x44], edx
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x48], eax
        fld dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x40], ecx
        fmul dword ptr ss : [esp+0x3C]
        push 0x40000000
        push edi
        push esi
        fstp dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x4C]
        fld dword ptr ss : [esp+0xA0]
        push ecx
        fadd st, st(2)
        lea edx, ss:[esp+0xA4]
        push edx
        fstp dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0xAC]
        fstp dword ptr ss : [esp+0x58]
        fstp st(0)
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0xB0]
        fstp dword ptr ss : [esp+0x5C]
        call public_5a2940
        fld dword ptr ss : [esp+0x98]
        add esp, 0x40
        fsub dword ptr ss : [esp+0x64]
        sub esp, 0xC
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x60]
        fsub dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x18]
        push 0x40000000
        fmul dword ptr ss : [esp+0x14]
        push edi
        fld dword ptr ss : [esp+0x24]
        push esi
        fmul dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x2C]
        push ecx
        fld dword ptr ss : [esp+0x70]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0x30]
        call public_5a2940
        fld dword ptr ss : [esp+0x84]
        add esp, 8
        fsub dword ptr ss : [esp+0x70]
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x78]
        fsub dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], eax
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], edx
        fmul dword ptr ss : [esp+0x10]
        push 0x40000000
        push edi
        push esi
        fstp dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x68]
        push edx
        fadd st, st(2)
        lea eax, ss:[esp+0x6C]
        push eax
        fstp dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0x30]
        call public_5a2940
        fld dword ptr ss : [esp+0x6C]
        add esp, 8
        fsub dword ptr ss : [esp+0x88]
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x60]
        fsub dword ptr ss : [esp+0x84]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1C], eax
        fmul dword ptr ss : [esp+0x10]
        push 0x40000000
        fld dword ptr ss : [esp+0x1C]
        push edi
        fmul dword ptr ss : [esp+0x18]
        push esi
        fld dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x80]
        fmul dword ptr ss : [esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x88]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x90]
        fstp dword ptr ss : [esp+0x30]
        call public_5a2940
        fld dword ptr ss : [esp+0x84]
        add esp, 8
        fsub dword ptr ss : [esp+0x88]
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x78]
        fsub dword ptr ss : [esp+0x84]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        fmul dword ptr ss : [esp+0x10]
        push 0x40000000
        push edi
        push esi
        fstp dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x80]
        push eax
        fadd st, st(2)
        lea ecx, ss:[esp+0x84]
        push ecx
        fstp dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x90]
        fstp dword ptr ss : [esp+0x30]
        call public_5a2940
        add esp, 0x14
        public_4eb92b : nop
        mov al, byte ptr ds : [ebx+0x2E]
        test al, al
        mov al, byte ptr ss : [esp+0xC8]
        je public_4ebb86
        test al, al
        je public_4eb953
        movzx esi, byte ptr ss : [ebp+3]
        shl esi, 0x18
        or esi, 0xFF
        mov edi, 0xFF
        public_4eb953 : nop
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x20], edx
        push 0x40000000
        push edi
        fst dword ptr ss : [esp+0x18]
        push esi
        fadd st(0), st
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x30]
        fst dword ptr ss : [esp+0x4C]
        push ecx
        fmul qword ptr ds : [public_5cbf58]
        fstp dword ptr ss : [esp+0xAC]
        fld dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x24]
        fchs 
        fst dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0xA0]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ss : [esp+0xA4]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0xA8]
        fst dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0xA0]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0xA4]
        fstp dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x3C]
        call public_5a2940
        mov edx, dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0xAC]
        add esp, 0x14
        push edx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x8C]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0x40000000
        push edi
        push esi
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        call public_5a2940
        fld dword ptr ss : [esp+0xAC]
        mov edx, dword ptr ss : [esp+0x30]
        fchs 
        fst dword ptr ss : [esp+0xBC]
        add esp, 0x14
        fld dword ptr ss : [esp+0x18]
        push edx
        fadd st, st(1)
        sub esp, 8
        lea ecx, ss:[esp+0x8C]
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0x40000000
        push edi
        push esi
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_5a2940
        fld dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0xA0]
        push 0x40000000
        fadd dword ptr ss : [esp+0x50]
        push edi
        push esi
        lea edx, ss:[esp+0x34]
        fst dword ptr ss : [esp+0x34]
        push edx
        fld dword ptr ss : [esp+0xB4]
        lea eax, ss:[esp+0x44]
        fadd dword ptr ss : [esp+0x34]
        push eax
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0xBC]
        fst dword ptr ss : [esp+0x44]
        fxch 
        fstp dword ptr ss : [esp+0x48]
        fxch 
        fadd dword ptr ss : [esp+0xB8]
        fstp dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x50]
        call public_5a2940
        fld dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x50]
        fchs 
        add esp, 0x28
        fst dword ptr ss : [esp+0x3C]
        push ecx
        fld dword ptr ss : [esp+0x28]
        sub esp, 8
        fadd dword ptr ss : [esp+0xA4]
        lea ecx, ss:[esp+0x8C]
        fstp dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0x40000000
        push edi
        push esi
        lea edx, ss:[esp+0x8C]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_5a2940
        fld dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0xBC]
        mov ecx, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        add esp, 0x14
        fadd st, st(1)
        push ecx
        sub esp, 8
        lea ecx, ss:[esp+0x8C]
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0x40000000
        push edi
        push esi
        lea edx, ss:[esp+0x8C]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        jmp public_4ebdca
        public_4ebb86 : nop
        test al, al
        je public_4ebdd2
        fld dword ptr ss : [esp+0x10]
        movzx eax, byte ptr ss : [ebp]
        fmul dword ptr ss : [esp+0x38]
        movzx ecx, byte ptr ss : [ebp+1]
        fst dword ptr ss : [esp+0x10]
        movzx edi, byte ptr ss : [ebp+2]
        fadd st(0), st
        xor edx, edx
        mov dh, byte ptr ss : [ebp+3]
        fstp dword ptr ss : [esp+0x98]
        fld dword ptr ss : [esp+0x4C]
        push 0x40000000
        fld dword ptr ss : [esp+0x14]
        fchs 
        fst dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x90]
        or edx, eax
        fstp dword ptr ss : [esp+0x18]
        shl eax, 8
        fld dword ptr ss : [esp+0x94]
        shl edx, 8
        fadd dword ptr ss : [esp+0x14]
        or eax, ecx
        or edx, ecx
        shl eax, 8
        fstp dword ptr ss : [esp+0x1C]
        shl edx, 8
        fld dword ptr ss : [esp+0x98]
        or edx, edi
        fst dword ptr ss : [esp+0x20]
        or eax, edi
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x24], eax
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x90]
        mov esi, edx
        push edi
        push esi
        fstp dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x30]
        push ecx
        fadd dword ptr ss : [esp+0xA0]
        lea edx, ss:[esp+0x30]
        push edx
        fstp dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x3C]
        call public_5a2940
        mov eax, dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x24]
        add esp, 0x14
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x8C]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0xA4]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0x40000000
        push edi
        push esi
        lea ecx, ss:[esp+0x8C]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        call public_5a2940
        fld dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0xAC]
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ss : [esp+0x2C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x98]
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        push 0x40000000
        push edi
        push esi
        lea eax, ss:[esp+0xA0]
        push eax
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+0xAC]
        push ecx
        call public_5a2940
        fld dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0xB4]
        push 0x40000000
        fadd dword ptr ss : [esp+0x64]
        push edi
        push esi
        lea edx, ss:[esp+0x48]
        fst dword ptr ss : [esp+0x48]
        push edx
        fld dword ptr ss : [esp+0xC8]
        lea eax, ss:[esp+0x58]
        fadd dword ptr ss : [esp+0x48]
        push eax
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0xD0]
        fst dword ptr ss : [esp+0x58]
        fxch 
        fstp dword ptr ss : [esp+0x5C]
        fxch 
        fadd dword ptr ss : [esp+0xCC]
        fstp dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x64]
        call public_5a2940
        fld dword ptr ss : [esp+0xD4]
        push 0x40000000
        fchs 
        push edi
        fst dword ptr ss : [esp+0xEC]
        push esi
        fadd dword ptr ss : [esp+0x68]
        lea ecx, ss:[esp+0xC8]
        push ecx
        lea edx, ss:[esp+0x6C]
        fstp dword ptr ss : [esp+0xCC]
        fld dword ptr ss : [esp+0x70]
        push edx
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0xD4]
        fld dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0xD8]
        call public_5a2940
        fld dword ptr ss : [esp+0x8C]
        fld dword ptr ss : [esp+0xF8]
        add esp, 0x50
        fadd dword ptr ss : [esp+0x14]
        push 0x40000000
        push edi
        push esi
        fstp dword ptr ss : [esp+0x8C]
        fld dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x8C]
        fadd st, st(1)
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        fstp dword ptr ss : [esp+0x98]
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x9C]
        public_4ebdca : nop
        call public_5a2940
        add esp, 0x14
        public_4ebdd2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA8
        ret 0x10
        UNREACHABLE_TRAP(0x4eada0)
    }
}

#undef public_4eb482
#undef public_4eb92b
#undef public_4eb953
#undef public_4ebb86
#undef public_4ebdca
#undef public_4ebdd2
