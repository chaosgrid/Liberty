#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10004cd0);

PROC_DECLARE(0x10004cd0, internal_10004cd0, public_10004cd0);
extern "C" NAKED register_t __cdecl internal_10004cd0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [eax+0x28]
        mov ecx, edx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [eax+0x28]
        pop edi
        add ecx, edx
        pop esi
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x30], ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x10004cd0)
    }
}
