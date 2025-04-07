#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403350);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_403374 _public_403374
#define public_4033a4 _public_4033a4
#define public_403431 _public_403431

PROC_DECLARE(0x403350, internal_403350, public_403350);
extern "C" NAKED register_t __cdecl internal_403350()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [public_616494]
        test eax, eax
        jne public_403374
        call public_5b73e0
        mov dword ptr ds : [public_616494], eax
        public_403374 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push edi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x20]
        fsubr dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_4033a4
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_4033a4 : nop
        fld dword ptr ds : [public_5c7500]
        mov ecx, dword ptr ss : [esp+0x34]
        fdiv dword ptr ss : [esp+0x10]
        push esi
        fst dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x2C]
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x20]
        fmul dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi]
        push esi
        fstp dword ptr ss : [esp+0x20]
        call dword ptr ds : [ecx+0x30]
        mov edx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x34]
        push esi
        call dword ptr ds : [edx+0x20]
        fmul dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c75e0]
        fld st(0)
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c75e0]
        fabs 
        fstp dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_403431
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_403431 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x14]
        mov edi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+8]
        sub ecx, edi
        mov dword ptr ss : [esp+0x20], ecx
        fild dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        sub edx, ecx
        mov dword ptr ss : [esp+0x20], edx
        fmul dword ptr ds : [public_5c75e0]
        fild dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5c75e0]
        fld dword ptr ss : [esp+8]
        pop edi
        fmul dword ptr ss : [esp+0x18]
        pop esi
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fiadd dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x10]
        fiadd dword ptr ds : [eax+4]
        mov al, 1
        fadd st, st(1)
        fstp dword ptr ds : [edx]
        fstp st(0)
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x403350)
    }
}

#undef public_403374
#undef public_4033a4
#undef public_403431
