#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6284e10);
CLANG_FORWARD_PROC_SYMBOL(public_6288970);
CLANG_FORWARD_PROC_SYMBOL(public_62a0c10);
CLANG_FORWARD_PROC_SYMBOL(public_62a9590);
CLANG_FORWARD_PROC_SYMBOL(public_62a95f0);
CLANG_FORWARD_PROC_SYMBOL(public_62aee50);
CLANG_FORWARD_PROC_SYMBOL(public_62f05d0);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d50);
CLANG_FORWARD_PROC_SYMBOL(public_62f1260);
CLANG_FORWARD_PROC_SYMBOL(public_630e960);

#define public_62a0c3e _public_62a0c3e
#define public_62a0c42 _public_62a0c42
#define public_62a0cb0 _public_62a0cb0
#define public_62a0db7 _public_62a0db7
#define public_62a0dd6 _public_62a0dd6
#define public_62a0de1 _public_62a0de1
#define public_62a0df4 _public_62a0df4

PROC_DECLARE(0x62a0c10, internal_62a0c10, public_62a0c10);
extern "C" NAKED register_t __cdecl internal_62a0c10()
{
    __asm
    {
        sub esp, 0x9C
        mov eax, dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ds : [eax+4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+8], esi
        je public_62a0df4
        push ebx
        push ebp
        push edi
        xor ebx, ebx
        jmp public_62a0c42
        public_62a0c3e : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_62a0c42 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0xB0]
        mov ecx, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x64]
        push edx
        lea edx, ss:[esp+0x20]
        lea ebp, ds:[esi+8]
        push edx
        push eax
        push ecx
        call public_630e960
        add esp, 0x10
        test al, al
        je public_62a0de1
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebp
        call public_62a9590
        test al, al
        jne public_62a0de1
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx]
        push ebp
        call public_62a95f0
        add esi, 0xC
        push esi
        call public_62f1260
        mov edi, eax
        mov edx, dword ptr ds : [edi]
        add esp, 4
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        je public_62a0cb0
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+0x20]
        public_62a0cb0 : nop
        push 1
        call public_62aee50
        add esp, 4
        mov esi, eax
        push esi
        mov ecx, edi
        call public_62f05d0
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x4C]
/*FIXUP push offset public_639d9c8 @0x62a0ccc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d9c8
        mov dword ptr ss : [esp+0x2C], offset public_639d9c8
        call dword ptr ds : [public_6399024]
        mov ebp, dword ptr ss : [ebp]
        push ebp
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x28], ebp
        call dword ptr ds : [public_6399024]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 8
        lea ebp, ss:[esp+0x28]
        push ebp
        push ecx
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [public_6399064]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        test eax, eax
        jne public_62a0dd6
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [public_63eb360]
        mov edx, dword ptr ds : [public_63fc0ec]
        mov ecx, dword ptr ds : [public_63fc0e8]
        mov ebp, dword ptr ss : [esp+0xB0]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [public_63fc0f0]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], 2
        mov byte ptr ss : [esp+0x56], bl
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov byte ptr ss : [esp+0x4E], bl
        mov byte ptr ss : [esp+0x4C], bl
        mov dword ptr ss : [esp+0x30], ecx
        mov byte ptr ss : [esp+0x4D], 1
        mov ecx, dword ptr ds : [eax+0x50]
        push ebp
        mov dword ptr ss : [esp+0x48], ecx
        call public_6284e10
        add esp, 4
        lea ecx, ss:[esp+0x4E]
        public_62a0db7 : nop
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [ecx], dl
        inc ecx
        cmp dl, bl
        jne public_62a0db7
        lea edx, ss:[esp+0x30]
        push edx
        push esi
        call public_6288970
        push esi
        push ebp
        call public_6284ca0
        add esp, 0x10
        public_62a0dd6 : nop
        mov ecx, edi
        call public_62f0d50
        mov esi, dword ptr ss : [esp+0x14]
        public_62a0de1 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], esi
        jne public_62a0c3e
        pop edi
        pop ebp
        pop ebx
        public_62a0df4 : nop
        pop esi
        add esp, 0x9C
        ret 8
        UNREACHABLE_TRAP(0x62a0c10)
    }
}

#undef public_62a0c3e
#undef public_62a0c42
#undef public_62a0cb0
#undef public_62a0db7
#undef public_62a0dd6
#undef public_62a0de1
#undef public_62a0df4
