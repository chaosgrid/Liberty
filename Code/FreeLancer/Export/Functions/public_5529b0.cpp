#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ad0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_5526f0);
CLANG_FORWARD_PROC_SYMBOL(public_5529b0);

#define public_552ab5 _public_552ab5
#define public_552acd _public_552acd
#define public_552afc _public_552afc

PROC_DECLARE(0x5529b0, internal_5529b0, public_5529b0);
extern "C" NAKED register_t __cdecl internal_5529b0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x14C]
        test al, al
        je public_552afc
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jnp public_552afc
        push ebx
        push ebp
        push edi
        push 0xB44
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 2
        push 2
        call public_4220c0
        push 0
        call public_422190
        lea eax, ds:[esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [public_5c71dc]
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x24], ecx
        push edx
        fmul dword ptr ds : [public_5caeec]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x30]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x34]
        call public_422950
        mov ecx, dword ptr ds : [esi+0x38]
        add esp, 0x18
        push 0
        call public_425640
        push eax
        call public_4220a0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        push edx
        call public_421ad0
        push 8
        call public_421670
        add esp, 0x14
        lea edi, ds:[esi+0x48]
        lea ebx, ds:[esi+0x128]
        mov ebp, 8
        public_552ab5 : nop
        cmp dword ptr ds : [ebx], 3
        jge public_552acd
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        push eax
        push edi
        mov ecx, esi
        call public_5526f0
        public_552acd : nop
        add ebx, 4
        add edi, 0x1C
        dec ebp
        jne public_552ab5
        call public_421690
        push 1
        call public_422190
        push 0xBE2
        call public_421ed0
        push 0xB44
        call public_421dd0
        add esp, 0xC
        pop edi
        pop ebp
        pop ebx
        public_552afc : nop
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x5529b0)
    }
}

#undef public_552ab5
#undef public_552acd
#undef public_552afc
