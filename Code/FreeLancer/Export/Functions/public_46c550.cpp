#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_464dc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb8cb);

#define public_46c592 _public_46c592
#define public_46c594 _public_46c594
#define public_46c5d4 _public_46c5d4

PROC_DECLARE(0x46c550, internal_46c550, public_46c550);
extern "C" NAKED register_t __cdecl internal_46c550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb8cb @0x46c552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb8cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x3D0
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_46c592
        mov ecx, eax
        call public_464dc0
        mov esi, eax
        jmp public_46c594
        public_46c592 : nop
        xor esi, esi
        public_46c594 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        add edi, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_46c5d4
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        xor eax, eax
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_46c5d4 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x46c550)
    }
}

#undef public_46c592
#undef public_46c594
#undef public_46c5d4
