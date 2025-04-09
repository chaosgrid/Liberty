#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48e600);
CLANG_FORWARD_PROC_SYMBOL(public_4b5150);
CLANG_FORWARD_PROC_SYMBOL(public_4ca690);
CLANG_FORWARD_PROC_SYMBOL(public_4ca910);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd9df);

#define public_4ca710 _public_4ca710

PROC_DECLARE(0x4ca690, internal_4ca690, public_4ca690);
extern "C" NAKED register_t __cdecl internal_4ca690()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd9df @0x4ca692*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd9df
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        push ebx
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [public_5c645c]
        mov al, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0x34], 1
        mov byte ptr ds : [esi+0x24], al
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], 2
        call public_4ca910
        lea edi, ds:[esi+0x38]
        lea ecx, ds:[edi+0x50]
        mov dword ptr ss : [esp+0x34], 3
        mov dword ptr ss : [esp+0x1C], edi
        call public_48e600
        mov eax, 4
        mov byte ptr ss : [esp+0x34], al
        lea ebp, ds:[edi+0x78]
        mov dword ptr ss : [esp+0x14], eax
        nop 
        public_4ca710 : nop
        mov ecx, ebp
        call public_4b5150
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x30
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_4ca710
        mov dword ptr ss : [esp+0x20], 0
        mov edx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[edi+0x30]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x24], 0
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x28], 0xC0000000
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+8], edx
        lea eax, ds:[edi+0x24]
        mov dword ptr ss : [esp+0x20], 0x3E99999A
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [edi], bl
        mov dword ptr ss : [esp+0x24], 0x3E99999A
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [edi+0x4C], bl
        mov byte ptr ds : [edi+0x4D], bl
        mov dword ptr ds : [edi+0x44], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ds : [edi+0x4E], 1
        mov dword ptr ds : [edi+0x48], 0x3F000000
        mov dword ptr ss : [esp+0x28], 0xBF800000
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, 0x3E4CCCCD
        mov dword ptr ds : [edi+0x3C], eax
        mov dword ptr ds : [edi+0x40], eax
        mov eax, 1
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ds : [edi+0x10], eax
        pop edi
        mov dword ptr ds : [esi+0x170], ebx
        mov byte ptr ds : [esi+0x174], bl
        mov dword ptr ds : [esi+0x1B4], ebx
        mov dword ptr ds : [esi+0x1B8], ebx
        mov dword ptr ds : [esi+0x1C0], ebx
        mov dword ptr ds : [esi+0x1C4], ebx
        mov dword ptr ds : [esi+0x1C8], ebx
        mov dword ptr ds : [esi+0x1CC], ebx
        mov dword ptr ds : [esi+0x1BC], ebx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x4ca690)
    }
}

#undef public_4ca710
