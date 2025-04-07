#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d10aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d494f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d576d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6318f);

PROC_DECLARE(0x6d494f0, internal_6d494f0, public_6d494f0);
extern "C" NAKED register_t __cdecl internal_6d494f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6318f @0x6d494f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6318f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x11]
        push eax
        mov esi, ecx
        xor ebx, ebx
        push ebx
        lea edx, ss:[esp+0x1A]
        lea ecx, ds:[esi+0x50]
        push edx
        mov dword ptr ss : [esp+0x20], esi
        call public_6d576d0
        mov al, byte ptr ss : [esp+0x12]
        mov byte ptr ds : [esi+0x64], bl
        lea edi, ds:[esi+0x26C]
        push ebx
        mov dword ptr ds : [esi+0x264], ebx
        mov dword ptr ds : [esi+0x268], ebx
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ds : [edi], al
        call dword ptr ds : [public_6d643cc]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea edx, ss:[esp+0x13]
        lea ecx, ds:[esi+0x278]
        push edx
        mov byte ptr ss : [esp+0x24], 1
        call dword ptr ds : [public_6d648e4]
        mov al, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [esi+0x284], ebx
        mov dword ptr ds : [esi+0x28C], ebx
        mov dword ptr ds : [esi+0x290], ebx
        mov dword ptr ds : [esi+0x294], ebx
        mov dword ptr ds : [esi+0x298], ebx
        mov dword ptr ds : [esi+0x2BC], ebx
        mov dword ptr ds : [esi+0x2C0], ebx
        mov byte ptr ds : [esi+0x2C4], bl
        mov dword ptr ds : [esi+0x2E4], ebx
        mov dword ptr ds : [esi+0x2E8], ebx
        mov dword ptr ds : [esi+0x2EC], ebx
        mov dword ptr ds : [esi+0x2F0], ebx
        mov dword ptr ds : [esi+0x314], ebx
        lea edi, ds:[esi+0x328]
        push ebx
        mov dword ptr ds : [esi+0x318], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x320], ebx
        mov dword ptr ds : [esi+0x324], ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 2
        mov byte ptr ds : [edi], al
        call dword ptr ds : [public_6d64880]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0x13]
        lea ecx, ds:[esi+0x380]
        mov dword ptr ds : [esi+0x348], ebx
        mov byte ptr ds : [esi+0x34C], bl
        push ebx
        mov byte ptr ss : [esp+0x24], 3
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6d64b74]
        mov al, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x390]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 4
        mov byte ptr ds : [edi], al
        call public_6d10aa0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0x13]
        mov al, byte ptr ss : [esp+0x13]
        lea ecx, ds:[esi+0x3A0]
        mov byte ptr ss : [esp+0x20], 5
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_6d15ef0
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x3B4], cl
        mov dword ptr ds : [esi+0x3B8], ebx
        mov dword ptr ds : [esi+0x3BC], ebx
        mov dword ptr ds : [esi+0x3C0], ebx
        mov ebp, 0x3F800000
        lea ecx, ds:[esi+0x3C8]
        mov byte ptr ss : [esp+0x20], 7
        mov dword ptr ds : [esi+0x3C4], ebp
        call dword ptr ds : [public_6d643c4]
        mov dl, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x3D4]
        push ebx
        mov dword ptr ds : [esi+0x3CC], ebx
        mov dword ptr ds : [esi+0x3D0], ebx
        push ebx
        mov ecx, edi
        mov byte ptr ds : [edi], dl
        call public_6cfc340
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea ecx, ds:[esi+0x414]
        mov byte ptr ss : [esp+0x20], 8
        mov dword ptr ds : [esi+0x3E4], ebx
        mov dword ptr ds : [esi+0x3E8], ebx
        mov dword ptr ds : [esi+0x3F4], ebx
        mov dword ptr ds : [esi+0x400], ebx
        mov dword ptr ds : [esi+0x404], ebx
        mov dword ptr ds : [esi+0x408], ebx
        mov dword ptr ds : [esi+0x40C], ebx
        call dword ptr ds : [public_6d644a8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x358], ebx
        mov dword ptr ds : [esi+0x354], ebx
        mov dword ptr ds : [esi+0x350], ebx
        mov dword ptr ds : [esi+0x37C], ebp
        mov dword ptr ds : [esi+0x36C], ebp
        mov dword ptr ds : [esi+0x35C], ebp
        mov dword ptr ds : [esi+0x378], ebx
        mov dword ptr ds : [esi+0x374], ebx
        mov dword ptr ds : [esi+0x370], ebx
        mov dword ptr ds : [esi+0x368], ebx
        mov dword ptr ds : [esi+0x364], ebx
        mov dword ptr ds : [esi+0x360], ebx
        pop edi
        mov dword ptr ds : [esi+0x344], ebx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d494f0)
    }
}
