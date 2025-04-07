#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8d70);
CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d820);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d920);
CLANG_FORWARD_PROC_SYMBOL(public_6f6dd80);
CLANG_FORWARD_PROC_SYMBOL(public_6f6df00);
CLANG_FORWARD_PROC_SYMBOL(public_6f6e110);
CLANG_FORWARD_PROC_SYMBOL(public_6f6e420);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f73990);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6e1c4 _public_6f6e1c4
#define public_6f6e1e2 _public_6f6e1e2
#define public_6f6e20c _public_6f6e20c
#define public_6f6e24c _public_6f6e24c
#define public_6f6e269 _public_6f6e269
#define public_6f6e285 _public_6f6e285
#define public_6f6e31e _public_6f6e31e
#define public_6f6e330 _public_6f6e330
#define public_6f6e34c _public_6f6e34c
#define public_6f6e35b _public_6f6e35b
#define public_6f6e366 _public_6f6e366
#define public_6f6e380 _public_6f6e380
#define public_6f6e387 _public_6f6e387
#define public_6f6e39d _public_6f6e39d
#define public_6f6e3c0 _public_6f6e3c0
#define public_6f6e3d9 _public_6f6e3d9
#define public_6f6e3e1 _public_6f6e3e1
#define public_6f6e3ee _public_6f6e3ee
#define public_6f6e3fa _public_6f6e3fa
#define public_6f6e400 _public_6f6e400
#define public_6f6e405 _public_6f6e405
#define public_6f6e410 _public_6f6e410

