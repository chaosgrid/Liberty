#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6804e40);
CLANG_FORWARD_PROC_SYMBOL(public_6804e70);
CLANG_FORWARD_PROC_SYMBOL(public_6806550);

PROC_DECLARE(0x6804e70, internal_6804e70, public_6804e70);
extern "C" NAKED register_t __cdecl internal_6804e70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x68]
        dec ecx
        push 0x7FFFFFFD
        mov dword ptr ds : [eax+0x68], ecx
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x68]
        mov edx, dword ptr ds : [eax+0x64]
/*FIXUP push offset public_680d708 @0x6804e8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d708
        push 0x120
        push 1
        neg ecx
        push ecx
        push edx
        call public_6806550
        mov ecx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [ecx+0x64], eax
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx+0x68]
        push eax
        call public_6804e40
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [ecx+0x68]
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6804e70)
    }
}
