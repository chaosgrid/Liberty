#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be14f0);
CLANG_FORWARD_PROC_SYMBOL(public_6be1ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6be2460);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be1524 _public_6be1524
#define public_6be152c _public_6be152c
#define public_6be1540 _public_6be1540
#define public_6be156a _public_6be156a
#define public_6be1570 _public_6be1570
#define public_6be15bf _public_6be15bf

PROC_DECLARE(0x6be14f0, internal_6be14f0, public_6be14f0);
extern "C" NAKED register_t __cdecl internal_6be14f0()
{
    __asm
    {
        sub esp, 0x14
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+8]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], esi
        call public_6be2460
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6be1524
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6be1524
        lea eax, ss:[esp+8]
        jmp public_6be152c
        public_6be1524 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6be152c : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0xC]
        je public_6be1540
        pop edi
        mov eax, 0x42
        pop esi
        add esp, 0x14
        ret 0xC
        public_6be1540 : nop
        push 0x14
        call public_6c09d26
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_6be156a
        mov dword ptr ds : [eax], ecx
        mov dl, byte ptr ss : [esp+0x20]
        mov esi, eax
        mov byte ptr ds : [eax+4], dl
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ss : [esp+8], esi
        jmp public_6be1570
        public_6be156a : nop
        mov dword ptr ss : [esp+8], ecx
        mov esi, ecx
        public_6be1570 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x24]
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [esi], eax
        xor eax, eax
        repne scasb
        push ebx
        not ecx
        push ebp
        dec ecx
        mov ebx, ecx
        push 1
        lea ebp, ds:[esi+4]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6c0b174]
        test al, al
        je public_6be15bf
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x2C]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+eax], 0
        public_6be15bf : nop
        mov ecx, dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        mov dword ptr ss : [esp+0x20], 0
        call public_6be1ba0
        mov ecx, dword ptr ss : [esp+0x1C]
        pop ebp
        pop ebx
        pop edi
        mov dword ptr ds : [ecx+0x10], esi
        xor eax, eax
        pop esi
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6be14f0)
    }
}

#undef public_6be1524
#undef public_6be152c
#undef public_6be1540
#undef public_6be156a
#undef public_6be1570
#undef public_6be15bf
