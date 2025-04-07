#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c5b0);

PROC_DECLARE(0x632c5b0, internal_632c5b0, public_632c5b0);
extern "C" NAKED register_t __cdecl internal_632c5b0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx]
        xor ecx, ecx
        mov byte ptr ds : [eax], dl
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        ret 4
        UNREACHABLE_TRAP(0x632c5b0)
    }
}
