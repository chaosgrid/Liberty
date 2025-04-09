#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b580);
CLANG_FORWARD_PROC_SYMBOL(public_579860);
CLANG_FORWARD_PROC_SYMBOL(public_5799f0);
CLANG_FORWARD_PROC_SYMBOL(public_579a60);
CLANG_FORWARD_PROC_SYMBOL(public_579cc0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_46b601 _public_46b601
#define public_46b647 _public_46b647

PROC_DECLARE(0x46b580, internal_46b580, public_46b580);
extern "C" NAKED register_t __cdecl internal_46b580()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66da80]
        sub esp, 0xC
        test eax, eax
        jne public_46b647
        mov eax, dword ptr ds : [public_66da68]
        test eax, eax
        je public_46b647
        push 0
        push 0
/*FIXUP push offset public_5cfaac @0x46b5a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfaac
/*FIXUP push offset public_5cfaac @0x46b5a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfaac
        call public_59db20
        add esp, 0x10
        test eax, eax
        mov dword ptr ds : [public_66da80], eax
        je public_46b601
        fld dword ptr ds : [public_5ceec4]
        lea ecx, ss:[esp]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [public_5ceec8]
        mov dword ptr ss : [esp+8], 0xBF800000
        fstp dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [public_5ceec0]
        mov eax, dword ptr ds : [public_5ceebc]
        mov ecx, dword ptr ds : [public_66da80]
        push edx
        push eax
        call public_579cc0
        mov eax, dword ptr ds : [public_66da80]
        public_46b601 : nop
        mov ecx, dword ptr ds : [public_66da68]
        mov dword ptr ds : [eax+0x498], ecx
        mov dword ptr ds : [eax+0x49C], 0
        mov eax, dword ptr ds : [public_66da80]
        or byte ptr ds : [eax+0x6C], 3
        mov ecx, dword ptr ds : [public_66da80]
        push 0
        call public_579860
        mov ecx, dword ptr ds : [public_66da80]
        push 3
        call public_579a60
        mov ecx, dword ptr ds : [public_66da80]
        push 0
        call public_5799f0
        public_46b647 : nop
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x46b580)
    }
}

#undef public_46b601
#undef public_46b647
