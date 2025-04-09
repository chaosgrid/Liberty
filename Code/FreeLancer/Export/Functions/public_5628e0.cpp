#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5628e0);

PROC_DECLARE(0x5628e0, internal_5628e0, public_5628e0);
extern "C" NAKED register_t __cdecl internal_5628e0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dl, 1
        push esi
        mov dword ptr ds : [eax], offset public_5e20a8
        mov byte ptr ds : [eax+4], cl
        mov byte ptr ds : [eax+5], cl
        mov byte ptr ds : [eax+6], cl
        mov byte ptr ds : [eax+7], cl
        mov byte ptr ds : [eax+8], cl
        mov byte ptr ds : [eax+9], cl
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], 0x3E8
        mov byte ptr ds : [eax+0x14], dl
        mov esi, dword ptr ds : [public_67ecb8]
        mov dword ptr ds : [eax+0x18], esi
        mov esi, dword ptr ds : [public_67ecb8]
        mov dword ptr ds : [eax+0x1C], esi
        mov byte ptr ds : [eax+0x20], dl
        mov byte ptr ds : [eax+0x21], cl
        mov byte ptr ds : [eax+0x22], dl
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5628e0)
    }
}
