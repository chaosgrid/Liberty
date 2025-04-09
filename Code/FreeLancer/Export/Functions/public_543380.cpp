#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_532bc0);
CLANG_FORWARD_PROC_SYMBOL(public_543380);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0e02);

PROC_DECLARE(0x543380, internal_543380, public_543380);
extern "C" NAKED register_t __cdecl internal_543380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0e02 @0x543382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0e02
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push 1
        mov dword ptr ss : [esp+0xC], esi
        call public_532bc0
        xor ebx, ebx
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [esi+0xF4], ebx
        mov dword ptr ds : [esi+0xF8], ebx
        mov dword ptr ds : [esi+0xFC], ebx
        mov dword ptr ds : [esi+0x100], ebx
        lea ecx, ds:[esi+0x108]
        mov byte ptr ss : [esp+0x14], 1
        mov dword ptr ds : [esi+0x104], ebx
        call public_420d40
        mov dword ptr ds : [esi+0x134], ebx
        mov dword ptr ds : [esi+0x130], ebx
        mov dword ptr ds : [esi+0x12C], ebx
        mov dword ptr ds : [esi+0x124], ebx
        mov dword ptr ds : [esi+0x120], ebx
        mov dword ptr ds : [esi+0x11C], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x138], eax
        mov dword ptr ds : [esi+0x128], eax
        mov dword ptr ds : [esi+0x118], eax
        mov dword ptr ds : [esi+0x144], ebx
        mov dword ptr ds : [esi+0x140], ebx
        mov dword ptr ds : [esi+0x13C], ebx
        mov dword ptr ds : [esi+0x148], ebx
        mov dword ptr ds : [esi+0x14C], ebx
        mov dword ptr ds : [esi+0x150], ebx
        mov byte ptr ds : [esi+0x154], bl
        mov byte ptr ds : [esi+0x15C], bl
        mov dword ptr ds : [esi+0x160], ebx
        mov dword ptr ds : [esi+0x164], ebx
        mov dword ptr ds : [esi+0x168], ebx
        mov dword ptr ds : [esi+0x16C], ebx
        mov dword ptr ds : [esi+0x170], ebx
        mov dword ptr ds : [esi+0x174], ebx
        mov dword ptr ds : [esi+0x178], ebx
        mov dword ptr ds : [esi+0x17C], ebx
        mov dword ptr ds : [esi+0x180], ebx
        mov dword ptr ds : [esi+0x184], ebx
        and byte ptr ds : [esi+0x18C], 0xFC
        mov dword ptr ds : [esi+0x188], ebx
        mov dword ptr ds : [esi+0x18C], ebx
        mov dword ptr ds : [esi], offset public_5dfd6c
        mov dword ptr ds : [esi+4], offset public_5dfcec
        mov dword ptr ds : [esi+0xC], offset public_5dfce0
        mov dword ptr ds : [esi+0xAC], offset public_5dfcd8
        mov dword ptr ds : [esi+0x158], ebx
        call dword ptr ds : [public_5c71dc]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        mov eax, esi
        fmul dword ptr ds : [public_5caeec]
        fstp dword ptr ds : [esi+0x34]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x543380)
    }
}
