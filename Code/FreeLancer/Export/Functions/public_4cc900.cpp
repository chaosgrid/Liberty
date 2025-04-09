#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c9a80);
CLANG_FORWARD_PROC_SYMBOL(public_4cc900);

#define public_4cc943 _public_4cc943

PROC_DECLARE(0x4cc900, internal_4cc900, public_4cc900);
extern "C" NAKED register_t __cdecl internal_4cc900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6748f8]
        test eax, eax
        push esi
        je public_4cc943
        mov esi, dword ptr ss : [esp+8]
        push esi
        mov ecx, offset public_6735b4
        call public_4c9a80
        test eax, eax
        jne public_4cc943
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        push 0x119
/*FIXUP push offset public_5d7220 @0x4cc929*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
        mov eax, 0x100002
/*FIXUP push offset public_5d71ec @0x4cc933*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d71ec
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x18
        public_4cc943 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4cc900)
    }
}

#undef public_4cc943
