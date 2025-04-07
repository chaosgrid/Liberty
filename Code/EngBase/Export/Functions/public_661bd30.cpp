#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661c270);
CLANG_FORWARD_PROC_SYMBOL(public_661c290);
CLANG_FORWARD_PROC_SYMBOL(public_661c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_661c2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661bd88 _public_661bd88
#define public_661bd8c _public_661bd8c
#define public_661bdb6 _public_661bdb6
#define public_661bdb8 _public_661bdb8
#define public_661be81 _public_661be81
#define public_661be92 _public_661be92
#define public_661be99 _public_661be99
#define public_661be9b _public_661be9b
#define public_661bf4e _public_661bf4e
#define public_661bf50 _public_661bf50
#define public_661bfd2 _public_661bfd2
#define public_661bfda _public_661bfda
#define public_661c109 _public_661c109
#define public_661c20e _public_661c20e
#define public_661c226 _public_661c226
#define public_661c239 _public_661c239

PROC_DECLARE(0x661bd30, internal_661bd30, public_661bd30);
extern "C" NAKED register_t __cdecl internal_661bd30()
{
    __asm
    {
        sub esp, 0x68
        fld dword ptr ss : [esp+0x70]
        push esi
        mov esi, ecx
        lea edx, ss:[esp+0x14]
        fmul dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [esi+0x24]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x7C]
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [esi+0x28]
        fcomp qword ptr ds : [public_6629238]
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x1C], 0
        fld dword ptr ss : [esp+0x10]
        fnstsw ax
        mov dword ptr ss : [esp+0x20], 0
        test ah, 5
        jp public_661bd88
        fsub dword ptr ss : [esp+0x74]
        jmp public_661bd8c
        public_661bd88 : nop
        fadd dword ptr ss : [esp+0x74]
        public_661bd8c : nop
        fst dword ptr ss : [esp+0x74]
        fld dword ptr ds : [esi+0x28]
        fcomp qword ptr ds : [public_6629238]
        push ebx
        fnstsw ax
        test ah, 5
        jp public_661be81
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        test ah, 5
        jnp public_661be92
        public_661bdb6 : nop
        xor bl, bl
        public_661bdb8 : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+8]
        push edx
        lea edx, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        lea edx, ss:[esp+0x5C]
        push ecx
        push edx
        call public_661c2c0
        fld dword ptr ss : [esp+0x14]
        add esp, 8
        lea eax, ss:[esp+0x5C]
        fstp dword ptr ss : [esp]
        lea ecx, ss:[esp+0x50]
        push eax
        push ecx
        call public_661c2f0
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x58]
        push edx
        lea ecx, ss:[esp+0x50]
        push eax
        push ecx
        call public_661c290
        fld dword ptr ds : [esi+0x2C]
        fmul dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x5C]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x4C], edx
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], ecx
        add esp, 0x18
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        test bl, bl
        pop ebx
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        je public_661c109
        test byte ptr ds : [esi+0x20], 2
        je public_661c109
        fld dword ptr ds : [esi+0x28]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        test ah, 5
        jp public_661be99
        mov ecx, 1
        jmp public_661be9b
        public_661be81 : nop
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        and eax, 0x4100
        jne public_661bdb6
        public_661be92 : nop
        mov bl, 1
        jmp public_661bdb8
        public_661be99 : nop
        xor ecx, ecx
        public_661be9b : nop
        mov eax, dword ptr ds : [esi+0x24]
        push edi
        test cl, cl
        mov edx, dword ptr ds : [eax]
        lea edi, ss:[esp+0x14]
        sete cl
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        fld dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fld st(0)
        fmul dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_661c270
        fld dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        sub esp, 0xC
        lea ecx, ss:[esp+0x70]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x50]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_661c270
        lea edx, ss:[esp+0x34]
        lea eax, ss:[esp+0x64]
        push edx
        lea ecx, ss:[esp+0x44]
        push eax
        push ecx
        call public_661c2c0
        fld dword ptr ds : [esi+0x28]
        fcomp qword ptr ds : [public_6629238]
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x2C], eax
        add esp, 0xC
        mov dword ptr ss : [esp+0x1C], edx
        fnstsw ax
        mov dword ptr ss : [esp+0x24], ecx
        test ah, 5
        jp public_661bf4e
        mov ecx, 1
        jmp public_661bf50
        public_661bf4e : nop
        xor ecx, ecx
        public_661bf50 : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea edi, ss:[esp+0x14]
        push edi
        push ecx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x20]
        fld dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fld st(0)
        fmul dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_661c270
        fld dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        sub esp, 0xC
        lea ecx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x50]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_661c270
        fld dword ptr ds : [esi+0x28]
        fcomp qword ptr ds : [public_6629238]
        pop edi
        fnstsw ax
        test ah, 5
        jp public_661bfd2
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x74]
        jmp public_661bfda
        public_661bfd2 : nop
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ss : [esp+0x14]
        public_661bfda : nop
        fstp dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+4]
        push edx
        lea edx, ss:[esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x80]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0xC
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp]
        call public_661c270
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+4]
        sub esp, 0xC
        lea ecx, ss:[esp+0x54]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call public_661c270
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_661c270
        fld dword ptr ds : [esi+0x2C]
        fmul dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        fld dword ptr ss : [esp+0x28]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(3)
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x30], eax
        fsub dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_661c270
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x20]
        jmp public_661c226
        public_661c109 : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+4]
        push edx
        lea edx, ss:[esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x80]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        jne public_661c20e
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0xC
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x60]
        fstp dword ptr ss : [esp]
        call public_661c270
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x68]
        fxch 
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x24], eax
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [esi+0x2C]
        fmul dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x28]
        fmul st, st(2)
        mov dword ptr ss : [esp+0x2C], edx
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x18], eax
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x1C], ecx
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x20], edx
        jmp public_661c226
        public_661c20e : nop
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        public_661c226 : nop
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        jne public_661c239
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661c239 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        add esi, 0x3C
        lea edx, ss:[esp+0x58]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x54]
        mov ecx, eax
        pop esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x68
        ret 8
        UNREACHABLE_TRAP(0x661bd30)
    }
}

#undef public_661bd88
#undef public_661bd8c
#undef public_661bdb6
#undef public_661bdb8
#undef public_661be81
#undef public_661be92
#undef public_661be99
#undef public_661be9b
#undef public_661bf4e
#undef public_661bf50
#undef public_661bfd2
#undef public_661bfda
#undef public_661c109
#undef public_661c20e
#undef public_661c226
#undef public_661c239
