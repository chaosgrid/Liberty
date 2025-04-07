#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285c90);
CLANG_FORWARD_PROC_SYMBOL(public_6296250);
CLANG_FORWARD_PROC_SYMBOL(public_629b010);
CLANG_FORWARD_PROC_SYMBOL(public_62b16c0);
CLANG_FORWARD_PROC_SYMBOL(public_62b3730);

#define public_6296290 _public_6296290
#define public_6296292 _public_6296292
#define public_62962d7 _public_62962d7
#define public_62962f9 _public_62962f9
#define public_62962fb _public_62962fb
#define public_6296352 _public_6296352
#define public_6296367 _public_6296367
#define public_6296369 _public_6296369
#define public_6296394 _public_6296394
#define public_62963ac _public_62963ac
#define public_62963af _public_62963af
#define public_62963bc _public_62963bc
#define public_62963cf _public_62963cf
#define public_62963d7 _public_62963d7

PROC_DECLARE(0x6296250, internal_6296250, public_6296250);
extern "C" NAKED register_t __cdecl internal_6296250()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        test al, al
        je public_62963d7
        mov al, byte ptr ss : [esp+8]
        cmp byte ptr ds : [esi+0x54], al
        je public_62963d7
        mov byte ptr ds : [esi+0x54], al
        test al, al
        mov eax, dword ptr ds : [esi+4]
        je public_6296352
        test eax, eax
        je public_6296290
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_6296292
        public_6296290 : nop
        xor eax, eax
        public_6296292 : nop
        push 0x3F800000
        mov ecx, eax
        call public_62b16c0
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        je public_62962d7
        mov edx, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [edx+0x80]
        lea eax, ss:[esp+0xC]
        push eax
        fstp dword ptr ds : [esi+0x50]
        push 0xE
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 3
        call public_629b010
        lea ecx, ds:[esi+0x20]
        call public_6285c90
        mov al, byte ptr ds : [esi+0x54]
        pop esi
        ret 8
        public_62962d7 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov edx, dword ptr ds : [ecx+0x70]
        mov dword ptr ss : [esp+0xC], edx
        je public_62962f9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_62962fb
        public_62962f9 : nop
        xor eax, eax
        public_62962fb : nop
        mov ecx, eax
        call public_62b3730
        fmul dword ptr ds : [public_63eb5cc]
        fld dword ptr ds : [public_63eb5d0]
        fmul dword ptr ss : [esp+0xC]
        fdiv st, st(1)
        fstp dword ptr ds : [esi+0x4C]
        fstp st(0)
        fld dword ptr ds : [esi+0x50]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62963cf
        lea edx, ss:[esp+0xC]
        push edx
        push 0xE
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 2
        call public_629b010
        lea ecx, ds:[esi+0x20]
        call public_6285c90
        mov al, byte ptr ds : [esi+0x54]
        pop esi
        ret 8
        public_6296352 : nop
        test eax, eax
        je public_6296367
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_6296369
        public_6296367 : nop
        xor eax, eax
        public_6296369 : nop
        push 0x3F800000
        mov ecx, eax
        call public_62b16c0
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        je public_6296394
        fld dword ptr ds : [public_63fc158]
        lea edx, ss:[esp+0xC]
        fchs 
        mov dword ptr ss : [esp+0xC], 1
        push edx
        jmp public_62963bc
        public_6296394 : nop
        fld dword ptr ds : [esi+0x50]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62963ac
        fld dword ptr ds : [public_6399408]
        jmp public_62963af
        public_62963ac : nop
        fld dword ptr ds : [esi+0x50]
        public_62963af : nop
        lea eax, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], 0
        push eax
        public_62963bc : nop
        mov ecx, esi
        fstp dword ptr ds : [esi+0x50]
        push 0xE
        call public_629b010
        mov dword ptr ds : [esi+0x4C], 0
        public_62963cf : nop
        lea ecx, ds:[esi+0x20]
        call public_6285c90
        public_62963d7 : nop
        mov al, byte ptr ds : [esi+0x54]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6296250)
    }
}

#undef public_6296290
#undef public_6296292
#undef public_62962d7
#undef public_62962f9
#undef public_62962fb
#undef public_6296352
#undef public_6296367
#undef public_6296369
#undef public_6296394
#undef public_62963ac
#undef public_62963af
#undef public_62963bc
#undef public_62963cf
#undef public_62963d7
