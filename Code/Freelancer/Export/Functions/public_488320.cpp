#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_488320);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59d8c0);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc211);

PROC_DECLARE(0x488320, internal_488320, public_488320);
extern "C" NAKED register_t __cdecl internal_488320()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc211 @0x488322*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc211
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x32C]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_5d22e4
        mov dword ptr ds : [esi+0x7C], offset public_5d22d8
        mov dword ptr ds : [edi], offset public_5d22d0
        mov edx, dword ptr ds : [public_67dccc]
        dec edx
        push 0
        mov dword ptr ss : [esp+0x1C], 1
        mov dword ptr ds : [public_67dccc], edx
        call public_59d8c0
        add esp, 4
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 0
        call public_576010
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x488320)
    }
}
