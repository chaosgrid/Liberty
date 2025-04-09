#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41bd10);
CLANG_FORWARD_PROC_SYMBOL(public_46d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_529e10);
CLANG_FORWARD_PROC_SYMBOL(public_52a7d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c03ed);

#define public_52a840 _public_52a840
#define public_52a8a2 _public_52a8a2
#define public_52a8a4 _public_52a8a4
#define public_52a8e7 _public_52a8e7
#define public_52a8ef _public_52a8ef
#define public_52a90e _public_52a90e
#define public_52a910 _public_52a910
#define public_52a922 _public_52a922
#define public_52a991 _public_52a991
#define public_52a9a2 _public_52a9a2
#define public_52a9b7 _public_52a9b7
#define public_52a9dc _public_52a9dc
#define public_52aa39 _public_52aa39
#define public_52aa44 _public_52aa44
#define public_52aa53 _public_52aa53
#define public_52aa69 _public_52aa69
#define public_52aa9f _public_52aa9f

PROC_DECLARE(0x52a7d0, internal_52a7d0, public_52a7d0);
extern "C" NAKED register_t __cdecl internal_52a7d0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5c03ed @0x52a7d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c03ed
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1588
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ss : [esp+0x15A8]
        xor edi, edi
        push edi
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x15A8], edi
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_52a922
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c6054]
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c688c]
        test al, al
        jne public_52a922
        nop 
/*FIXUP public_52a840 : nop
        push offset public_5dd188 @0x52a840*/
  FIXUP public_52a840 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd188
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_52aa9f
        push 0x38
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, edi
        mov byte ptr ss : [esp+0x15A0], 1
        je public_52a8a2
/*FIXUP push offset public_5c865c @0x52a873*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        call dword ptr ds : [public_5c6020]
        add esp, 4
        push 0xBF800000
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [public_5c6888]
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi], offset public_5dd328
        jmp public_52a8a4
        public_52a8a2 : nop
        xor esi, esi
        public_52a8a4 : nop
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x15A4], 0
        call public_529e10
        test al, al
        je public_52a910
        mov ebx, dword ptr ss : [ebp+4]
        lea edi, ds:[esi+4]
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        call public_41bd10
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        je public_52a8e7
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_52a8e7
        lea eax, ss:[esp+0x10]
        jmp public_52a8ef
        public_52a8e7 : nop
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        public_52a8ef : nop
        cmp dword ptr ds : [eax], ebx
        jne public_52a90e
        mov edi, dword ptr ds : [edi]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], esi
        call public_46d6d0
        public_52a90e : nop
        xor edi, edi
        public_52a910 : nop
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c688c]
        test al, al
        je public_52a840
        public_52a922 : nop
        lea edx, ss:[esp+0x1458]
        mov dword ptr ss : [esp+0x15A0], 2
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        lea ecx, ss:[esp+0x1460]
        mov byte ptr ss : [esp+0x15A8], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1468], 0xFFFFFFFF
        mov ebx, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_52a9b7
        cmp dword ptr ss : [esp+0x146C], edi
        je public_52a9a2
        mov eax, dword ptr ss : [esp+0x1470]
        cmp eax, edi
        je public_52a991
        push eax
        call ebx
        mov dword ptr ss : [esp+0x1470], edi
        mov dword ptr ss : [esp+0x1474], edi
        public_52a991 : nop
        mov edx, dword ptr ss : [esp+0x146C]
        push edx
        call esi
        mov dword ptr ss : [esp+0x146C], edi
        public_52a9a2 : nop
        mov eax, dword ptr ss : [esp+0x1468]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1468], 0xFFFFFFFF
        public_52a9b7 : nop
        mov eax, dword ptr ss : [esp+0x1470]
        cmp eax, edi
        mov ebp, dword ptr ds : [public_5c71d8]
        je public_52a9dc
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x1470], edi
        mov dword ptr ss : [esp+0x1474], edi
        public_52a9dc : nop
        push 1
        lea ecx, ss:[esp+0x145C]
        mov dword ptr ss : [esp+0x147C], edi
        mov byte ptr ss : [esp+0x15A4], 2
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push edi
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x15A8], 4
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x40], 0xFFFFFFFF
        je public_52aa53
        cmp dword ptr ss : [esp+0x44], edi
        je public_52aa44
        mov eax, dword ptr ss : [esp+0x48]
        cmp eax, edi
        je public_52aa39
        push eax
        call ebx
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x4C], edi
        public_52aa39 : nop
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        call esi
        mov dword ptr ss : [esp+0x44], edi
        public_52aa44 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        public_52aa53 : nop
        mov eax, dword ptr ss : [esp+0x48]
        cmp eax, edi
        je public_52aa69
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x4C], edi
        public_52aa69 : nop
        push 1
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x54], edi
        mov dword ptr ss : [esp+0x15A4], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x1598]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1594
        ret 4
        public_52aa9f : nop
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c6054]
        jmp public_52a910
        UNREACHABLE_TRAP(0x52a7d0)
    }
}

#undef public_52a840
#undef public_52a8a2
#undef public_52a8a4
#undef public_52a8e7
#undef public_52a8ef
#undef public_52a90e
#undef public_52a910
#undef public_52a922
#undef public_52a991
#undef public_52a9a2
#undef public_52a9b7
#undef public_52a9dc
#undef public_52aa39
#undef public_52aa44
#undef public_52aa53
#undef public_52aa69
#undef public_52aa9f
