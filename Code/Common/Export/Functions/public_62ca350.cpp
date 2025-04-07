#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ca350);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e60);
CLANG_FORWARD_PROC_SYMBOL(public_62d5aa0);
CLANG_FORWARD_PROC_SYMBOL(public_62d6750);
CLANG_FORWARD_PROC_SYMBOL(public_62da500);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394d95);

#define public_62ca464 _public_62ca464

PROC_DECLARE(0x62ca350, internal_62ca350, public_62ca350);
extern "C" NAKED register_t __cdecl internal_62ca350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394d95 @0x62ca352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394d95
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0xC], esi
        call public_62d2020
        xor ebx, ebx
        lea ecx, ds:[esi+0x2C]
        mov dword ptr ss : [esp+0x14], ebx
        call public_62d5aa0
        lea ecx, ds:[esi+0x88]
        mov byte ptr ss : [esp+0x14], 1
        call public_62d6750
        lea ecx, ds:[esi+0x148]
        mov byte ptr ss : [esp+0x14], 2
        call public_62d4e60
        lea ecx, ds:[esi+0x1C0]
        mov byte ptr ss : [esp+0x14], 3
        call public_62da500
        lea ecx, ds:[esi+0x1D4]
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        fld qword ptr ds : [public_639fad8]
        fcos 
        mov dword ptr ds : [esi], offset public_639fa6c
        mov dword ptr ds : [esi+0x1E4], ebx
        mov dword ptr ds : [esi+0x1E8], 0x42480000
        mov dword ptr ds : [esi+0x224], 0x3D1DE9E7
        mov dword ptr ds : [esi+0x228], 0x43C80000
        mov dword ptr ds : [esi+0x21C], 0x40800000
        mov byte ptr ds : [esi+0x22C], bl
        mov dword ptr ds : [esi+0x230], ebx
        mov dword ptr ds : [esi+0x234], ebx
        mov dword ptr ds : [esi+0x238], ebx
        mov dword ptr ds : [esi+0x1FC], 0x40200000
        mov dword ptr ds : [esi+0x204], 0x40400000
        mov dword ptr ds : [esi+0x200], 0x40A00000
        mov dword ptr ds : [esi+0x208], ebx
        mov byte ptr ds : [esi+0x20C], bl
        mov dword ptr ds : [esi+0x210], 0x3F800000
        mov dword ptr ds : [esi+0x1DC], ebx
        mov byte ptr ss : [esp+0x14], 5
        fstp dword ptr ds : [esi+0x1F0]
        cmp dword ptr ds : [ecx], ebx
        je public_62ca464
        push ebx
        call public_6341610
        public_62ca464 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x214], bl
        mov byte ptr ds : [esi+0x23C], bl
        mov dword ptr ds : [esi+0x240], 0x41A00000
        mov dword ptr ds : [esi+0x244], 0x44BB8000
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62ca350)
    }
}

#undef public_62ca464
