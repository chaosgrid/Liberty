#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1010);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

#define public_6ec3ff5 _public_6ec3ff5
#define public_6ec4046 _public_6ec4046
#define public_6ec4060 _public_6ec4060
#define public_6ec408a _public_6ec408a
#define public_6ec409e _public_6ec409e
#define public_6ec4129 _public_6ec4129
#define public_6ec4158 _public_6ec4158
#define public_6ec4167 _public_6ec4167
#define public_6ec416c _public_6ec416c
#define public_6ec4190 _public_6ec4190
#define public_6ec41b4 _public_6ec41b4
#define public_6ec41d9 _public_6ec41d9
#define public_6ec41ec _public_6ec41ec

PROC_DECLARE(0x6ec3fd0, internal_6ec3fd0, public_6ec3fd0);
extern "C" NAKED register_t __cdecl internal_6ec3fd0()
{
    __asm
    {
        sub esp, 0xC0
        push esi
        mov esi, dword ptr ss : [esp+0xC8]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ec41ec
        push ebx
        push ebp
        push edi
/*FIXUP public_6ec3ff5 : nop
        push offset public_6fb5334 @0x6ec3ff5*/
  FIXUP public_6ec3ff5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5334
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ec41d9
        mov eax, dword ptr ss : [esp+0x10]
        lea ebp, ds:[eax+0x24]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebp
        call public_6fa8370
        xor edi, edi
        push edi
        mov ecx, esi
        xor ebx, ebx
        call dword ptr ds : [public_6fb3048]
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], edi
        mov byte ptr ss : [esp+0x24], bl
        jne public_6ec4046
        mov dword ptr ss : [esp+0x20], edi
        jmp public_6ec4167
        public_6ec4046 : nop
        push eax
        lea edx, ss:[esp+0x28]
        push 0x40
        push edx
        call public_6ea9f40
        add esp, 0xC
        cmp eax, edi
        je public_6ec416c
        mov edi, edi
        public_6ec4060 : nop
        cmp ebx, 0x32
        jge public_6ec416c
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        cmp eax, edi
        mov dword ptr ss : [esp+0x64], edi
        mov byte ptr ss : [esp+0x68], 0
        jne public_6ec408a
        mov dword ptr ss : [esp+0x64], edi
        mov byte ptr ss : [esp+0x68], 0
        jmp public_6ec409e
        public_6ec408a : nop
        push eax
        lea eax, ss:[esp+0x6C]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x64], eax
        public_6ec409e : nop
        lea ecx, ds:[ebx+1]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        call public_6fa9130
        mov ecx, 0xD
        lea esi, ss:[esp+0x64]
        lea edi, ss:[esp+0x98]
        rep movsd
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0xCC], eax
        mov edx, dword ptr ds : [esi+4]
        push edx
        push esi
        mov ecx, ebp
        call public_6ed1010
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x98]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6ed2dc0
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0xDC]
        add esp, 8
        add ebx, 2
        inc esi
        push ebx
        mov dword ptr ss : [ebp+8], esi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        je public_6ec4158
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6ec4129
        mov eax, 0x3F
        public_6ec4129 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x24]
        rep movsd
        mov ecx, edx
        and ecx, 3
        test eax, eax
        rep movsb
        mov esi, dword ptr ss : [esp+0xD4]
        mov byte ptr ss : [esp+eax+0x24], 0
        mov dword ptr ss : [esp+0x20], eax
        je public_6ec416c
        xor edi, edi
        jmp public_6ec4060
        public_6ec4158 : nop
        mov esi, dword ptr ss : [esp+0xD4]
        mov dword ptr ss : [esp+0x20], 0
        public_6ec4167 : nop
        mov byte ptr ss : [esp+0x24], 0
        public_6ec416c : nop
        mov eax, dword ptr ss : [esp+0x10]
        add eax, 0x18
        cmp eax, ebp
        je public_6ec41d9
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov ebp, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x14], ebp
        je public_6ec41b4
        lea ebx, ds:[ebx]
        public_6ec4190 : nop
        cmp ebx, ebp
        je public_6ec41b4
        lea ecx, ds:[ebx+0xC]
        lea ebp, ds:[esi+8]
        push ecx
        mov ecx, ebp
        call public_6ed0160
        mov edx, dword ptr ds : [ebx+0x3C]
        mov dword ptr ss : [ebp+0x34], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        mov ebx, dword ptr ds : [ebx]
        mov ebp, dword ptr ss : [esp+0x14]
        jne public_6ec4190
        public_6ec41b4 : nop
        push edi
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ds:[esi+0x18]
        call public_6fa8370
        push ebp
        push ebx
        push edi
        lea ecx, ds:[esi+0x18]
        call public_6ed0fa0
        mov esi, dword ptr ss : [esp+0xD4]
        public_6ec41d9 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ec3ff5
        pop edi
        pop ebp
        pop ebx
        public_6ec41ec : nop
        pop esi
        add esp, 0xC0
        ret 4
        UNREACHABLE_TRAP(0x6ec3fd0)
    }
}

#undef public_6ec3ff5
#undef public_6ec4046
#undef public_6ec4060
#undef public_6ec408a
#undef public_6ec409e
#undef public_6ec4129
#undef public_6ec4158
#undef public_6ec4167
#undef public_6ec416c
#undef public_6ec4190
#undef public_6ec41b4
#undef public_6ec41d9
#undef public_6ec41ec
