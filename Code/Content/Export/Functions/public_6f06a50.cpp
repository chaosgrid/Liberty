#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f27940);
CLANG_FORWARD_PROC_SYMBOL(public_6f57740);
CLANG_FORWARD_PROC_SYMBOL(public_6f577d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c00);
CLANG_FORWARD_JUMP_SYMBOL(public_6face98);

#define public_6f06b03 _public_6f06b03

PROC_DECLARE(0x6f06a50, internal_6f06a50, public_6f06a50);
extern "C" NAKED register_t __cdecl internal_6f06a50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6face98 @0x6f06a52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6face98
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        push edi
        mov esi, ecx
        mov dword ptr ss : [esp+8], 0
        lea eax, ss:[esp+8]
        push eax
        push 1
        mov dword ptr ss : [esp+0x24], 0
        call public_6f24870
        mov edi, dword ptr ss : [esp+0x10]
        call dword ptr ds : [public_6fb3370]
        imul eax, 0xB
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        add eax, 0x14
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 0
        add esp, 4
        mov ecx, edi
        fild qword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call public_6f27940
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x114], 1
        mov ecx, dword ptr ds : [esi+8]
        call public_6f57740
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        call public_6f577d0
        mov ecx, dword ptr ds : [esi+8]
        call public_6f57c00
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        pop edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        pop esi
        je public_6f06b03
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_6f06b03 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f06a50)
    }
}

#undef public_6f06b03
