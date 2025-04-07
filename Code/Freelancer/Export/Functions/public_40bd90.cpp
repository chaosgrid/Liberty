#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4068d0);
CLANG_FORWARD_PROC_SYMBOL(public_40bd90);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8538);

PROC_DECLARE(0x40bd90, internal_40bd90, public_40bd90);
extern "C" NAKED register_t __cdecl internal_40bd90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8538 @0x40bd92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8538
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
        call public_4068d0
        mov edi, dword ptr ds : [public_5c6030]
        lea ecx, ds:[esi+0x54]
        mov dword ptr ss : [esp+0x14], 0
        call edi
        lea ecx, ds:[esi+0x58]
        call edi
        lea ecx, ds:[esi+0x5C]
        call edi
        lea ecx, ds:[esi+0x60]
        call edi
        lea ecx, ds:[esi+0x64]
        call edi
        lea ecx, ds:[esi+0x68]
        call edi
        lea ecx, ds:[esi+0x6C]
        call edi
        lea ecx, ds:[esi+0x70]
        call edi
        lea ecx, ds:[esi+0x74]
        call edi
        lea ecx, ds:[esi+0x78]
        call edi
        lea ecx, ds:[esi+0x7C]
        call edi
        lea ecx, ds:[esi+0x80]
        call edi
        lea ecx, ds:[esi+0x84]
        call edi
        lea ecx, ds:[esi+0x88]
        call edi
        lea ecx, ds:[esi+0x8C]
        call edi
        lea ecx, ds:[esi+0x90]
        call edi
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x94], eax
        mov dword ptr ds : [esi+0x9C], eax
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi], offset public_5c8074
        mov dword ptr ds : [esi+0xA4], 0x43960000
        mov dword ptr ds : [esi+0xA0], 0x44160000
        mov dword ptr ds : [esi+0xA8], 0x41C80000
        mov dword ptr ds : [esi+0xAC], 0x42480000
        mov dword ptr ds : [esi+0xB0], 0
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40bd90)
    }
}
