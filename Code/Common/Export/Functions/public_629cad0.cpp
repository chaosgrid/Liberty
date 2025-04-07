#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b540);
CLANG_FORWARD_PROC_SYMBOL(public_629b010);

#define public_629cb0c _public_629cb0c
#define public_629cb20 _public_629cb20
#define public_629cb44 _public_629cb44

PROC_DECLARE(0x629cad0, internal_629cad0, public_629cad0);
extern "C" NAKED register_t __cdecl internal_629cad0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x4C]
        cmp al, bl
        push edi
        lea edi, ds:[esi+0x4C]
        je public_629cb44
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_629cb20
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_629cb0c
        mov edx, dword ptr ds : [eax+8]
        test bl, bl
        sete cl
        push ecx
        push edx
        call public_628b540
        add esp, 8
        public_629cb0c : nop
        push edi
        push 0x11
        mov ecx, esi
        mov byte ptr ds : [edi], bl
        call public_629b010
        mov al, byte ptr ds : [edi]
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_629cb20 : nop
        push offset public_639d660 @0x629cb20*/
  FIXUP public_629cb20 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d660
        push 0x195
/*FIXUP push offset public_639d634 @0x629cb2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d634
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x629cb34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_629cb44 : nop
        mov al, byte ptr ds : [edi]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629cad0)
    }
}

#undef public_629cb0c
#undef public_629cb20
#undef public_629cb44
