#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63461a0);
CLANG_FORWARD_PROC_SYMBOL(public_6346cf0);
CLANG_FORWARD_PROC_SYMBOL(public_63484e0);
CLANG_FORWARD_PROC_SYMBOL(public_6357400);
CLANG_FORWARD_PROC_SYMBOL(public_6366010);

#define public_6357564 _public_6357564
#define public_635763a _public_635763a
#define public_6357707 _public_6357707
#define public_63577dc _public_63577dc
#define public_6357892 _public_6357892

PROC_DECLARE(0x6357400, internal_6357400, public_6357400);
extern "C" NAKED register_t __cdecl internal_6357400()
{
    __asm
    {
        sub esp, 0xEC
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xF4]
        lea eax, ss:[esp+0xD8]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        call public_63484e0
        mov eax, dword ptr ds : [esi+0xF8]
        mov ecx, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0xE8]
        push edx
        push eax
        call public_63484e0
        mov eax, dword ptr ss : [esp+0xFC]
        fld dword ptr ds : [eax]
        lea ecx, ss:[esp+0x98]
        fmul dword ptr ds : [public_63a5498]
        push ecx
        mov ecx, dword ptr ds : [esi+0xF4]
        lea edx, ss:[esp+0x6C]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [eax+4]
        push edx
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x60]
        fmul dword ptr ds : [public_63a5498]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0xEC]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0x24]
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x7C]
        fld dword ptr ds : [esi+0x2C]
        fstp dword ptr ss : [esp+0x80]
        fld dword ptr ds : [esi+0x44]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ds : [esi+0x48]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ds : [esi+0x4C]
        fstp dword ptr ss : [esp+0x70]
        call public_63461a0
        fld dword ptr ds : [esi+0x34]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ds : [esi+0x38]
        lea edx, ss:[esp+0xC8]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ds : [esi+0x3C]
        push edx
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ds : [esi+0x54]
        lea eax, ss:[esp+0x6C]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [esi+0x58]
        push eax
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ds : [esi+0x5C]
        lea ecx, ss:[esp+0x60]
        fstp dword ptr ss : [esp+0x68]
        push ecx
        mov edx, dword ptr ds : [esi+0xF8]
        mov ecx, dword ptr ds : [esi+0xF0]
        push edx
        call public_63461a0
        fld dword ptr ss : [esp+0xC8]
        fsub dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0x100]
        cmp eax, 1
        fld dword ptr ss : [esp+0xCC]
        fsub dword ptr ss : [esp+0x9C]
        fld dword ptr ss : [esp+0xD0]
        fsub dword ptr ss : [esp+0xA0]
        fmul dword ptr ss : [esp+0x2C]
        fxch 
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fxch 
        fmul dword ptr ss : [esp+0x24]
        faddp 
        jne public_6357564
        fcom dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_6357564
        fstp st(0)
        fld dword ptr ds : [public_63a53d4]
        public_6357564 : nop
        fld dword ptr ds : [esi]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_6357892
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0xF0]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0xC], 0
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x1C]
        test byte ptr ds : [eax], 0xC
        jne public_635763a
        lea ecx, ss:[esp+0x78]
        push ecx
        mov ecx, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x18]
        push edx
        call public_6366010
        lea eax, ss:[esp+0xB8]
        push eax
        lea ecx, ss:[esp+0x8C]
        push ecx
        mov ecx, dword ptr ds : [esi+0xF8]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x84]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0xF0]
        call public_6346cf0
        lea edx, ss:[esp+0x48]
        push edx
        mov edx, dword ptr ds : [esi+0xF8]
        lea eax, ss:[esp+0xBC]
        push eax
        lea ecx, ss:[esp+0x90]
        push ecx
        mov ecx, dword ptr ds : [esi+0xF0]
        push edx
        call public_63461a0
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fstp dword ptr ss : [esp+0xC]
        public_635763a : nop
        mov eax, dword ptr ds : [esi+0xEC]
        test byte ptr ds : [eax], 0xC
        jne public_6357707
        fld dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x78]
        fmul dword ptr ds : [public_63a5498]
        push edx
        fld dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x18]
        fmul dword ptr ds : [public_63a5498]
        push eax
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_63a5498]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        call public_6366010
        lea ecx, ss:[esp+0xB8]
        push ecx
        lea edx, ss:[esp+0x8C]
        push edx
        mov edx, dword ptr ds : [esi+0xF4]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        mov ecx, dword ptr ds : [esi+0xEC]
        push edx
        call public_6346cf0
        lea eax, ss:[esp+0x48]
        push eax
        mov eax, dword ptr ds : [esi+0xF4]
        lea ecx, ss:[esp+0xBC]
        push ecx
        mov ecx, dword ptr ds : [esi+0xEC]
        lea edx, ss:[esp+0x90]
        push edx
        push eax
        call public_63461a0
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        public_6357707 : nop
        fld dword ptr ss : [esp+0x34]
        fdiv dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_6357892
        mov ecx, dword ptr ds : [esi+0xEC]
        test byte ptr ds : [ecx], 0xC
        jne public_63577dc
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x1C]
        fchs 
        lea edx, ss:[esp+0xA8]
        fld st(0)
        push edx
        fmul dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x3C]
        push eax
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        call public_6366010
        mov eax, dword ptr ds : [esi+0xF4]
        lea edi, ds:[esi+0x64]
        push edi
        lea ebx, ds:[esi+0x84]
        push ebx
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, dword ptr ds : [esi+0xEC]
        lea edx, ss:[esp+0xB4]
        push edx
        push eax
        call public_6346cf0
        fld dword ptr ds : [edi+4]
        fadd dword ptr ds : [esi+0x28]
        fld dword ptr ds : [edi+8]
        fadd dword ptr ds : [esi+0x2C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0x2C], ecx
        fstp dword ptr ds : [esi+0x24]
        fstp dword ptr ds : [esi+0x28]
        fld dword ptr ds : [ebx+4]
        fadd dword ptr ds : [esi+0x48]
        fld dword ptr ds : [ebx+8]
        fadd dword ptr ds : [esi+0x4C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+0x44]
        mov dword ptr ds : [esi+0x4C], edx
        fstp dword ptr ds : [esi+0x44]
        fstp dword ptr ds : [esi+0x48]
        public_63577dc : nop
        mov eax, dword ptr ds : [esi+0xF0]
        test byte ptr ds : [eax], 0xC
        jne public_6357892
        fld dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0xA8]
        fmul dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x2C]
        push edx
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x48]
        call public_6366010
        mov edx, dword ptr ds : [esi+0xF8]
        lea edi, ds:[esi+0x74]
        push edi
        lea ebx, ds:[esi+0x94]
        push ebx
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0xB4]
        push ecx
        mov ecx, dword ptr ds : [esi+0xF0]
        push edx
        call public_6346cf0
        fld dword ptr ds : [edi+4]
        fadd dword ptr ds : [esi+0x38]
        fld dword ptr ds : [edi+8]
        fadd dword ptr ds : [esi+0x3C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+0x34]
        mov dword ptr ds : [esi+0x3C], eax
        fstp dword ptr ds : [esi+0x34]
        fstp dword ptr ds : [esi+0x38]
        fld dword ptr ds : [ebx+4]
        fadd dword ptr ds : [esi+0x58]
        fld dword ptr ds : [ebx+8]
        fadd dword ptr ds : [esi+0x5C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+0x54]
        mov dword ptr ds : [esi+0x5C], ecx
        fstp dword ptr ds : [esi+0x54]
        fstp dword ptr ds : [esi+0x58]
        public_6357892 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xEC
        ret 8
        UNREACHABLE_TRAP(0x6357400)
    }
}

#undef public_6357564
#undef public_635763a
#undef public_6357707
#undef public_63577dc
#undef public_6357892