PROC_DECLARE(0x6f6e110, internal_6f6e110, public_6f6e110);
extern "C" NAKED register_t __cdecl internal_6f6e110()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [ebp+4]
        push esi
        push edi
        lea eax, ss:[esp+0x18]
        lea ebx, ss:[ebp+4]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        mov dl, byte ptr ss : [esp+0x20]
        and dl, 0x20
        neg dl
        lea ecx, ss:[esp+0x70]
        lea esi, ss:[ebp+8]
        sbb edx, edx
        xor eax, eax
        mov al, byte ptr ss : [ebp+0xC]
        neg edx
        dec edx
        mov dword ptr ss : [esp+0x70], edx
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        push ebx
        push ebp
        push edx
        call public_6f6d820
        mov edi, eax
        push esi
        mov dword ptr ss : [esp+0x30], edi
        call public_6f75f30
        add esp, 0x20
        cmp edi, 5
        mov dword ptr ss : [esp+0x14], eax
        je public_6f6e20c
        xor ecx, ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x30], ecx
        mov byte ptr ss : [esp+0x38], cl
        mov ecx, dword ptr ss : [esp+0x68]
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], 5
        mov dword ptr ss : [esp+0x1C], offset public_6fbbd70
        je public_6f6e1c4
        lea eax, ss:[esp+0x3C]
        push eax
        push ecx
        push ebx
        call dword ptr ds : [public_6fb3564]
        mov ecx, dword ptr ss : [esp+0x68]
        add esp, 0xC
        mov dword ptr ss : [esp+0x30], ecx
        jmp public_6f6e1e2
        public_6f6e1c4 : nop
        mov edx, dword ptr ss : [ebp]
        push edx
        mov ecx, eax
        call public_6f73930
        add eax, 0x128
        push eax
        push ebx
        call public_6f6e420
        add esp, 8
        mov dword ptr ss : [esp+0x30], eax
        public_6f6e1e2 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x28], ecx
        push eax
        mov ecx, offset public_6fd1c08
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x38], edi
        call public_6ee8d70
        fstp st(0)
        public_6f6e20c : nop
        cmp edi, 4
        jne public_6f6e285
        mov edx, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x70]
        push edi
        push eax
        push ebx
        push ebp
        call dword ptr ds : [public_6fb358c]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x18
        test eax, 0xC40
        jne public_6f6e269
        test eax, 0x120
        mov byte ptr ss : [esp+0x10], 0
        je public_6f6e24c
        mov byte ptr ss : [esp+0x10], 1
        public_6f6e24c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push 0
        push ebp
        push esi
        call public_6f6d920
        add esp, 0x10
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 4
        public_6f6e269 : nop
        lea edx, ss:[esp+0x68]
        push edx
        push ebx
        push ebp
        push esi
        call public_6f6dd80
        add esp, 0x10
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 4
        public_6f6e285 : nop
        cmp edi, 3
        jne public_6f6e3d9
        xor eax, eax
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x4C], al
        call public_6efec10
        fstp qword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x40]
        push ecx
        mov byte ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x44], eax
        mov byte ptr ss : [esp+0x50], 0
        call public_6f49bc0
        add esp, 4
        test eax, eax
        jne public_6f6e35b
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push eax
        call public_6f6df00
        add esp, 8
        test al, al
        jne public_6f6e35b
        mov ecx, dword ptr ss : [esp+0x40]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        call public_6f73990
        test eax, eax
        je public_6f6e34c
        mov eax, dword ptr ds : [eax+0x1B4]
        test eax, eax
        je public_6f6e31e
        cmp eax, 1
        jne public_6f6e34c
        public_6f6e31e : nop
        mov eax, dword ptr ds : [public_6fd1bbc]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f6e380
        lea esp, ss:[esp]
        public_6f6e330 : nop
        lea edx, ds:[esi+0xC]
        push edx
        call public_6f49bc0
        add esp, 4
        test eax, eax
        je public_6f6e380
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6fd1bbc]
        jne public_6f6e330
        jmp public_6f6e380
        public_6f6e34c : nop
        mov esi, dword ptr ds : [public_6fd1bbc]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], edx
        jmp public_6f6e387
        public_6f6e35b : nop
        mov eax, dword ptr ds : [public_6fd1bbc]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f6e380
        public_6f6e366 : nop
        lea edx, ds:[esi+0xC]
        push edx
        call public_6f49bc0
        add esp, 4
        test eax, eax
        je public_6f6e380
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6fd1bbc]
        jne public_6f6e366
        public_6f6e380 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], eax
        public_6f6e387 : nop
        push 0x30
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], esi
        jne public_6f6e39d
        mov ecx, eax
        public_6f6e39d : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f6e3c0
        lea esi, ss:[esp+0x3C]
        mov edi, eax
        mov ecx, 0xA
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6f6e3c0 : nop
        mov eax, dword ptr ds : [public_6fd1bc0]
        inc eax
        push 3
        mov dword ptr ds : [public_6fd1bc0], eax
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        push 0xFFFFFFFF
        jmp public_6f6e405
        public_6f6e3d9 : nop
        cmp edi, 2
        jne public_6f6e3e1
        push edi
        jmp public_6f6e400
        public_6f6e3e1 : nop
        cmp edi, 1
        jne public_6f6e3ee
        mov eax, dword ptr ss : [esp+0x68]
        push edi
        push eax
        jmp public_6f6e405
        public_6f6e3ee : nop
        test edi, edi
        jne public_6f6e3fa
        mov ecx, dword ptr ss : [esp+0x68]
        push edi
        push ecx
        jmp public_6f6e405
        public_6f6e3fa : nop
        cmp edi, 5
        jne public_6f6e410
        push edi
        public_6f6e400 : nop
        mov edx, dword ptr ss : [esp+0x6C]
        push edx
        public_6f6e405 : nop
        push ebx
        push ebp
        call dword ptr ds : [public_6fb358c]
        add esp, 0x10
        public_6f6e410 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x6f6e110)
    }
}

#undef public_6f6e1c4
#undef public_6f6e1e2
#undef public_6f6e20c
#undef public_6f6e24c
#undef public_6f6e269
#undef public_6f6e285
#undef public_6f6e31e
#undef public_6f6e330
#undef public_6f6e34c
#undef public_6f6e35b
#undef public_6f6e366
#undef public_6f6e380
#undef public_6f6e387
#undef public_6f6e39d
#undef public_6f6e3c0
#undef public_6f6e3d9
#undef public_6f6e3e1
#undef public_6f6e3ee
#undef public_6f6e3fa
#undef public_6f6e400
#undef public_6f6e405
#undef public_6f6e410
