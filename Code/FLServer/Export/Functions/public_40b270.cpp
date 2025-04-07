#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401440);
CLANG_FORWARD_PROC_SYMBOL(public_40b270);
CLANG_FORWARD_PROC_SYMBOL(public_415c60);
CLANG_FORWARD_PROC_SYMBOL(public_418d14);
CLANG_FORWARD_JUMP_SYMBOL(public_419f56);

PROC_DECLARE(0x40b270, internal_40b270, public_40b270);
extern "C" NAKED register_t __cdecl internal_40b270()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419f56 @0x40b272*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419f56
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        push ebx
        mov dword ptr ss : [esp+0x10], esi
        call public_418d14
        lea ecx, ds:[esi+0xCC]
        mov dword ptr ss : [esp+0x18], ebx
        call public_401440
        push ebx
        lea ecx, ds:[esi+0xBAC]
        mov byte ptr ss : [esp+0x1C], 1
        mov dword ptr ds : [esi+0xB7C], ebx
        call public_415c60
        mov dword ptr ds : [esi+0xB9C], ebx
        mov dword ptr ds : [esi], offset public_41d038
        mov dword ptr ds : [public_427828], esi
        xor eax, eax
        lea edi, ds:[esi+0xA7C]
        mov ecx, 0x40
        rep stosd
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0xBA0], ebx
        mov dword ptr ds : [esi+0xBA4], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40b270)
    }
}
