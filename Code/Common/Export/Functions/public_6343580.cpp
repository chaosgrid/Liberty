#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343580);
CLANG_FORWARD_PROC_SYMBOL(public_6348f50);

PROC_DECLARE(0x6343580, internal_6343580, public_6343580);
extern "C" NAKED register_t __cdecl internal_6343580()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x64], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x68], eax
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax]
        mov eax, edx
        mov dword ptr ds : [ecx+0xA4], eax
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ds : [ecx+0x9C]
        mov dword ptr ss : [esp+0xC], edx
        fstp dword ptr ds : [ecx+0xA0]
        mov edx, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edx
        fld dword ptr ds : [eax]
        mov eax, edx
        fstp dword ptr ds : [ecx+0xAC]
        mov dword ptr ds : [ecx+0xB4], eax
        fstp dword ptr ds : [ecx+0xB0]
        mov edx, dword ptr ds : [ecx+0x5C]
        mov eax, dword ptr ds : [ecx+0x54]
        mov ecx, dword ptr ds : [eax+0x90]
        push edx
        call public_6348f50
        ret 0xC
        UNREACHABLE_TRAP(0x6343580)
    }
}
