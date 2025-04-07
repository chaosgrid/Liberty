#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ba50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c100);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c350);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c400);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c520);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dad0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58ca1);

#define public_6f390e6 _public_6f390e6
#define public_6f39212 _public_6f39212
#define public_6f39215 _public_6f39215

PROC_DECLARE(0x6f38fb0, internal_6f38fb0, public_6f38fb0);
extern "C" NAKED register_t __cdecl internal_6f38fb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f58ca1 @0x6f38fb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58ca1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x80
        push ebx
        mov ebx, dword ptr ss : [esp+0x98]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x9C]
        cmp ebx, dword ptr ds : [esi+0xA0]
        jae public_6f39212
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        lea ebp, ds:[esi+0xA4]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], ebx
        call public_6f3cbb0
        mov esi, dword ptr ds : [esi+0xA8]
        cmp esi, dword ptr ss : [esp+0x18]
        je public_6f39212
        mov dl, byte ptr ss : [esp+0xF]
        push edi
        push 0
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x44], dl
        call public_6f3c520
        mov esi, dword ptr ss : [esp+0xA8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ss:[esp+0x48]
        call public_6f3dad0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        xor edi, edi
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0xA0], edi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], edi
        call public_6f3ba50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x10]
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x28]
        add ecx, 0x70
        push eax
        call public_6f3c350
        push 1
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x9C], 0xFFFFFFFF
        call public_6f3c520
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], edi
        call public_6f3ba50
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+0x24]
        add eax, 0x70
        mov eax, dword ptr ds : [eax+4]
        cmp edx, eax
        je public_6f390e6
        mov esi, dword ptr ss : [esp+0xAC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ds:[edx+0x1C]
        call dword ptr ds : [public_6f5a030]
        xor eax, eax
        pop edi
        jmp public_6f39215
        public_6f390e6 : nop
        mov al, byte ptr ss : [esp+0x13]
        push edi
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x64], al
        call dword ptr ds : [public_6f5a02c]
        mov edx, dword ptr ss : [esp+0xAC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x68]
        call dword ptr ds : [public_6f5a030]
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x50], cl
        push 0
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x9C], 1
        call public_6f3c520
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ss:[esp+0x58]
        call public_6f3dad0
        lea edx, ss:[esp+0x50]
        push edx
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x9C], 2
        call public_6f3c400
        lea eax, ss:[esp+0x60]
        push eax
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0x9C], 3
        call dword ptr ds : [public_6f5a048]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0xA0], 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], 0
        call public_6f3ba50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x10]
        lea eax, ss:[esp+0x70]
        push eax
        lea edx, ss:[esp+0x3C]
        add ecx, 0x70
        push edx
        call public_6f3c100
        push 1
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0x9C], 5
        call dword ptr ds : [public_6f5a02c]
        push 1
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x9C], 2
        call public_6f3c520
        push 1
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x9C], 1
        call public_6f3c520
        push 1
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x9C], 0xFFFFFFFF
        call dword ptr ds : [public_6f5a02c]
        xor eax, eax
        pop edi
        jmp public_6f39215
        public_6f39212 : nop
        or eax, 0xFFFFFFFF
        public_6f39215 : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x8C
        ret 0x10
        UNREACHABLE_TRAP(0x6f38fb0)
    }
}

#undef public_6f390e6
#undef public_6f39212
#undef public_6f39215
