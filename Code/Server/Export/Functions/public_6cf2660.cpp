#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee630);
CLANG_FORWARD_PROC_SYMBOL(public_6cf2b10);
CLANG_FORWARD_PROC_SYMBOL(public_6cf2c10);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d608d8);

#define public_6cf2726 _public_6cf2726

PROC_DECLARE(0x6cf2660, internal_6cf2660, public_6cf2660);
extern "C" NAKED register_t __cdecl internal_6cf2660()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d608d8 @0x6cf2662*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d608d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        mov al, byte ptr ss : [esp+0x44]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov byte ptr ss : [esp+0x30], al
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x48], edi
        call dword ptr ds : [edx+0x20]
        mov ebp, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebp
        call public_6d06cd0
        mov ebx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x1C], edi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push 0x39
        mov dword ptr ss : [esp+0x34], eax
        call public_6d43650
        add esp, 8
        push ebp
        push ebx
        mov ecx, esi
        call public_6cee630
        cmp ebx, 1
        jne public_6cf2726
        mov ecx, esi
        call public_6cf2b10
        mov ecx, esi
        call public_6cf2c10
        public_6cf2726 : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x6cf2660)
    }
}

#undef public_6cf2726
