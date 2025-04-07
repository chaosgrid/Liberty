#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f72380);
CLANG_FORWARD_PROC_SYMBOL(public_6f724f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb00e8);

#define public_6f72566 _public_6f72566
#define public_6f72584 _public_6f72584

PROC_DECLARE(0x6f724f0, internal_6f724f0, public_6f724f0);
extern "C" NAKED register_t __cdecl internal_6f724f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb00e8 @0x6f724f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb00e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov al, byte ptr ss : [esp+0x38]
        push esi
        push edi
        xor edi, edi
        mov byte ptr ss : [esp+8], al
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], edi
        mov eax, dword ptr ss : [esp+0x40]
        lea edx, ss:[esp+8]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push edx
        push eax
        mov dword ptr ss : [esp+0x40], edi
        call public_6f72380
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        je public_6f72566
        mov esi, dword ptr ss : [esp+0x10]
        sub esi, eax
        sar esi, 2
        cmp esi, edi
        jne public_6f72584
        public_6f72566 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        pop edi
        xor eax, eax
        pop esi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0x1C
        public_6f72584 : nop
        call dword ptr ds : [public_6fb3370]
        imul eax, esi
        mov ecx, dword ptr ss : [esp+0xC]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov esi, dword ptr ds : [ecx+eax*4]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 0x1C
        UNREACHABLE_TRAP(0x6f724f0)
    }
}

#undef public_6f72566
#undef public_6f72584
