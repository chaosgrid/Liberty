#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5568d4 _public_5568d4
#define public_556941 _public_556941

PROC_DECLARE(0x5568b0, internal_5568b0, public_5568b0);
extern "C" NAKED register_t __cdecl internal_5568b0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [public_6799bc]
        test eax, eax
        jne public_5568d4
        call public_5b73e0
        mov dword ptr ds : [public_6799bc], eax
        public_5568d4 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        push edx
        push edi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ds : [esi+0x1C]
        fchs 
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 1
        jne public_556941
        fld dword ptr ds : [public_5c7500]
        mov eax, dword ptr ss : [esp+0x1C]
        fdiv dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi+0x38]
        fmul st, st(1)
        fiadd dword ptr ds : [esi+4]
        fadd dword ptr ds : [esi+0x30]
        fstp dword ptr ds : [eax]
        mov al, 1
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+0x3C]
        fmul st, st(1)
        fiadd dword ptr ds : [esi+8]
        fadd dword ptr ds : [esi+0x34]
        pop esi
        fstp dword ptr ds : [ecx]
        fstp st(0)
        fld dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ds : [edx]
        add esp, 0xC
        ret 0x14
        public_556941 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 0x14
        UNREACHABLE_TRAP(0x5568b0)
    }
}

#undef public_5568d4
#undef public_556941
