#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46550);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59447);

#define public_6f46588 _public_6f46588
#define public_6f465a5 _public_6f465a5
#define public_6f465ae _public_6f465ae

PROC_DECLARE(0x6f46550, internal_6f46550, public_6f46550);
extern "C" NAKED register_t __cdecl internal_6f46550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59447 @0x6f46552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59447
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_6f5b2cc
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 1
        je public_6f46588
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6f46588 : nop
        mov eax, dword ptr ds : [esi+0xAC]
        test eax, eax
        je public_6f465ae
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f465a5
        cmp cl, 0xFF
        je public_6f465a5
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f465ae
        public_6f465a5 : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f465ae : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0xAC], 0
        mov dword ptr ds : [esi+0xB0], 0
        mov dword ptr ds : [esi+0xB4], 0
        call public_6f439a0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f46550)
    }
}

#undef public_6f46588
#undef public_6f465a5
#undef public_6f465ae
