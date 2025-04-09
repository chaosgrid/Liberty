#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4068d0);
CLANG_FORWARD_PROC_SYMBOL(public_408f20);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8538);

PROC_DECLARE(0x408f20, internal_408f20, public_408f20);
extern "C" NAKED register_t __cdecl internal_408f20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8538 @0x408f22*/
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
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_4068d0
        mov edi, dword ptr ds : [public_5c6030]
        xor ebx, ebx
        lea ecx, ds:[esi+0x60]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x58], 0x168
        mov dword ptr ds : [esi+0x5C], ebx
        call edi
        lea ecx, ds:[esi+0x74]
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        call edi
        lea ecx, ds:[esi+0x78]
        call edi
        lea ecx, ds:[esi+0x84]
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x80], ebx
        call edi
        lea ecx, ds:[esi+0x88]
        call edi
        lea ecx, ds:[esi+0x8C]
        call edi
        lea ecx, ds:[esi+0x90]
        call edi
        lea ecx, ds:[esi+0x94]
        call edi
        lea ecx, ds:[esi+0x98]
        call edi
        lea ecx, ds:[esi+0x9C]
        call edi
        lea ecx, ds:[esi+0xA0]
        call edi
        lea ecx, ds:[esi+0xA4]
        call edi
        lea ecx, ds:[esi+0xA8]
        call edi
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi], offset public_5c7ac4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x408f20)
    }
}
