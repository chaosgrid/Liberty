#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_414280);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5793e0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3c95);

PROC_DECLARE(0x5793e0, internal_5793e0, public_5793e0);
extern "C" NAKED register_t __cdecl internal_5793e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3c95 @0x5793e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3c95
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        call public_59f860
        mov al, byte ptr ss : [esp+0x13]
        xor ebx, ebx
        lea edi, ds:[esi+0x368]
        push ebx
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x374]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 1
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea ecx, ds:[esi+0x384]
        mov byte ptr ss : [esp+0x24], 2
        call dword ptr ds : [public_5c6c20]
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x3E4], eax
        mov dword ptr ds : [esi+0x3E0], eax
        mov dword ptr ds : [esi+0x3D4], ebx
        mov dword ptr ds : [esi+0x3D8], ebx
        mov dword ptr ds : [esi+0x3DC], ebx
        mov dword ptr ds : [esi+0x3EC], ebx
        lea edi, ds:[esi+0x40C]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x24], 6
        call public_4144b0
        push 0xFFFFFFFF
        push ebx
        lea ecx, ds:[edi+8]
        mov byte ptr ss : [esp+0x2C], 7
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi], 0xFFFFFFFF
        mov dword ptr ds : [edi+0x44], ebx
        call public_413df0
        mov byte ptr ds : [edi+0x60], bl
        mov dword ptr ds : [esi], offset public_5e459c
        mov dword ptr ds : [esi+0x7C], offset public_5e4590
        mov dword ptr ds : [esi+0x32C], ebx
        mov byte ptr ds : [esi+0x402], bl
        mov byte ptr ds : [esi+0x472], bl
        mov edx, dword ptr ds : [public_615170]
        lea ebp, ds:[esi+0x384]
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x28], 8
        mov dword ptr ds : [esi+0x403], edx
        mov dword ptr ds : [esi+0x364], ebx
        mov dword ptr ds : [esi+0x360], ebx
        call dword ptr ds : [public_5c6c1c]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c6c18]
        mov dword ptr ds : [esi+0x3F4], ebx
        mov dword ptr ds : [esi+0x3F0], ebx
        mov byte ptr ds : [esi+0x407], bl
        mov dword ptr ds : [esi+0x3F8], 0x3CA3D70A
        mov dword ptr ds : [esi+0x3FC], 0x3B03126F
        mov dword ptr ds : [esi+0x380], ebx
        mov dword ptr ds : [esi+0x3E8], ebx
        mov dword ptr ds : [esi+0x408], ebx
        mov byte ptr ds : [esi+0x471], bl
        mov byte ptr ds : [esi+0x470], bl
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi], 0xFFFFFFFF
        mov dword ptr ds : [edi+0x44], ebx
        call public_414280
        mov ecx, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [edi+0x60], bl
        mov dword ptr ds : [edi], esi
        mov dword ptr ds : [esi+0x410], ebx
        mov byte ptr ds : [esi+0x478], bl
        mov dword ptr ds : [esi+0x334], ebx
        mov dword ptr ds : [esi+0x330], ebx
        mov dword ptr ds : [esi+0x344], ebx
        mov dword ptr ds : [esi+0x340], ebx
        mov dword ptr ds : [esi+0x33C], ebx
        mov dword ptr ds : [esi+0x338], ebx
        mov dword ptr ds : [esi+0x35C], ebx
        mov dword ptr ds : [esi+0x358], ebx
        mov dword ptr ds : [esi+0x354], ebx
        mov dword ptr ds : [esi+0x34C], ebx
        mov dword ptr ds : [esi+0x350], ebx
        mov dword ptr ds : [esi+0x348], ebx
        mov dword ptr ds : [esi+0x474], 0x3F800000
        mov dword ptr ds : [esi+0x484], ebx
        mov dword ptr ds : [esi+0x480], ebx
        mov dword ptr ds : [esi+0x47C], ebx
        pop edi
        mov byte ptr ds : [esi+0x400], 1
        mov byte ptr ds : [esi+0x401], 1
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x5793e0)
    }
}
