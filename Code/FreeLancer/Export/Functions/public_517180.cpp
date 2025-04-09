#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_517180);
CLANG_FORWARD_PROC_SYMBOL(public_51ca80);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfdf8);

PROC_DECLARE(0x517180, internal_517180, public_517180);
extern "C" NAKED register_t __cdecl internal_517180()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bfdf8 @0x517182*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfdf8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        call public_51ca80
        xor ebx, ebx
        lea ecx, ds:[esi+0x190]
        mov dword ptr ss : [esp+0x20], ebx
        call public_420d40
        mov dword ptr ds : [esi], offset public_5db944
        mov dword ptr ds : [esi+0xF8], offset public_5db93c
        mov ecx, ebx
        lea eax, ds:[esi+0x100]
        mov dword ptr ds : [eax], ecx
        mov edx, ebx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [esi+0x128], ebx
        mov dword ptr ds : [esi+0x124], ebx
        mov dword ptr ds : [esi+0x120], ebx
        mov dword ptr ds : [esi+0x118], ebx
        mov dword ptr ds : [esi+0x114], ebx
        mov dword ptr ds : [esi+0x110], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x12C], eax
        mov dword ptr ds : [esi+0x11C], eax
        mov dword ptr ds : [esi+0x10C], eax
        lea edx, ds:[esi+0x130]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [esi+0x15C], eax
        mov dword ptr ds : [esi+0x14C], eax
        mov dword ptr ds : [esi+0x13C], eax
        mov dword ptr ds : [esi+0x158], ebx
        mov dword ptr ds : [esi+0x154], ebx
        mov dword ptr ds : [esi+0x150], ebx
        mov dword ptr ds : [esi+0x148], ebx
        mov dword ptr ds : [esi+0x144], ebx
        mov dword ptr ds : [esi+0x140], ebx
        lea edx, ds:[esi+0x160]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x18C], eax
        mov dword ptr ds : [esi+0x17C], eax
        mov dword ptr ds : [esi+0x16C], eax
        mov dword ptr ds : [esi+0x188], ebx
        mov dword ptr ds : [esi+0x184], ebx
        mov dword ptr ds : [esi+0x180], ebx
        mov dword ptr ds : [esi+0x178], ebx
        mov dword ptr ds : [esi+0x174], ebx
        mov dword ptr ds : [esi+0x170], ebx
        mov byte ptr ds : [esi+0xFC], bl
        mov byte ptr ds : [esi+0xFD], bl
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ds : [esi+0x1A0], 1
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov eax, esi
        pop esi
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x517180)
    }
}
