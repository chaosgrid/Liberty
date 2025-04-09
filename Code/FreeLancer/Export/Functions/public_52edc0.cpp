#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_52edc0);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0588);

#define public_52edf3 _public_52edf3
#define public_52ee03 _public_52ee03
#define public_52ee12 _public_52ee12

PROC_DECLARE(0x52edc0, internal_52edc0, public_52edc0);
extern "C" NAKED register_t __cdecl internal_52edc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0588 @0x52edc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0588
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov ecx, dword ptr ds : [esi+0x18]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_52edf3
        call public_4f7a90
        mov dword ptr ds : [esi+0x18], edi
        public_52edf3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_52ee03
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x14], edi
        public_52ee03 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        cmp ecx, edi
        je public_52ee12
        call public_537ad0
        mov dword ptr ds : [esi+0x1C], edi
        public_52ee12 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_531af0
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x52edc0)
    }
}

#undef public_52edf3
#undef public_52ee03
#undef public_52ee12
