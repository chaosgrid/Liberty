#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ec39a5 _public_6ec39a5
#define public_6ec39b0 _public_6ec39b0
#define public_6ec39d5 _public_6ec39d5
#define public_6ec39fa _public_6ec39fa
#define public_6ec3a13 _public_6ec3a13
#define public_6ec3a17 _public_6ec3a17
#define public_6ec3a3e _public_6ec3a3e
#define public_6ec3a56 _public_6ec3a56
#define public_6ec3a73 _public_6ec3a73
#define public_6ec3ab2 _public_6ec3ab2
#define public_6ec3ad1 _public_6ec3ad1
#define public_6ec3af6 _public_6ec3af6
#define public_6ec3b0d _public_6ec3b0d
#define public_6ec3b29 _public_6ec3b29
#define public_6ec3b50 _public_6ec3b50
#define public_6ec3b74 _public_6ec3b74
#define public_6ec3b9a _public_6ec3b9a
#define public_6ec3bac _public_6ec3bac

PROC_DECLARE(0x6ec3970, internal_6ec3970, public_6ec3970);
extern "C" NAKED register_t __cdecl internal_6ec3970()
{
    __asm
    {
        sub esp, 0x84
        push ebx
        mov ebx, dword ptr ss : [esp+0x8C]
        push edi
        mov edi, ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], 0
        mov byte ptr ds : [edi+0x44], 1
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ec3bac
        push ebp
        push esi
        jmp public_6ec39b0
        public_6ec39a5 : nop
        mov edi, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
/*FIXUP public_6ec39b0 : nop
        push offset public_6fb5348 @0x6ec39b0*/
  FIXUP public_6ec39b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5348
        mov ecx, ebx
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ec3b9a
        mov esi, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ds : [esi]
        add edi, 0x24
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6ec39fa
        public_6ec39d5 : nop
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, edi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6ec39d5
        public_6ec39fa : nop
        xor ebp, ebp
        push ebp
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec3b29
        jmp public_6ec3a17
        public_6ec3a13 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6ec3a17 : nop
        cmp ebp, 0x32
        jge public_6ec3b29
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        mov byte ptr ss : [esp+0x2C], 0
        jne public_6ec3a3e
        mov dword ptr ss : [esp+0x28], eax
        mov byte ptr ss : [esp+0x2C], al
        jmp public_6ec3a73
        public_6ec3a3e : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6ec3a56
        mov eax, 0x2F
        public_6ec3a56 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x2C]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x2C], 0
        mov dword ptr ss : [esp+0x28], eax
        public_6ec3a73 : nop
        mov ecx, 0xD
        lea esi, ss:[esp+0x28]
        lea edi, ss:[esp+0x5C]
        rep movsd
        inc ebp
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [esp+0x90], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+0x28]
        mov edi, dword ptr ds : [esi+4]
        add eax, 0x24
        push 0x40
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6ec3ab2
        mov edi, eax
        public_6ec3ab2 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6ec3ad1
        mov ecx, 0xE
        lea esi, ss:[esp+0x5C]
        mov edi, eax
        rep movsd
        public_6ec3ad1 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+0x2C]
        lea eax, ds:[edx+0x24]
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        test dword ptr ss : [esp+0x18], 0x3FFFFFFF
        jne public_6ec3af6
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [esp+0x18], eax
        public_6ec3af6 : nop
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6fb3020]
        cmp dword ptr ss : [esp+0x18], eax
        je public_6ec3b0d
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+0x44], 0
        public_6ec3b0d : nop
        mov eax, dword ptr ss : [esp+0x10]
        add eax, 2
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6ec3a13
        public_6ec3b29 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[ecx+0x18]
        add ecx, 0x24
        cmp eax, ecx
        je public_6ec3b9a
        mov ebp, dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        mov ebx, dword ptr ds : [ecx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x10], ebx
        je public_6ec3b74
        lea ebx, ds:[ebx]
        public_6ec3b50 : nop
        cmp edi, ebx
        je public_6ec3b74
        lea ecx, ds:[edi+0xC]
        lea ebx, ds:[esi+8]
        push ecx
        mov ecx, ebx
        call public_6ed0160
        mov edx, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [ebx+0x34], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        mov edi, dword ptr ds : [edi]
        mov ebx, dword ptr ss : [esp+0x10]
        jne public_6ec3b50
        public_6ec3b74 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        lea eax, ss:[esp+0x28]
        lea esi, ds:[ecx+0x18]
        push eax
        mov ecx, esi
        call public_6fa8370
        push ebx
        push edi
        push ebp
        mov ecx, esi
        call public_6ed0fa0
        mov ebx, dword ptr ss : [esp+0x98]
        public_6ec3b9a : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ec39a5
        pop esi
        pop ebp
        public_6ec3bac : nop
        pop edi
        pop ebx
        add esp, 0x84
        ret 4
        UNREACHABLE_TRAP(0x6ec3970)
    }
}

#undef public_6ec39a5
#undef public_6ec39b0
#undef public_6ec39d5
#undef public_6ec39fa
#undef public_6ec3a13
#undef public_6ec3a17
#undef public_6ec3a3e
#undef public_6ec3a56
#undef public_6ec3a73
#undef public_6ec3ab2
#undef public_6ec3ad1
#undef public_6ec3af6
#undef public_6ec3b0d
#undef public_6ec3b29
#undef public_6ec3b50
#undef public_6ec3b74
#undef public_6ec3b9a
#undef public_6ec3bac
