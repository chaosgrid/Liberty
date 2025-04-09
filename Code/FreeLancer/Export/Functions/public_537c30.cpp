#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537c30);
CLANG_FORWARD_PROC_SYMBOL(public_537d20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_537c81 _public_537c81
#define public_537ca0 _public_537ca0
#define public_537cb2 _public_537cb2
#define public_537cbe _public_537cbe
#define public_537cc4 _public_537cc4
#define public_537d19 _public_537d19

PROC_DECLARE(0x537c30, internal_537c30, public_537c30);
extern "C" NAKED register_t __cdecl internal_537c30()
{
    __asm
    {
        sub esp, 0x14
        push esi
        push edi
        xor edi, edi
        mov dword ptr ds : [public_6789a0], 0x30D40
        mov dword ptr ds : [public_678980], edi
        mov dword ptr ds : [public_678984], edi
        mov dword ptr ds : [public_678988], edi
        mov dword ptr ds : [public_67898c], edi
        mov dword ptr ds : [public_678990], edi
        mov dword ptr ds : [public_678994], edi
        mov dword ptr ds : [public_678998], edi
        mov dword ptr ds : [public_67899c], 0x186A0
        xor ecx, ecx
        mov eax, offset public_675578
        mov edx, 0x100
        public_537c81 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, eax
        add eax, 0x14
        dec edx
        jne public_537c81
        mov dword ptr ds : [public_676978], ecx
        xor ecx, ecx
        mov eax, offset public_67697c
        mov edx, 0x100
        lea ecx, ds:[ecx]
        public_537ca0 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, eax
        add eax, 0x20
        dec edx
        jne public_537ca0
        mov dword ptr ds : [public_67897c], ecx
        xor esi, esi
        public_537cb2 : nop
        cmp esi, edi
        je public_537cbe
        mov esi, dword ptr ds : [esi+0xC8]
        jmp public_537cc4
        public_537cbe : nop
        mov esi, dword ptr ds : [public_675570]
        public_537cc4 : nop
        cmp esi, edi
        je public_537d19
        test byte ptr ds : [esi+0xB4], 8
        je public_537cb2
        fld dword ptr ds : [esi+0x98]
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ss : [esp+0xC], esi
        call public_5b7ec0
        fld dword ptr ds : [esi+0xA0]
        mov dword ptr ss : [esp+0x10], eax
        call public_5b7ec0
        fld dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x14], eax
        call public_5b7ec0
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+8]
        push eax
/*FIXUP push offset public_678980 @0x537d08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_678980
        mov ecx, offset public_675578
        call public_537d20
        jmp public_537cb2
        public_537d19 : nop
        pop edi
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x537c30)
    }
}

#undef public_537c81
#undef public_537ca0
#undef public_537cb2
#undef public_537cbe
#undef public_537cc4
#undef public_537d19
