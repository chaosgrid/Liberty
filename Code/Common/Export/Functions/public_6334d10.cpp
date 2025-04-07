#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6334ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6334d10);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6334d44 _public_6334d44
#define public_6334d91 _public_6334d91
#define public_6334eca _public_6334eca
#define public_6334f1e _public_6334f1e

PROC_DECLARE(0x6334d10, internal_6334d10, public_6334d10);
extern "C" NAKED register_t __cdecl internal_6334d10()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x54]
        push edi
        mov edi, dword ptr ss : [esp+0x54]
        lea ebp, ds:[edi+0x24]
        push ebp
        lea eax, ss:[esp+0x2C]
        push esi
        push eax
        call public_6288800
        mov eax, dword ptr ds : [public_658a9b0]
        add esp, 0xC
        test eax, eax
        jne public_6334d44
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_6334d44 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ss : [ebp+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_6334d91
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_6334d91 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [public_639a1d0]
        fdiv dword ptr ds : [edi+0x30]
        mov esi, dword ptr ss : [esp+0x5C]
        push esi
        mov dword ptr ss : [esp+0x38], 0x3F800000
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_639a1d0]
        mov eax, dword ptr ss : [esp+0x14]
        fdiv dword ptr ds : [edi+0x34]
        mov dword ptr ss : [esp+0x3C], eax
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_639a1d0]
        mov ecx, dword ptr ss : [esp+0x18]
        fdiv dword ptr ds : [edi+0x38]
        mov dword ptr ss : [esp+0x40], ecx
        fst dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        fxch 
        fmul dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x44], edx
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x20], 0
        mov eax, dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x24], 0
        mov ecx, dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x50], edx
        push eax
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x2C], 0
        mov edx, dword ptr ss : [esp+0x2C]
        push ecx
        mov dword ptr ss : [esp+0x3C], edx
        call public_6334ac0
        mov bl, al
        add esp, 0xC
        test bl, bl
        je public_6334f1e
        fld dword ptr ds : [esi]
        mov edx, esi
        fmul dword ptr ds : [edi+0x30]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+0x34]
        mov eax, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edi+0x38]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_6334eca
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_6334eca : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ss : [ebp]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+8]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], eax
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+8], ecx
        public_6334f1e : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6334d10)
    }
}

#undef public_6334d44
#undef public_6334d91
#undef public_6334eca
#undef public_6334f1e
