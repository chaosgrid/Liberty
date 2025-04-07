#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312940);

PROC_DECLARE(0x6312940, internal_6312940, public_6312940);
extern "C" NAKED register_t __cdecl internal_6312940()
{
    __asm
    {
        mov dl, byte ptr ss : [esp+4]
        test dl, dl
        mov edx, dword ptr ds : [ecx+8]
        setne al
        mov byte ptr ds : [edx], al
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+0xC]
        inc eax
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [ecx+0x10]
        dec edx
        inc eax
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ds : [ecx+0x10], eax
        ret 4
        UNREACHABLE_TRAP(0x6312940)
    }
}
