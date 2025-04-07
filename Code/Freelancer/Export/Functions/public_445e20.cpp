#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445e20);

PROC_DECLARE(0x445e20, internal_445e20, public_445e20);
extern "C" NAKED register_t __cdecl internal_445e20()
{
    __asm
    {
        sub esp, 0x10
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax], cl
        mov cl, byte ptr ss : [esp+3]
        xor edx, edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xC], edx
        mov byte ptr ds : [eax+0x10], cl
        mov cl, byte ptr ss : [esp+3]
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x1C], edx
        mov byte ptr ds : [eax+0x54], cl
        mov dword ptr ds : [eax+0x58], edx
        mov dword ptr ds : [eax+0x5C], edx
        mov dword ptr ds : [eax+0x60], edx
        lea ecx, ds:[eax+0x24]
        mov dword ptr ds : [eax+0x20], 0xFFFFFFFF
        push esi
        push edi
        mov edi, edx
        mov esi, ecx
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov esi, 0x3F800000
        pop edi
        mov dword ptr ds : [ecx+0x2C], esi
        mov dword ptr ds : [ecx+0x1C], esi
        mov dword ptr ds : [ecx+0xC], esi
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ds : [ecx+0x28], edx
        mov dword ptr ds : [ecx+0x24], edx
        mov dword ptr ds : [ecx+0x20], edx
        mov dword ptr ds : [ecx+0x18], edx
        mov dword ptr ds : [ecx+0x14], edx
        mov dword ptr ds : [ecx+0x10], edx
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x445e20)
    }
}
