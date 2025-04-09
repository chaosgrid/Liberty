#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446ef0);
CLANG_FORWARD_PROC_SYMBOL(public_447120);
CLANG_FORWARD_PROC_SYMBOL(public_457d60);
CLANG_FORWARD_PROC_SYMBOL(public_457e20);
CLANG_FORWARD_PROC_SYMBOL(public_5593d0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9983);

PROC_DECLARE(0x446ef0, internal_446ef0, public_446ef0);
extern "C" NAKED register_t __cdecl internal_446ef0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9983 @0x446ef2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9983
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x10], esi
        call public_5593d0
        lea edi, ds:[esi+0x74]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], ebx
        call public_457d60
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 1
        mov dword ptr ds : [esi], offset public_5cbdf0
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov byte ptr ds : [esi+0x68], bl
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], 0xFFFFFFFF
        call public_457e20
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        call public_447120
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x446ef0)
    }
}
