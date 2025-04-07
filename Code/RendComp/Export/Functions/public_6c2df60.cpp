#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2df60);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e780);

PROC_DECLARE(0x6c2df60, internal_6c2df60, public_6c2df60);
extern "C" NAKED register_t __cdecl internal_6c2df60()
{
    __asm
    {
        fild dword ptr ss : [esp+8]
        xor eax, eax
        push esi
        mov esi, ecx
        fmul qword ptr ds : [public_6c36490]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        fstp dword ptr ds : [esi+0x30]
        xor ecx, ecx
        lea edx, ds:[esi+0xC]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], ecx
        lea edx, ds:[esi+0x18]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0x34], eax
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov dword ptr ds : [esi+0x2C], 1
        call dword ptr ds : [public_6c36080]
        push eax
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6c36008]
        push esi
        mov dword ptr ds : [esi], eax
        call public_6c2e780
        mov ecx, dword ptr ds : [esi+0x30]
        push 0x610
        push ecx
/*FIXUP push offset public_6c375d0 @0x6c2dfc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c375d0
        call dword ptr ds : [public_6c3600c]
        add esp, 0x18
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c2df60)
    }
}
