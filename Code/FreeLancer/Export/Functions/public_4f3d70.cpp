#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);

PROC_DECLARE(0x4f3d70, internal_4f3d70, public_4f3d70);
extern "C" NAKED register_t __cdecl internal_4f3d70()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[esi+0x60]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push eax
        mov ecx, esi
        call public_4b5060
        test al, al
        setne al
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x4f3d70)
    }
}
