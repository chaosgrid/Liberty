#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb4680);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa1bc);

PROC_DECLARE(0x6eb4680, internal_6eb4680, public_6eb4680);
extern "C" NAKED register_t __cdecl internal_6eb4680()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa1bc @0x6eb4682*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa1bc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        lea edi, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x18], edi
        mov ebx, dword ptr ds : [public_6fb3068]
        lea ebp, ds:[edi+0xC]
        mov ecx, ebp
        mov byte ptr ss : [esp+0x24], 3
        call ebx
        lea ecx, ds:[edi+0x24]
        mov dword ptr ss : [esp+0x10], ecx
        call ebx
        add edi, 0x3C
        mov ecx, edi
        call ebx
        mov ecx, edi
        mov edi, dword ptr ds : [public_6fb3034]
        mov byte ptr ss : [esp+0x24], 2
        call edi
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x24], 1
        call edi
        mov ecx, ebp
        mov byte ptr ss : [esp+0x24], 0
        call edi
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6eb4680)
    }
}
