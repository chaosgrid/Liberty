#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6ec9b30);
CLANG_FORWARD_PROC_SYMBOL(public_6f156b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f159c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f682c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaf48);

#define public_6ec9b95 _public_6ec9b95
#define public_6ec9bd1 _public_6ec9bd1
#define public_6ec9bf5 _public_6ec9bf5
#define public_6ec9c06 _public_6ec9c06
#define public_6ec9c84 _public_6ec9c84
#define public_6ec9c8f _public_6ec9c8f
#define public_6ec9c91 _public_6ec9c91
#define public_6ec9cc0 _public_6ec9cc0
#define public_6ec9ccb _public_6ec9ccb
#define public_6ec9ccd _public_6ec9ccd
#define public_6ec9cdd _public_6ec9cdd
#define public_6ec9cec _public_6ec9cec
#define public_6ec9cf5 _public_6ec9cf5
#define public_6ec9d70 _public_6ec9d70
#define public_6ec9d7b _public_6ec9d7b
#define public_6ec9d7d _public_6ec9d7d
#define public_6ec9db3 _public_6ec9db3
#define public_6ec9dc2 _public_6ec9dc2
#define public_6ec9dcb _public_6ec9dcb

PROC_DECLARE(0x6ec9b30, internal_6ec9b30, public_6ec9b30);
extern "C" NAKED register_t __cdecl internal_6ec9b30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faaf48 @0x6ec9b32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaf48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x4C]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x58]
        push esi
        push edi
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x68]
        push ecx
        push ebp
        push edx
        call public_6f682c0
        fstp dword ptr ss : [esp+0x70]
        add esp, 0x10
        lea eax, ss:[esp+0x5C]
        push eax
        mov ecx, ebx
        call public_6f156b0
        xor edi, edi
        cmp eax, edi
        je public_6ec9c06
        cmp dword ptr ds : [eax+0x14C], edi
        je public_6ec9b95
        cmp dword ptr ds : [eax+0x154], 0xFFFFFFFF
        jne public_6ec9c06
        public_6ec9b95 : nop
        mov cl, byte ptr ss : [esp+0x5C]
        mov byte ptr ss : [esp+0x3C], cl
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ss : [esp+0x48], edi
        mov eax, dword ptr ds : [eax+0x154]
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        mov dword ptr ss : [esp+0x5C], edi
        call public_6f66220
        mov esi, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x4C]
        add esp, 8
        cmp esi, eax
        je public_6ec9bf5
        mov edi, dword ptr ss : [esp+0x60]
        public_6ec9bd1 : nop
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax+4]
        push edi
        push edi
        push ebp
        push eax
        call public_6f682c0
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x54]
        add esi, 4
        add esp, 0x10
        cmp esi, eax
        jne public_6ec9bd1
        mov esi, dword ptr ss : [esp+0x40]
        xor edi, edi
        public_6ec9bf5 : nop
        push esi
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call public_6fa8fe0
        add esp, 4
        public_6ec9c06 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, 0x3FFFFFFF
        je public_6ec9cf5
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x20], edi
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        test eax, 0xFDFF
        je public_6ec9cf5
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebx
        call public_6f159c0
        test eax, eax
        jne public_6ec9cf5
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call dword ptr ds : [public_6fb33f0]
        mov eax, dword ptr ds : [ebx+0x178]
        mov ecx, dword ptr ds : [ebx+0x17C]
        lea esi, ds:[ebx+0x174]
        add esp, 8
        cmp eax, ecx
        je public_6ec9c8f
        mov edx, dword ptr ss : [esp+0x10]
        public_6ec9c84 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ec9c91
        add eax, 4
        cmp eax, ecx
        jne public_6ec9c84
        public_6ec9c8f : nop
        mov eax, ecx
        public_6ec9c91 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x2C], eax
        jne public_6ec9cdd
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        mov ecx, esi
        call public_6eb5770
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        mov byte ptr ss : [esp+0x68], 1
        je public_6ec9ccb
        mov ecx, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6ec9cc0 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6ec9ccd
        add eax, 4
        cmp eax, esi
        jne public_6ec9cc0
        public_6ec9ccb : nop
        mov eax, esi
        public_6ec9ccd : nop
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        jmp public_6ec9cec
        public_6ec9cdd : nop
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x6C], 0
        push eax
        public_6ec9cec : nop
        lea ecx, ss:[esp+0x3C]
        call public_6fa6e80
        public_6ec9cf5 : nop
        test ebp, 0x3FFFFFFF
        je public_6ec9dcb
        lea ecx, ss:[esp+0x20]
        push ecx
        push ebp
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 8
        test eax, 0xFDFF
        je public_6ec9dcb
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebx
        call public_6f159c0
        test eax, eax
        jne public_6ec9dcb
        mov ecx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_6fb33f0]
        mov eax, dword ptr ds : [ebx+0x178]
        mov ecx, dword ptr ds : [ebx+0x17C]
        lea esi, ds:[ebx+0x174]
        add esp, 8
        cmp eax, ecx
        je public_6ec9d7b
        mov edx, dword ptr ss : [esp+0x14]
        public_6ec9d70 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ec9d7d
        add eax, 4
        cmp eax, ecx
        jne public_6ec9d70
        public_6ec9d7b : nop
        mov eax, ecx
        public_6ec9d7d : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], eax
        jne public_6ec9db3
        lea edx, ss:[esp+0x14]
        push edx
        push ecx
        mov ecx, esi
        call public_6eb5770
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x6C], 1
        call public_6eb5f30
        lea ecx, ss:[esp+0x68]
        push ecx
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], eax
        push edx
        jmp public_6ec9dc2
        public_6ec9db3 : nop
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x68], 0
        push ecx
        public_6ec9dc2 : nop
        lea ecx, ss:[esp+0x44]
        call public_6fa6e80
        public_6ec9dcb : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x60]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 0x10
        UNREACHABLE_TRAP(0x6ec9b30)
    }
}

#undef public_6ec9b95
#undef public_6ec9bd1
#undef public_6ec9bf5
#undef public_6ec9c06
#undef public_6ec9c84
#undef public_6ec9c8f
#undef public_6ec9c91
#undef public_6ec9cc0
#undef public_6ec9ccb
#undef public_6ec9ccd
#undef public_6ec9cdd
#undef public_6ec9cec
#undef public_6ec9cf5
#undef public_6ec9d70
#undef public_6ec9d7b
#undef public_6ec9d7d
#undef public_6ec9db3
#undef public_6ec9dc2
#undef public_6ec9dcb
