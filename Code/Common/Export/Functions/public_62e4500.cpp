#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e4500);
CLANG_FORWARD_PROC_SYMBOL(public_62e4660);

#define public_62e4541 _public_62e4541
#define public_62e4555 _public_62e4555
#define public_62e4560 _public_62e4560
#define public_62e458f _public_62e458f
#define public_62e460f _public_62e460f
#define public_62e4631 _public_62e4631
#define public_62e463b _public_62e463b
#define public_62e4651 _public_62e4651

PROC_DECLARE(0x62e4500, internal_62e4500, public_62e4500);
extern "C" NAKED register_t __cdecl internal_62e4500()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0xC], 0
        call dword ptr ds : [eax+0x88]
        mov esi, dword ptr ss : [esp+0x1C]
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62e4541
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+8]
        push eax
        call dword ptr ds : [edx+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62e4541 : nop
        test dword ptr ds : [esi+8], 0x30000
        mov eax, dword ptr ss : [esp+8]
        je public_62e4555
        test eax, 0x30000
        jne public_62e4560
        public_62e4555 : nop
        test eax, 0x207
        je public_62e4631
        public_62e4560 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x2C]
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62e458f
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e458f : nop
        fld dword ptr ds : [esi+0xC]
        lea eax, ds:[esi+0xC]
        fsub dword ptr ss : [esp+0xC]
        mov edx, 0x5F3759DF
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x14]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x20], edx
        fld dword ptr ss : [esp+0x20]
        mov cl, byte ptr ds : [esi+0x7E]
        test cl, cl
        fmul dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        jne public_62e460f
        mov ecx, dword ptr ds : [esi+0x84]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e460f : nop
        fld dword ptr ds : [esi+0x18]
        fadd dword ptr ss : [esp+0x1C]
        fsubr dword ptr ss : [esp+0x20]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e463b
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        jmp public_62e463b
        public_62e4631 : nop
        push edi
        push esi
        call public_62e4660
        add esp, 8
        public_62e463b : nop
        fcomp dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        fnstsw ax
        test ah, 0x41
        jp public_62e4651
        mov eax, 1
        add esp, 0x10
        ret 
        public_62e4651 : nop
        xor eax, eax
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62e4500)
    }
}

#undef public_62e4541
#undef public_62e4555
#undef public_62e4560
#undef public_62e458f
#undef public_62e460f
#undef public_62e4631
#undef public_62e463b
#undef public_62e4651
