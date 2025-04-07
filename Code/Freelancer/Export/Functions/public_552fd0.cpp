#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_420dd0);
CLANG_FORWARD_PROC_SYMBOL(public_420fd0);
CLANG_FORWARD_PROC_SYMBOL(public_421070);
CLANG_FORWARD_PROC_SYMBOL(public_552fd0);

#define public_553023 _public_553023
#define public_55304f _public_55304f

PROC_DECLARE(0x552fd0, internal_552fd0, public_552fd0);
extern "C" NAKED register_t __cdecl internal_552fd0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        call public_420d60
        test al, al
        jne public_55304f
        mov eax, dword ptr ds : [esi+0x10]
        push 0
        push eax
        mov ecx, esi
        call public_420dd0
        test al, al
        je public_553023
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        lea edx, ss:[esp+8]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x88]
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call public_420fd0
        mov ecx, esi
        call public_421070
        public_553023 : nop
        mov ecx, esi
        call public_420d60
        test al, al
        jne public_55304f
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x35
/*FIXUP push offset public_5e0e64 @0x55303a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0e64
        mov eax, 0x100001
/*FIXUP push offset public_5e0e30 @0x553044*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0e30
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_55304f : nop
        mov ecx, esi
        call public_420d60
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x552fd0)
    }
}

#undef public_553023
#undef public_55304f
