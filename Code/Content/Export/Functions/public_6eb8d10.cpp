#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f26020);
CLANG_FORWARD_PROC_SYMBOL(public_6f33fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57840);
CLANG_FORWARD_PROC_SYMBOL(public_6f5cf60);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa588);

#define public_6eb8d75 _public_6eb8d75
#define public_6eb8d95 _public_6eb8d95
#define public_6eb8e4c _public_6eb8e4c
#define public_6eb8e70 _public_6eb8e70
#define public_6eb8e8c _public_6eb8e8c
#define public_6eb8ed1 _public_6eb8ed1
#define public_6eb8edc _public_6eb8edc

PROC_DECLARE(0x6eb8d10, internal_6eb8d10, public_6eb8d10);
extern "C" NAKED register_t __cdecl internal_6eb8d10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faa588 @0x6eb8d18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa588
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eb8edc
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        push edi
        xor ebx, ebx
        push ebx
        push 1
        push ebx
        mov byte ptr ds : [esi+0x2C8], bl
        call public_6f481e0
        push eax
        call dword ptr ds : [public_6fb3650]
        mov ecx, dword ptr ds : [esi+0xA8]
        mov byte ptr ds : [esi+0x218], bl
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6eb8d95
        public_6eb8d75 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        push ebx
        call public_6f33fd0
        lea ecx, ss:[esp+0x18]
        call public_6f1fa00
        mov ecx, dword ptr ds : [esi+0xA8]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        jne public_6eb8d75
        public_6eb8d95 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [ecx+0x10]
        cmp edi, ebx
        je public_6eb8ed1
        mov dl, byte ptr ss : [esp+0xF]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x28], dl
        call public_6f93790
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x10], ebx
        lea eax, ss:[esp+0x10]
        push eax
        push ebx
        mov byte ptr ss : [esp+0x3C], 1
        call public_6f24870
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        push 1
        call public_6f26020
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push edx
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6f93790
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x14]
        push ecx
        add eax, 8
        push eax
        call public_6eb6740
        mov esi, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc esi
        mov dword ptr ss : [esp+0x28], esi
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        push ebx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_6f57840
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], bl
        je public_6eb8e4c
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x10], ebx
        public_6eb8e4c : nop
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x38], 2
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x24]
        cmp eax, ecx
        je public_6eb8e8c
        mov edi, edi
        public_6eb8e70 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x24]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6eb8e70
        public_6eb8e8c : nop
        mov eax, dword ptr ds : [ecx]
        push ecx
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        public_6eb8ed1 : nop
        push ebx
        call public_6f5cf60
        add esp, 4
        pop edi
        pop ebx
        public_6eb8edc : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x6eb8d10)
    }
}

#undef public_6eb8d75
#undef public_6eb8d95
#undef public_6eb8e4c
#undef public_6eb8e70
#undef public_6eb8e8c
#undef public_6eb8ed1
#undef public_6eb8edc
