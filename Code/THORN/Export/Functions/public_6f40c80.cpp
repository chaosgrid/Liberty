#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f403e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40900);
CLANG_FORWARD_PROC_SYMBOL(public_6f40ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f40de0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40f90);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58fc2);

PROC_DECLARE(0x6f40c80, internal_6f40c80, public_6f40c80);
extern "C" NAKED register_t __cdecl internal_6f40c80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58fc2 @0x6f40c82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58fc2
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
        xor eax, eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ds : [esi+0xCC], eax
        mov dword ptr ds : [esi+0xD0], eax
        mov dword ptr ds : [esi+0xD4], eax
        lea edi, ds:[esi+0xC8]
        push ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 3
        mov dword ptr ds : [esi], offset public_6f5b05c
        mov dword ptr ds : [edi], eax
        call public_6f40de0
        push edi
        mov ecx, esi
        call public_6f40f90
        lea eax, ds:[esi+0x38]
        push eax
        lea edi, ds:[esi+0x84]
        push edi
        mov ecx, esi
        call public_6f40900
        lea ecx, ds:[esi+0x44]
        push ecx
        push edi
        mov ecx, esi
        call public_6f40ab0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f40c80)
    }
}
