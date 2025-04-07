#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_635ae60);
CLANG_FORWARD_PROC_SYMBOL(public_635af70);
CLANG_FORWARD_PROC_SYMBOL(public_635b3b0);

PROC_DECLARE(0x635b3b0, internal_635b3b0, public_635b3b0);
extern "C" NAKED register_t __cdecl internal_635b3b0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x48], ecx
        mov dword ptr ds : [esi+0x4C], eax
        mov eax, dword ptr ds : [ecx]
        mov ebx, ecx
        and ebx, 0xC
        mov ebx, dword ptr ds : [ebx+public_63ee4e0]
        mov ecx, dword ptr ds : [ebx+ecx]
        mov ebx, dword ptr ss : [esp+0x2C]
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [edi]
        and ecx, 0xFFFF
        and eax, 0xFFFF
        shl ecx, 4
        fld dword ptr ds : [ecx+edx+4]
        add ecx, edx
        shl eax, 4
        fsub dword ptr ds : [eax+edx+4]
        add eax, edx
        fld dword ptr ds : [ecx+8]
        lea ebp, ds:[esi+0x28]
        fsub dword ptr ds : [eax+8]
        push ebp
        push ebx
        lea edx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+0x2C]
        push edi
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [eax]
        push edx
        mov dword ptr ss : [esp+0x28], ecx
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        call public_635af70
        mov ecx, dword ptr ds : [esi+0x48]
        lea eax, ds:[esi+8]
        push eax
        push ebx
        push edi
        push ecx
        mov dword ptr ds : [esi+0x50], edi
        mov dword ptr ds : [esi+0x54], ebx
        call public_635ae60
        mov eax, dword ptr ds : [esi+0x48]
        lea edx, ds:[esi+0x18]
        push edx
        mov ecx, eax
        and ecx, 0xC
        mov edx, dword ptr ds : [ecx+public_63ee4e0]
        push ebx
        add edx, eax
        push edi
        push edx
        call public_635ae60
        mov ecx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ebx]
        mov edx, ecx
        and edx, 0xC
        mov edx, dword ptr ds : [edx+public_63ee4e0]
        mov ecx, dword ptr ds : [edx+ecx]
        and eax, 0xFFFF
        and ecx, 0xFFFF
        shl eax, 4
        add eax, ebx
        shl ecx, 4
        add esp, 0x30
        add ecx, ebx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        lea edx, ds:[esi+0x38]
        fld dword ptr ds : [ecx+8]
        push edx
        fsub dword ptr ds : [eax+8]
        push ebp
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ecx]
        lea ecx, ds:[esi+0x58]
        fsub dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+8], eax
        fstp dword ptr ds : [edx]
        fstp dword ptr ds : [edx+4]
        call public_628bed0
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x635b3b0)
    }
}
