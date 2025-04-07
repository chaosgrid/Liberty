#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4ff360);
CLANG_FORWARD_PROC_SYMBOL(public_503ea0);
CLANG_FORWARD_PROC_SYMBOL(public_503f40);

#define public_503f08 _public_503f08
#define public_503f32 _public_503f32
#define public_503f37 _public_503f37

PROC_DECLARE(0x503ea0, internal_503ea0, public_503ea0);
extern "C" NAKED register_t __cdecl internal_503ea0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        je public_503f37
        push edi
        push 1
        call public_4ff360
        lea edi, ds:[esi+0x18]
        mov ecx, edi
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_503f08
        lea eax, ds:[esi+0x38]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ds:[esi+0xA8]
        push edx
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674fcc
        call public_503f40
        test al, al
        jne public_503f32
        public_503f08 : nop
        push ebx
        mov ecx, edi
        mov ebx, 0x100002
        call dword ptr ds : [public_5c6044]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x246
/*FIXUP push offset public_5da80c @0x503f21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
/*FIXUP push offset public_5daba4 @0x503f26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5daba4
        push ebx
        call dword ptr ds : [eax]
        add esp, 0x14
        pop ebx
        public_503f32 : nop
        mov byte ptr ds : [esi+0x6D], 0
        pop edi
        public_503f37 : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x503ea0)
    }
}

#undef public_503f08
#undef public_503f32
#undef public_503f37
