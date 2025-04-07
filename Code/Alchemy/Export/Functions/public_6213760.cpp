#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213760);

PROC_DECLARE(0x6213760, internal_6213760, public_6213760);
extern "C" NAKED register_t __cdecl internal_6213760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov edx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        mov eax, ecx
        mov dword ptr ds : [esi+0xD8], ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x44]
        mov ecx, dword ptr ds : [esi+0x9C]
        mov eax, dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ds : [esi+0x84]
        push ecx
        mov ecx, dword ptr ds : [esi+0x8C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        fst dword ptr ds : [esi+0xA0]
        fld st(0)
        fmul st, st(1)
        xor eax, eax
        fstp dword ptr ds : [esi+0xA4]
        pop esi
        fstp st(0)
        ret 8
        UNREACHABLE_TRAP(0x6213760)
    }
}
