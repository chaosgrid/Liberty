#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320370);

PROC_DECLARE(0x6320370, internal_6320370, public_6320370);
extern "C" NAKED register_t __cdecl internal_6320370()
{
    __asm
    {
        push ecx
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dl, byte ptr ss : [esp+3]
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov byte ptr ds : [eax+0x1C], cl
        mov byte ptr ds : [eax+0x1D], cl
        mov byte ptr ds : [eax+0x1E], cl
        mov byte ptr ds : [eax+0x1F], cl
        mov byte ptr ds : [eax+0x20], cl
        mov byte ptr ds : [eax+0x21], cl
        mov byte ptr ds : [eax+0x22], cl
        mov byte ptr ds : [eax+0x23], cl
        mov byte ptr ds : [eax+0x24], cl
        mov byte ptr ds : [eax+0x25], cl
        mov byte ptr ds : [eax+0x26], cl
        mov byte ptr ds : [eax+0x27], cl
        mov byte ptr ds : [eax+0x28], cl
        mov byte ptr ds : [eax+0x29], cl
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov byte ptr ds : [eax+0x34], cl
        mov byte ptr ds : [eax+0x35], cl
        mov byte ptr ds : [eax+0x36], cl
        mov byte ptr ds : [eax+0x37], cl
        mov byte ptr ds : [eax+0x38], cl
        mov byte ptr ds : [eax+0x39], cl
        mov byte ptr ds : [eax+0x3A], cl
        mov byte ptr ds : [eax+0x3B], cl
        mov byte ptr ds : [eax+0x3C], cl
        mov byte ptr ds : [eax+0x3D], cl
        mov byte ptr ds : [eax+0x3E], cl
        mov byte ptr ds : [eax+0x3F], cl
        mov byte ptr ds : [eax+0x40], cl
        mov byte ptr ds : [eax+0x41], cl
        mov byte ptr ds : [eax+0x7C], dl
        mov dword ptr ds : [eax+0x80], ecx
        mov dword ptr ds : [eax+0x84], ecx
        mov dword ptr ds : [eax+0x88], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov word ptr ds : [eax+0x48], cx
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x8C], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x78], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6320370)
    }
}
