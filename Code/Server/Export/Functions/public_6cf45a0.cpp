#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7c10);
CLANG_FORWARD_PROC_SYMBOL(public_6cf45a0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf4960);
CLANG_FORWARD_PROC_SYMBOL(public_6cf4990);
CLANG_FORWARD_PROC_SYMBOL(public_6cf49b0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf49e0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf4a10);
CLANG_FORWARD_PROC_SYMBOL(public_6cf4a40);
CLANG_FORWARD_PROC_SYMBOL(public_6cf4a90);

#define public_6cf476d _public_6cf476d
#define public_6cf47fd _public_6cf47fd
#define public_6cf47ff _public_6cf47ff
#define public_6cf494a _public_6cf494a

PROC_DECLARE(0x6cf45a0, internal_6cf45a0, public_6cf45a0);
extern "C" NAKED register_t __cdecl internal_6cf45a0()
{
    __asm
    {
        sub esp, 0x94
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x9C]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_6cf49e0
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0xA0]
        push eax
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        call public_6cf49e0
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x34]
        add esp, 0xC
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6cf47ff
        fld dword ptr ss : [esp+0x3C]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x50]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x44]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x2C]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x48]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fcom dword ptr ds : [public_6d66968]
        fnstsw ax
        test ah, 1
        jne public_6cf47fd
        fdivr qword ptr ds : [public_6d64f00]
        push edi
        push ecx
        lea ecx, ss:[esp+0x4C]
        lea edx, ss:[esp+0x70]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6cf4a10
        fld dword ptr ds : [public_6d6649c]
        add esp, 8
        lea eax, ss:[esp+0x70]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_6cf4a10
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [public_6d6419c]
        fmul dword ptr ss : [esp+0x20]
        add esp, 0xC
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+8]
        call edi
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [eax+0xA0]
        fnstsw ax
        test ah, 0x41
        jne public_6cf476d
        lea ecx, ss:[esp+0xC]
        call public_6cf4960
        fdivr dword ptr ds : [public_6d65520]
        mov ecx, dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        call edi
        mov edx, dword ptr ds : [eax+0xA0]
        mov eax, edx
        push eax
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0xC], edx
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_6cf4a10
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        public_6cf476d : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        call dword ptr ds : [public_6d64474]
        add esp, 8
        lea edx, ss:[esp+0x60]
        push edx
        mov ecx, eax
        call public_6cf4990
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [eax+0x1C]
        add eax, 8
        push ecx
        mov ecx, dword ptr ds : [eax+8]
        push edx
        mov edx, dword ptr ds : [eax+0x1C]
        push ecx
        mov ecx, dword ptr ds : [eax+0x10]
        push edx
        mov edx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, dword ptr ds : [eax+0x18]
        push edx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x9C]
        call public_6cf4a40
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6cf4a90
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        call public_6cf49b0
        mov edx, dword ptr ds : [esi+0x10]
        lea ecx, ss:[esp+0x6C]
        push ecx
        push edx
        call dword ptr ds : [public_6d64470]
        add esp, 0x20
        pop edi
        jmp public_6cf47ff
        public_6cf47fd : nop
        fstp st(0)
        public_6cf47ff : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        sub esp, 0xC
        fld dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fcomp qword ptr ds : [public_6d65538]
        fnstsw ax
        test ah, 0x41
        jne public_6cf494a
        fld dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi]
        fmul dword ptr ss : [esp+0x34]
        mov ecx, esi
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+4]
        call dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+0x20]
        fld dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+8]
        fld dword ptr ds : [eax+8]
        push ecx
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        call public_6cf4990
        fld dword ptr ss : [esp+0x10]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        fld dword ptr ss : [esp+0x34]
        sub esp, 0xC
        fchs 
        lea ecx, ss:[esp+0x50]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fchs 
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        fld dword ptr ss : [esp+0x1C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x58]
        lea ecx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        mov eax, dword ptr ds : [esi+0x10]
        lea edx, ss:[esp+0x50]
        push edx
        push eax
        call dword ptr ds : [public_6d6446c]
        add esp, 8
        public_6cf494a : nop
        pop esi
        add esp, 0x94
        ret 8
        UNREACHABLE_TRAP(0x6cf45a0)
    }
}

#undef public_6cf476d
#undef public_6cf47fd
#undef public_6cf47ff
#undef public_6cf494a
