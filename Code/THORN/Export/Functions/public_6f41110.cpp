#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f403e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41110);
CLANG_FORWARD_PROC_SYMBOL(public_6f412f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41490);
CLANG_FORWARD_PROC_SYMBOL(public_6f414d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41540);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59032);

PROC_DECLARE(0x6f41110, internal_6f41110, public_6f41110);
extern "C" NAKED register_t __cdecl internal_6f41110()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59032 @0x6f41112*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59032
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov esi, ecx
        push ebx
        mov dword ptr ss : [esp+0x10], esi
        call public_6f403e0
        mov al, byte ptr ss : [esp+0x20]
        xor edi, edi
        push 0xC
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ds : [esi+0x84], al
        call public_6f57e9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x88], eax
        mov dword ptr ds : [esi+0x8C], edi
        mov dword ptr ds : [esi+0xE4], edi
        mov dword ptr ds : [esi+0xE8], edi
        lea edi, ds:[esi+0xD4]
        push ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 3
        mov dword ptr ds : [esi], offset public_6f5b084
        mov dword ptr ds : [edi], 0x42700000
        mov dword ptr ds : [esi+0xD8], 0x3DCCCCCD
        mov dword ptr ds : [esi+0xDC], 0x47C35000
        mov dword ptr ds : [esi+0xE0], 0x3FAAAAAB
        call public_6f412f0
        push edi
        mov ecx, esi
        call public_6f41540
        lea ecx, ds:[esi+0x38]
        push ecx
        mov ecx, esi
        call public_6f41490
        lea edx, ds:[esi+0x44]
        push edx
        mov ecx, esi
        call public_6f414d0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f41110)
    }
}
