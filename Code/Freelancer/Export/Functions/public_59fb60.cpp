#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_59fb60);
CLANG_FORWARD_PROC_SYMBOL(public_5b8058);

#define public_59fb76 _public_59fb76
#define public_59fba3 _public_59fba3
#define public_59fbb3 _public_59fbb3
#define public_59fbc1 _public_59fbc1

PROC_DECLARE(0x59fb60, internal_59fb60, public_59fb60);
extern "C" NAKED register_t __cdecl internal_59fb60()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        lea ecx, ds:[edi+0x80]
        call public_59eee0
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        je public_59fba3
        public_59fb76 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        push 0
/*FIXUP push offset public_610ddc @0x59fb7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610ddc
/*FIXUP push offset public_610dc8 @0x59fb84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610dc8
        push 0
        push esi
        call public_5b8058
        mov edx, dword ptr ds : [esi]
        add esp, 0x14
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        jne public_59fb76
        public_59fba3 : nop
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [edi+0xC]
        and cl, 0xFC
        test esi, esi
        mov byte ptr ds : [edi+0x6C], cl
        je public_59fbc1
        public_59fbb3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_59fbb3
        public_59fbc1 : nop
        push edi
        call public_59dc00
        add esp, 4
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x59fb60)
    }
}

#undef public_59fb76
#undef public_59fba3
#undef public_59fbb3
#undef public_59fbc1
