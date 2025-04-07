#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f26770);

PROC_DECLARE(0x6f26770, internal_6f26770, public_6f26770);
extern "C" NAKED register_t __cdecl internal_6f26770()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x124], 1
        push esi
        mov esi, dword ptr ds : [edx]
        lea eax, ds:[ecx+0x128]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [esp+0x14]
        mov dl, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [ecx+0x170], dl
        mov dword ptr ds : [ecx+0x168], eax
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x174], edx
        mov dl, byte ptr ss : [esp+0x18]
        mov byte ptr ds : [ecx+0x173], dl
        mov dl, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [ecx+0x172], dl
        mov dword ptr ds : [ecx+0x178], 0x43480000
        mov dword ptr ds : [ecx+0x17C], 0x43FA0000
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x194], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [eax]
        lea edx, ds:[ecx+0x19C]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov dl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [ecx+0x1AC], dl
        pop esi
        ret 0x20
        UNREACHABLE_TRAP(0x6f26770)
    }
}
