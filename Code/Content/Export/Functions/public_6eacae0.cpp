#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eacae0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9dae);

PROC_DECLARE(0x6eacae0, internal_6eacae0, public_6eacae0);
extern "C" NAKED register_t __cdecl internal_6eacae0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9dae @0x6eacae2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9dae
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
        mov ebx, dword ptr ds : [public_6fb3068]
        lea edi, ds:[esi+0x228]
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        call ebx
        add esi, 0x240
        mov ecx, esi
        call ebx
        mov ecx, esi
        mov esi, dword ptr ds : [public_6fb3034]
        mov byte ptr ss : [esp+0x18], 0
        call esi
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call esi
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eacae0)
    }
}
