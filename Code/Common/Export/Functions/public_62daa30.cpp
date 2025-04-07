#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62da670);
CLANG_FORWARD_PROC_SYMBOL(public_62da890);
CLANG_FORWARD_PROC_SYMBOL(public_62da910);
CLANG_FORWARD_PROC_SYMBOL(public_62da980);
CLANG_FORWARD_PROC_SYMBOL(public_62daa30);

PROC_DECLARE(0x62daa30, internal_62daa30, public_62daa30);
extern "C" NAKED register_t __cdecl internal_62daa30()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], 0x43FA0000
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], 0x3F490FDB
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], 0x42C80000
        mov dword ptr ds : [esi+0x30], 0x41200000
        mov dword ptr ds : [esi+0x3C], 0x3E19999A
        mov byte ptr ds : [esi+0x44], bl
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        push edi
        mov edi, 0x3F800000
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x40], edi
        mov eax, 0x3F19999A
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov ebp, 0x40400000
        lea ecx, ds:[esi+0x94]
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x58], ebp
        mov dword ptr ds : [esi+0x5C], 0x47C35000
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x7C], edi
        mov dword ptr ds : [esi+0x8C], 0x40800000
        mov dword ptr ds : [esi+0x90], 0x43160000
        mov dword ptr ds : [esi+0x80], ebx
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x88], ebx
        call public_62da670
        mov dword ptr ds : [esi+0xF4], ebx
        mov dword ptr ds : [esi+0xF8], ebx
        mov dword ptr ds : [esi+0xFC], ebx
        mov dword ptr ds : [esi+0x100], 0x42C80000
        mov dword ptr ds : [esi+0x104], ebp
        mov dword ptr ds : [esi+0x10C], ebx
        mov dword ptr ds : [esi+0x110], ebx
        mov dword ptr ds : [esi+0x114], ebx
        mov dword ptr ds : [esi+0x118], ebx
        mov dword ptr ds : [esi+0x11C], ebx
        mov dword ptr ds : [esi+0x120], edi
        mov dword ptr ds : [esi+0x124], ebx
        mov byte ptr ds : [esi+0x108], bl
        mov dword ptr ds : [esi+0x128], 0x3F060A92
        mov dword ptr ds : [esi+0x12C], 0x40200000
        mov dword ptr ds : [esi+0x130], 0x40800000
        mov dword ptr ds : [esi+0x134], ebx
        mov byte ptr ds : [esi+0x138], bl
        mov dword ptr ds : [esi+0x13C], edi
        mov dword ptr ds : [esi+0x140], 0x43160000
        mov dword ptr ds : [esi+0x144], 0x43960000
        mov dword ptr ds : [esi+0x148], edi
        mov dword ptr ds : [esi+0x14C], edi
        mov eax, 0x3F000000
        mov dword ptr ds : [esi+0x150], 0x40C00000
        mov dword ptr ds : [esi+0x154], ebp
        mov dword ptr ds : [esi+0x158], ebx
        mov dword ptr ds : [esi+0x15C], eax
        mov dword ptr ds : [esi+0x160], 0x442F0000
        mov edx, 0x40000000
        mov dword ptr ds : [esi+0x164], edx
        mov dword ptr ds : [esi+0x168], eax
        mov dword ptr ds : [esi+0x16C], ebp
        mov dword ptr ds : [esi+0x174], eax
        mov dword ptr ds : [esi+0x170], edi
        mov dword ptr ds : [esi+0x178], edi
        mov dword ptr ds : [esi+0x184], eax
        mov dword ptr ds : [esi+0x180], ebx
        mov dword ptr ds : [esi+0x194], ebx
        mov dword ptr ds : [esi+0x198], edi
        mov dword ptr ds : [esi+0x19C], 0x40C00000
        mov dword ptr ds : [esi+0x1A0], edi
        mov dword ptr ds : [esi+0x1A4], 0x3E4CCCCD
        mov dword ptr ds : [esi+0x17C], ebx
        mov dword ptr ds : [esi+0x1AC], ebx
        mov dword ptr ds : [esi+0x1B0], edi
        mov dword ptr ds : [esi+0x1B4], ebx
        mov ecx, 0x3FC00000
        mov dword ptr ds : [esi+0x188], ecx
        mov dword ptr ds : [esi+0x1A8], ecx
        mov eax, 0x3DCCCCCD
        mov dword ptr ds : [esi+0x18C], eax
        mov dword ptr ds : [esi+0x190], eax
        mov dword ptr ds : [esi+0x1B8], eax
        mov dword ptr ds : [esi+0x1BC], ebx
        mov dword ptr ds : [esi+0x1C4], 0x43C80000
        mov ecx, 0x3EC90FDB
        mov dword ptr ds : [esi+0x1C0], ecx
        mov eax, 0x40A00000
        mov dword ptr ds : [esi+0x1D8], ecx
        lea ecx, ds:[esi+0x1EC]
        mov dword ptr ds : [esi+0x1D0], eax
        mov dword ptr ds : [esi+0x1D4], 0x3ECCCCCD
        mov dword ptr ds : [esi+0x1C8], 0xBF800000
        mov byte ptr ds : [esi+0x1CC], bl
        mov dword ptr ds : [esi+0x1DC], 0x43960000
        mov dword ptr ds : [esi+0x1E0], 0x451C4000
        mov dword ptr ds : [esi+0x1E4], edx
        mov dword ptr ds : [esi+0x1E8], eax
        call public_62da890
        mov dword ptr ds : [esi+0x230], ebx
        mov dword ptr ds : [esi+0x234], ebx
        mov dword ptr ds : [esi+0x238], ebx
        mov dword ptr ds : [esi+0x23C], 0x437A0000
        lea ecx, ds:[esi+0x248]
        mov dword ptr ds : [esi+0x240], edi
        mov dword ptr ds : [esi+0x244], ebx
        call public_62da910
        lea ecx, ds:[esi+0x2A0]
        call public_62da980
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62daa30)
    }
}
