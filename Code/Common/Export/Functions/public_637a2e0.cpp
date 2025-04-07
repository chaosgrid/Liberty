#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637a2e0);
CLANG_FORWARD_JUMP_SYMBOL(public_63989ab);

PROC_DECLARE(0x637a2e0, internal_637a2e0, public_637a2e0);
extern "C" NAKED register_t __cdecl internal_637a2e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63989ab @0x637a2e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63989ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        mov edx, ecx
        xor eax, eax
        push edi
        mov word ptr ds : [edx+4], ax
        mov word ptr ds : [edx+6], ax
        mov dword ptr ds : [edx+8], eax
        mov word ptr ds : [edx+0xC], ax
        mov word ptr ds : [edx+0xE], ax
        mov dword ptr ds : [edx+0x10], eax
        mov ecx, 0xC
        mov edi, edx
        rep stosd
        mov ecx, dword ptr ss : [esp+4]
        mov eax, edx
        mov dword ptr fs : [0], ecx
        pop edi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x637a2e0)
    }
}
