#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62daa30);
CLANG_FORWARD_PROC_SYMBOL(public_62e6260);
CLANG_FORWARD_PROC_SYMBOL(public_62e6af0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9330);
CLANG_FORWARD_PROC_SYMBOL(public_62ebbc0);
CLANG_FORWARD_PROC_SYMBOL(public_62ed570);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_63953ab);

#define public_62e62f2 _public_62e62f2
#define public_62e63de _public_62e63de

PROC_DECLARE(0x62e6260, internal_62e6260, public_62e6260);
extern "C" NAKED register_t __cdecl internal_62e6260()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63953ab @0x62e6262*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63953ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+8]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        lea ecx, ds:[esi+0x34]
        mov dword ptr ss : [esp+0x20], 1
        mov dword ptr ds : [esi+0x18], ebx
        call public_62e6af0
        lea ecx, ds:[esi+0x12C]
        mov byte ptr ss : [esp+0x20], 2
        call public_62e9330
        lea ecx, ds:[esi+0x1364]
        mov byte ptr ss : [esp+0x20], 3
        call public_62ebbc0
        lea ecx, ds:[esi+0x142C]
        mov byte ptr ss : [esp+0x20], 4
        call public_62ed570
        lea ebp, ds:[esi+0x1498]
        lea ecx, ss:[ebp+4]
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        mov eax, ebx
        cmp eax, ebx
        mov byte ptr ss : [esp+0x20], 6
        je public_62e62f2
        push ebx
        call public_6341610
        public_62e62f2 : nop
        mov ax, word ptr ds : [public_63a4aa4]
        mov word ptr ss : [ebp+0xC], ax
        mov dword ptr ds : [esi+0x14B4], ebx
        mov ebp, offset public_63a07d8
        mov dword ptr ds : [esi+0x14B0], ebp
        mov cx, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [esi+0x14BC], cx
        mov dword ptr ds : [esi+0x14C0], ebx
        mov dword ptr ds : [esi+0x14D0], ebx
        mov dword ptr ds : [esi+0x14B0], offset public_63a07cc
        mov edx, 0x40000000
        mov dword ptr ds : [esi+0x14C4], edx
        mov ecx, 0x40A00000
        mov dword ptr ds : [esi+0x14C8], ecx
        mov eax, 0x3EB33333
        mov dword ptr ds : [esi+0x14CC], eax
        mov dword ptr ds : [esi+0x14D4], ebp
        mov dword ptr ds : [esi+0x14D8], ebx
        mov bp, word ptr ds : [public_63a4aa4]
        mov dword ptr ds : [esi+0x14EC], ecx
        mov word ptr ds : [esi+0x14E0], bp
        mov dword ptr ds : [esi+0x14E4], ebx
        mov dword ptr ds : [esi+0x14E8], edx
        mov dword ptr ds : [esi+0x14F0], eax
        mov dword ptr ds : [esi+0x14F4], ebx
        mov dword ptr ds : [esi+0x14D4], offset public_63a07c0
        mov dword ptr ds : [esi+0x14A8], offset public_63a07b8
        lea ecx, ds:[esi+0x1584]
        mov byte ptr ss : [esp+0x20], 7
        mov dword ptr ds : [esi+0x157C], ebx
        mov dword ptr ds : [esi+0x1580], ebx
        mov byte ptr ds : [esi+0x1579], bl
        mov byte ptr ds : [esi+0x1578], bl
        mov byte ptr ds : [esi+0x157A], bl
        mov byte ptr ds : [esi+0x157B], bl
        call public_62daa30
        cmp dword ptr ds : [edi], ebx
        je public_62e63de
        push ebx
        mov ecx, edi
        call public_6341610
        public_62e63de : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x14], bl
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62e6260)
    }
}

#undef public_62e62f2
#undef public_62e63de
