#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fd90);

PROC_DECLARE(0x6f4e0d0, internal_6f4e0d0, public_6f4e0d0);
extern "C" NAKED register_t __cdecl internal_6f4e0d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x68]
        dec ecx
        push 0x7FFFFFFD
        mov dword ptr ds : [eax+0x68], ecx
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x68]
        mov edx, dword ptr ds : [eax+0x64]
/*FIXUP push offset public_6f6078c @0x6f4e0ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6078c
        push 0x120
        push 1
        neg ecx
        push ecx
        push edx
        call public_6f4fd90
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x64], eax
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx+0x68]
        push eax
        call public_6f4e0a0
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [ecx+0x68]
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f4e0d0)
    }
}
