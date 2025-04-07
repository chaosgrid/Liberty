#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f883e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0dff);

PROC_DECLARE(0x6f883e0, internal_6f883e0, public_6f883e0);
extern "C" NAKED register_t __cdecl internal_6f883e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0dff @0x6f883e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0dff
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi-4], offset public_6fbc908
        mov dword ptr ds : [esi], offset public_6fbc8fc
        mov dword ptr ds : [esi+0x84], offset public_6fbc700
        mov eax, dword ptr ds : [esi+0xA8]
        push eax
        mov dword ptr ss : [esp+0x1C], 2
        call public_6fa8fe0
        mov edi, dword ptr ds : [public_6fb3034]
        xor ebx, ebx
        add esp, 4
        lea ecx, ds:[esi+0x88]
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        call edi
        mov dword ptr ds : [esi+0x54], offset public_6fbc700
        mov eax, dword ptr ds : [esi+0x78]
        push eax
        mov byte ptr ss : [esp+0x1C], 1
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[esi+0x58]
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x80], ebx
        call edi
        lea ecx, ds:[esi+0x38]
        mov byte ptr ss : [esp+0x18], bl
        call edi
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi-4]
        neg eax
        sbb eax, eax
        pop edi
        and eax, esi
        pop esi
        mov dword ptr ds : [eax], offset public_6fb43f8
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f883e0)
    }
}
