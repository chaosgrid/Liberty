#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_454390);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9ef8);

PROC_DECLARE(0x454390, internal_454390, public_454390);
extern "C" NAKED register_t __cdecl internal_454390()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9ef8 @0x454398*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9ef8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x5C]
        push edi
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x5C]
        push eax
        push ecx
        mov ecx, ebx
        call public_44fbe0
        mov dword ptr ds : [ebx], offset public_5cdfec
        mov dword ptr ds : [ebx+4], offset public_5cdfb8
        mov dword ptr ds : [ebx+8], offset public_5cdf9c
        mov dword ptr ds : [ebx+0xC], offset public_5cdf7c
        mov dword ptr ds : [ebx+0x10], offset public_5cdf44
        mov dword ptr ds : [ebx+0x14], offset public_5cdf1c
        mov dword ptr ds : [ebx+0x18], offset public_5cdef8
        mov dword ptr ds : [ebx+0x1C], offset public_5cdec0
        mov dword ptr ds : [ebx+0x20], offset public_5cdea8
        add esi, 0x44
        mov ecx, 0xF
        lea edi, ss:[esp+0xC]
        rep movsd
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[ebx+0x6C]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        mov dword ptr ds : [edx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 0xC
        UNREACHABLE_TRAP(0x454390)
    }
}
