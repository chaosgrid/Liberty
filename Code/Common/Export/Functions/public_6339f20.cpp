#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6339f20);

PROC_DECLARE(0x6339f20, internal_6339f20, public_6339f20);
extern "C" NAKED register_t __cdecl internal_6339f20()
{
    __asm
    {
        mov eax, ecx
        push ebx
        push esi
        push edi
        lea edx, ds:[eax+0x3C]
        mov ecx, 9
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [esi]
        lea ecx, ds:[eax+0x30]
        mov edi, ecx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], esi
        pop edi
        fld dword ptr ds : [ecx]
        pop esi
        fld st(0)
        pop ebx
        fmulp 
        fld st(0)
        fmul dword ptr ds : [edx]
        fstp dword ptr ds : [edx]
        fld st(0)
        fmul dword ptr ds : [eax+0x48]
        fstp dword ptr ds : [eax+0x48]
        fmul dword ptr ds : [eax+0x54]
        fstp dword ptr ds : [eax+0x54]
        fld dword ptr ds : [eax+0x34]
        fld st(0)
        fmulp 
        fld st(0)
        fmul dword ptr ds : [eax+0x40]
        fstp dword ptr ds : [eax+0x40]
        fld st(0)
        fmul dword ptr ds : [eax+0x4C]
        fstp dword ptr ds : [eax+0x4C]
        fmul dword ptr ds : [eax+0x58]
        fstp dword ptr ds : [eax+0x58]
        fld dword ptr ds : [eax+0x38]
        fld st(0)
        fmulp 
        fld st(0)
        fmul dword ptr ds : [eax+0x44]
        fstp dword ptr ds : [eax+0x44]
        fld st(0)
        fmul dword ptr ds : [eax+0x50]
        fstp dword ptr ds : [eax+0x50]
        fmul dword ptr ds : [eax+0x5C]
        fstp dword ptr ds : [eax+0x5C]
        ret 4
        UNREACHABLE_TRAP(0x6339f20)
    }
}
