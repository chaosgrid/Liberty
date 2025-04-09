#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b5a0);
CLANG_FORWARD_PROC_SYMBOL(public_57bfa0);
CLANG_FORWARD_PROC_SYMBOL(public_57bff0);
CLANG_FORWARD_PROC_SYMBOL(public_57c0e0);

#define public_59a472 _public_59a472

PROC_DECLARE(0x59a410, internal_59a410, public_59a410);
extern "C" NAKED register_t __cdecl internal_59a410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push 0
        push eax
        mov esi, ecx
        call public_57b5a0
        mov ecx, esi
        mov bl, al
        call public_57bff0
        push 0
/*FIXUP push offset public_5e57ec @0x59a42b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e57ec
        mov ecx, esi
        call public_57c0e0
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_59a472
        fld dword ptr ds : [eax]
        push edi
        fst dword ptr ds : [esi+0x530]
        mov ecx, esi
        fstp dword ptr ds : [esi+0x330]
        fld dword ptr ds : [eax+4]
        fst dword ptr ds : [esi+0x534]
        fstp dword ptr ds : [esi+0x334]
        mov edi, dword ptr ds : [eax+8]
        call public_57bff0
        push 0
        push edi
        mov ecx, esi
        call public_57c0e0
        pop edi
        public_59a472 : nop
        push 0
        mov ecx, esi
        call public_57bfa0
        pop esi
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x59a410)
    }
}

#undef public_59a472
