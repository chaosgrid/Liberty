#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c140);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c990);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e510);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e970);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fd10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

PROC_DECLARE(0x6f4c140, internal_6f4c140, public_6f4c140);
extern "C" NAKED register_t __cdecl internal_6f4c140()
{
    __asm
    {
        push esi
        call public_6f4f3b0
        mov esi, eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x74], 0x7FFFFFFD
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0x50]
        push edx
        call public_6f4e970
        push esi
        call public_6f4e9a0
/*FIXUP push offset public_6f60a08 @0x6f4c169*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60a08
        call public_6f4c990
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x50]
        push ecx
        call public_6f4e510
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx+0x40]
        push eax
        call public_6f4fca0
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0x48]
        push edx
        call public_6f4fd10
        push esi
        call public_6f4f2b0
        call public_6f4f410
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+4]
        push 0
        push ecx
        call public_6f4fe10
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx+0x64]
        push 0
        push eax
        call public_6f4fe10
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0x6C]
        push 0
        push edx
        call public_6f4fe10
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x1C]
        push 0
        push ecx
        call public_6f4fe10
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx+0x2C]
        push 0
        push eax
        call public_6f4fe10
        mov ecx, dword ptr ds : [public_6f61e28]
        add esp, 0x44
        push 0
        push ecx
        call public_6f4fe10
        add esp, 8
        mov dword ptr ds : [public_6f61e28], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4c140)
    }
}
