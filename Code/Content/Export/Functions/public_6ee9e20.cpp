#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee9e20);
CLANG_FORWARD_PROC_SYMBOL(public_6eec550);
CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6ee9ea0 _public_6ee9ea0
#define public_6ee9f67 _public_6ee9f67
#define public_6ee9f77 _public_6ee9f77
#define public_6ee9f7a _public_6ee9f7a
#define public_6ee9f7e _public_6ee9f7e
#define public_6ee9fa8 _public_6ee9fa8
#define public_6ee9fe4 _public_6ee9fe4
#define public_6ee9fed _public_6ee9fed
#define public_6eea01a _public_6eea01a
#define public_6eea029 _public_6eea029
#define public_6eea054 _public_6eea054
#define public_6eea073 _public_6eea073

PROC_DECLARE(0x6ee9e20, internal_6ee9e20, public_6ee9e20);
extern "C" NAKED register_t __cdecl internal_6ee9e20()
{
    __asm
    {
        sub esp, 0x180
        push ebx
        mov ebx, dword ptr ss : [esp+0x188]
        lea eax, ss:[esp+0x10]
        push eax
        push 0x200100
        push 0xBF800000
        mov dword ptr ss : [esp+0x40], ecx
        lea ecx, ss:[esp+0x44]
        push ecx
        push 0x40
        lea edx, ss:[esp+0x98]
        push edx
        push ebx
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        call dword ptr ds : [public_6fb3460]
        push ebx
        call public_6f75f30
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x20
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0
        jbe public_6eea073
        push ebp
        push esi
        lea esi, ss:[esp+0x8C]
        push edi
        mov dword ptr ss : [esp+0x18], esi
        lea ebx, ds:[ebx]
        public_6ee9ea0 : nop
        mov ecx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x3C]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x44]
        add esp, 8
        test eax, 0x200100
        je public_6eea054
        test al, 2
        jne public_6eea054
        lea edx, ss:[esp+0x38]
        push edx
        push esi
        call dword ptr ds : [public_6fb3428]
        lea eax, ss:[esp+0x40]
        push eax
        call public_6eac0c0
        add esp, 0xC
        test eax, eax
        je public_6eea054
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        test al, al
        je public_6eea054
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3664]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x2C]
        push eax
        push 0x7F0000
        lea ecx, ss:[esp+0x74]
        push ecx
        push 0x451C4000
        push edx
        call dword ptr ds : [public_6fb345c]
        mov eax, dword ptr ss : [esp+0x40]
        push 1
        push eax
        call dword ptr ds : [public_6fb3458]
        mov ecx, dword ptr ss : [esp+0x68]
        add esp, 0x28
        push ebx
        add ecx, 4
        call public_6eec550
        mov edx, dword ptr ss : [esp+0x20]
        mov edi, eax
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], 0
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ecx
        mov ebp, eax
        mov al, 1
        je public_6ee9f7e
        public_6ee9f67 : nop
        cmp edx, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov ebp, esi
        je public_6ee9f77
        mov esi, dword ptr ds : [esi]
        jmp public_6ee9f7a
        public_6ee9f77 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6ee9f7a : nop
        cmp esi, ecx
        jne public_6ee9f67
        public_6ee9f7e : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6ee9fa8
        lea edx, ss:[esp+0x11]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x25], 1
        call public_6f7c9e0
        push eax
        jmp public_6eea029
        public_6ee9fa8 : nop
        test al, al
        mov dword ptr ss : [esp+0x14], ebp
        je public_6ee9fed
        lea edx, ss:[esp+0x50]
        push edx
        mov ecx, edi
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ee9fe4
        lea edx, ss:[esp+0x13]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x27], 1
        call public_6f7c9e0
        push eax
        jmp public_6eea029
        public_6ee9fe4 : nop
        lea ecx, ss:[esp+0x14]
        call public_6f00610
        public_6ee9fed : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ss : [esp+0x30]
        jae public_6eea01a
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        push ebp
        push esi
        lea eax, ss:[esp+0x64]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 1
        call public_6f7c9e0
        push eax
        jmp public_6eea029
        public_6eea01a : nop
        lea ecx, ss:[esp+0x12]
        push ecx
        lea edx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x16], 0
        push edx
        public_6eea029 : nop
        lea ecx, ss:[esp+0x2C]
        call public_6fa6e80
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x4C]
        call public_6fa6e80
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [ecx+0x10], eax
        mov esi, edx
        public_6eea054 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc eax
        add esi, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x18], esi
        jb public_6ee9ea0
        pop edi
        pop esi
        pop ebp
        public_6eea073 : nop
        pop ebx
        add esp, 0x180
        ret 4
        UNREACHABLE_TRAP(0x6ee9e20)
    }
}

#undef public_6ee9ea0
#undef public_6ee9f67
#undef public_6ee9f77
#undef public_6ee9f7a
#undef public_6ee9f7e
#undef public_6ee9fa8
#undef public_6ee9fe4
#undef public_6ee9fed
#undef public_6eea01a
#undef public_6eea029
#undef public_6eea054
#undef public_6eea073
