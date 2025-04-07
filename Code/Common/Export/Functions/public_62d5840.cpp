#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d5840);

PROC_DECLARE(0x62d5840, internal_62d5840, public_62d5840);
extern "C" NAKED register_t __cdecl internal_62d5840()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x48], 2
        lea eax, ds:[ecx+0x1C]
        mov ecx, dword ptr ds : [ecx+0xC]
        push esi
        push edi
        mov edi, dword ptr ds : [edx]
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [eax]
        add edx, 0x200
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [edx+8], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d5840)
    }
}
