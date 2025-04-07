#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f714d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafea9);

PROC_DECLARE(0x6f714d0, internal_6f714d0, public_6f714d0);
extern "C" NAKED register_t __cdecl internal_6f714d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafea9 @0x6f714d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafea9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ds : [public_6fcf254]
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call dword ptr ds : [public_6fb3258]
        lea edi, ds:[esi+0x10]
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [public_6fb3254]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [edi], offset public_6fbbe58
        mov dword ptr ds : [esi+0x38], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+0x20], 0
        mov byte ptr ds : [esi+0x24], 1
        mov dword ptr ds : [esi+0x28], 0x3F800000
        mov dword ptr ds : [esi+0x40], edx
        mov dword ptr ds : [esi], offset public_6fbbe2c
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6f714d0)
    }
}
