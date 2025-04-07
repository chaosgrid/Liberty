#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40380);

PROC_DECLARE(0x6f40380, internal_6f40380, public_6f40380);
extern "C" NAKED register_t __cdecl internal_6f40380()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        push esi
        push edi
        lea edi, ds:[eax+0x14]
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[eax+8]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dl, byte ptr ss : [esp+0x52]
        mov byte ptr ds : [eax+0x40], cl
        mov byte ptr ds : [eax+0x41], ch
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], ecx
        xor ecx, ecx
        pop edi
        mov byte ptr ds : [eax+0x42], dl
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f40380)
    }
}
