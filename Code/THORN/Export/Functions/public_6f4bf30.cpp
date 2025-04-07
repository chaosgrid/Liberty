#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4bf30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fd90);

PROC_DECLARE(0x6f4bf30, internal_6f4bf30, public_6f4bf30);
extern "C" NAKED register_t __cdecl internal_6f4bf30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x30]
        mov edx, dword ptr ds : [eax+0x2C]
        push 0x3E8
/*FIXUP push offset public_6f604f8 @0x6f4bf40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f604f8
        push 0xC
        push 1
        push ecx
        push edx
        call public_6f4fd90
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x2C], eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x30]
        lea edx, ds:[eax+0xC]
        mov eax, dword ptr ds : [eax+0x2C]
        lea ecx, ds:[ecx+ecx*2]
        lea ecx, ds:[eax+ecx*4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x30]
        add esp, 0x18
        inc ecx
        mov dword ptr ds : [eax+0x30], ecx
        ret 
        UNREACHABLE_TRAP(0x6f4bf30)
    }
}
