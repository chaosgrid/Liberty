#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661c270);
CLANG_FORWARD_PROC_SYMBOL(public_661c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661c349 _public_661c349
#define public_661c34d _public_661c34d
#define public_661c412 _public_661c412
#define public_661c531 _public_661c531

PROC_DECLARE(0x661c320, internal_661c320, public_661c320);
extern "C" NAKED register_t __cdecl internal_661c320()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        mov esi, ecx
        push edi
        fld dword ptr ds : [esi+0x28]
        fcomp qword ptr ds : [public_6629238]
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        fld dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jp public_661c349
        fsub dword ptr ss : [esp+0x44]
        jmp public_661c34d
        public_661c349 : nop
        fadd dword ptr ss : [esp+0x44]
        public_661c34d : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        fstp dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        push edi
        lea ecx, ss:[esp+0x2C]
        push eax
        push ecx
        call public_661c2c0
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_661c270
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [edi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_661c270
        fld dword ptr ds : [esi+0x2C]
        fmul dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [public_662acf4]
        fmul st, st(1)
        test eax, eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        jne public_661c412
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661c412 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        lea ebx, ds:[esi+0x3C]
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [esi+0x68]
        sub esp, 0xC
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [esi+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi+0x60]
        fstp dword ptr ss : [esp]
        call public_661c270
        mov eax, dword ptr ds : [esi+0x24]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ss:[esp+0x18]
        mov edx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        sub esp, 0xC
        lea ecx, ss:[esp+0x34]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_661c270
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0xC]
        sub esp, 0xC
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_661c270
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [edi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_661c270
        fld dword ptr ds : [esi+0x2C]
        fmul dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        fstp st(0)
        jne public_661c531
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661c531 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi+0x60]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+0x64]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [esi+0x68]
        add esi, 0x6C
        pop edi
        fstp dword ptr ss : [esp+0x2C]
        fxch 
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x38]
        fld dword ptr ds : [public_66294f8]
        fdiv dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fxch st(2)
        fmul st, st(2)
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edx
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        mov dword ptr ds : [esi+4], eax
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+8], ecx
        pop esi
        fstp st(0)
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x661c320)
    }
}

#undef public_661c349
#undef public_661c34d
#undef public_661c412
#undef public_661c531
