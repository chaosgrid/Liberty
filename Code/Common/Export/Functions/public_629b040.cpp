#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b040);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

PROC_DECLARE(0x629b040, internal_629b040, public_629b040);
extern "C" NAKED register_t __cdecl internal_629b040()
{
    __asm
    {
        push esi
        mov byte ptr ds : [public_63fc198], 0
        mov esi, dword ptr ds : [ecx+4]
        push edi
        mov di, word ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        add ecx, 8
        add esi, 0xB0
        call public_6333e60
        mov ecx, dword ptr ds : [esi]
        push eax
        xor eax, eax
        mov ax, di
        push eax
        push ecx
/*FIXUP push offset public_639d4d0 @0x629b06b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d4d0
/*FIXUP push offset public_63fc198 @0x629b070*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fc198
        call dword ptr ds : [public_639931c]
        add esp, 0x14
        pop edi
        mov eax, offset public_63fc198
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629b040)
    }
}
