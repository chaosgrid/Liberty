#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41840);

PROC_DECLARE(0x6f41840, internal_6f41840, public_6f41840);
extern "C" NAKED register_t __cdecl internal_6f41840()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x60], 0x43340000
        mov dword ptr ds : [esi+0x64], 1
        mov dword ptr ds : [esi+0x68], 0
        mov dword ptr ds : [esi+0x5C], 0x447A0000
        lea ebx, ds:[esi+0x6C]
        lea eax, ds:[esi+0x50]
        mov dword ptr ss : [esp+8], 0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        mov eax, 0xFF
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x4C], eax
        xor eax, eax
        push edi
        mov edi, ebx
        mov ecx, 0x1A
        rep stosd
        mov dword ptr ds : [ebx], 2
        mov ecx, dword ptr ds : [esi+0x44]
        mov eax, 0x80808081
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, 0x80808081
        pop edi
        fild dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [esi+0x48]
        imul ecx
        add edx, ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x18], edx
        mov eax, 0x80808081
        fild dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [esi+0x4C]
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x18], edx
        mov eax, 0x3F800000
        mov dword ptr ds : [ebx+0x10], eax
        fild dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [esi+0x5C]
        mov dword ptr ds : [ebx+0x4C], ecx
        mov dword ptr ds : [ebx+0x50], eax
        mov dword ptr ds : [ebx+0x64], 0x40490FDB
        mov dword ptr ds : [ebx+0x60], 0x4020D97C
        mov dword ptr ds : [ebx+0x54], 0
        mov dword ptr ds : [ebx+0x58], 0
        fld dword ptr ds : [esi+0x5C]
        fld st(0)
        pop esi
        fmul st, st(1)
        fdivr qword ptr ds : [public_6f5b0b0]
        fstp dword ptr ds : [ebx+0x5C]
        pop ebx
        fstp st(0)
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f41840)
    }
}
