#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262630);
CLANG_FORWARD_PROC_SYMBOL(public_6262a10);
CLANG_FORWARD_PROC_SYMBOL(public_6262c00);
CLANG_FORWARD_PROC_SYMBOL(public_626c010);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_630fbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6311430);
CLANG_FORWARD_JUMP_SYMBOL(public_63963c1);

#define public_630fac6 _public_630fac6
#define public_630fad5 _public_630fad5
#define public_630faf9 _public_630faf9
#define public_630fb37 _public_630fb37
#define public_630fb67 _public_630fb67

PROC_DECLARE(0x630f9b0, internal_630f9b0, public_630f9b0);
extern "C" NAKED register_t __cdecl internal_630f9b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63963c1 @0x630f9b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63963c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_6311430
        mov al, byte ptr ss : [esp+0x48]
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x14], al
        call dword ptr ds : [public_63991b8]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x3C], ebx
        call public_6262630
        mov ebp, dword ptr ss : [esp+0x44]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebp
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_63991a4]
        push ebx
        push ebx
        push 3
        push ebx
        push 1
        push 0x80000000
        push ebp
        call dword ptr ds : [public_6399100]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], eax
        je public_630fad5
        push ebx
        push ebx
        push ebx
        push 2
        push ebx
        push eax
        call dword ptr ds : [public_63990d0]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        je public_630fad5
        mov ecx, dword ptr ss : [esp+0x20]
        push ebx
        push ecx
        call dword ptr ds : [public_63990d4]
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        push ebx
        push ebx
        push 4
        push edx
        mov dword ptr ss : [esp+0x40], eax
        call dword ptr ds : [public_6399144]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x28], eax
        je public_630fad5
        push ebx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x48], 1
        lea ebp, ds:[esi+0x1428]
        call public_6262a10
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_626c010
        test al, al
        je public_630fac6
        mov eax, dword ptr ss : [esp+0x48]
        cmp dword ptr ds : [eax], 0x494E4942
        jne public_630fac6
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, dword ptr ss : [esp+0x2C]
        jb public_630fb37
        public_630fac6 : nop
        push ebx
        lea ecx, ss:[esp+0x14]
        call public_6262a10
        jmp public_630fb67
        public_630fad5 : nop
        lea ecx, ss:[esp+0x10]
        call public_6262630
        cmp byte ptr ss : [esp+0x48], bl
        mov byte ptr ss : [esp+0x44], bl
        je public_630faf9
        mov edx, dword ptr ds : [public_6399058]
        push ebp
        push 0xC8
        call dword ptr ds : [edx]
        add esp, 8
        public_630faf9 : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x3C], 1
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ss : [esp+0x34]
        mov al, byte ptr ss : [esp+0x44]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 8
        public_630fb37 : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, ebp
        call public_6262c00
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_630fbd0
        cmp al, bl
        je public_630fb67
        mov byte ptr ds : [esi+0x1564], 1
        jmp public_630faf9
        public_630fb67 : nop
        mov byte ptr ds : [esi+0x1564], bl
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_63991a8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, edx
        cmp eax, ebx
        mov dword ptr ds : [esi+0x18], edx
        mov dword ptr ds : [esi+0x20], ecx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x24], ebx
        mov byte ptr ds : [esi+0x28], bl
        je public_630faf9
        mov dword ptr ds : [esi+0x20], ebx
        jmp public_630faf9
        UNREACHABLE_TRAP(0x630f9b0)
    }
}

#undef public_630fac6
#undef public_630fad5
#undef public_630faf9
#undef public_630fb37
#undef public_630fb67
