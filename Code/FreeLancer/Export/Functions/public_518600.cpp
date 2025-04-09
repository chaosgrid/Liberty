#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_518600);
CLANG_FORWARD_PROC_SYMBOL(public_51ca80);

PROC_DECLARE(0x518600, internal_518600, public_518600);
extern "C" NAKED register_t __cdecl internal_518600()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov esi, ecx
        call public_51ca80
        mov dword ptr ds : [esi], offset public_5dbb14
        mov dword ptr ds : [esi+0xF8], offset public_5dbb0c
        mov dword ptr ss : [esp+8], 0
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ds:[esi+0x100]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        mov dword ptr ds : [esi+0x128], eax
        mov dword ptr ds : [esi+0x124], eax
        mov dword ptr ds : [esi+0x120], eax
        mov dword ptr ds : [esi+0x118], eax
        mov dword ptr ds : [esi+0x114], eax
        mov dword ptr ds : [esi+0x110], eax
        mov ecx, 0x3F800000
        mov dword ptr ds : [esi+0x12C], ecx
        mov dword ptr ds : [esi+0x11C], ecx
        mov dword ptr ds : [esi+0x10C], ecx
        lea edx, ds:[esi+0x140]
        mov edi, eax
        mov dword ptr ds : [edx], edi
        mov dword ptr ss : [esp+0xC], 0x40E00000
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ss : [esp+0x10], 0x42700000
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], edi
        mov dword ptr ds : [esi+0x14C], eax
        mov dword ptr ds : [esi+0x150], eax
        mov dword ptr ds : [esi+0x154], eax
        mov byte ptr ds : [esi+0xFC], al
        mov byte ptr ds : [esi+0xFD], al
        mov dword ptr ds : [esi+0x1FC], eax
        mov dword ptr ds : [esi+0x1F8], eax
        mov dword ptr ds : [esi+0x1EC], eax
        mov byte ptr ds : [esi+0x13C], 1
        mov dword ptr ds : [esi+0x1F0], 0x3D4CCCCD
        mov dword ptr ds : [esi+0x1F4], 0x42200000
        mov dword ptr ds : [esi+0x178], ecx
        mov dword ptr ds : [esi+0x168], ecx
        mov dword ptr ds : [esi+0x158], ecx
        mov dword ptr ds : [esi+0x174], eax
        mov dword ptr ds : [esi+0x170], eax
        mov dword ptr ds : [esi+0x16C], eax
        mov dword ptr ds : [esi+0x164], eax
        mov dword ptr ds : [esi+0x160], eax
        mov dword ptr ds : [esi+0x15C], eax
        mov dword ptr ds : [esi+0x1E0], 0x3DCCCCCD
        mov dword ptr ds : [esi+0x1E8], 0x3F000000
        mov edx, 0x3E4CCCCD
        mov dword ptr ds : [esi+0x1DC], edx
        mov dword ptr ds : [esi+0x1E4], edx
        mov dword ptr ds : [esi+0x208], ecx
        mov dword ptr ds : [esi+0x204], eax
        mov dword ptr ds : [esi+0x20C], eax
        mov dword ptr ds : [esi+0x210], eax
        mov ecx, 0x40000000
        mov dword ptr ds : [esi+0x200], ecx
        mov dword ptr ds : [esi+0x1A0], eax
        mov dword ptr ds : [esi+0x1A4], eax
        mov dword ptr ds : [esi+0x1A8], 0xBF800000
        mov dword ptr ds : [esi+0x1AC], eax
        mov byte ptr ds : [esi+0x214], al
        mov dword ptr ss : [esp+8], eax
        pop edi
        mov dword ptr ds : [esi+0x1D8], ecx
        mov dword ptr ds : [esi+0x1D4], 0x3D490FDB
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x518600)
    }
}
