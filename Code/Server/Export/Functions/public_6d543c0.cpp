#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4500);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6cf1990);
CLANG_FORWARD_PROC_SYMBOL(public_6d00010);
CLANG_FORWARD_PROC_SYMBOL(public_6d18880);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d49230);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c430);
CLANG_FORWARD_PROC_SYMBOL(public_6d543c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d583b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bd60);
CLANG_FORWARD_JUMP_SYMBOL(public_6d639c8);

#define public_6d54408 _public_6d54408
#define public_6d54458 _public_6d54458
#define public_6d5446f _public_6d5446f
#define public_6d5449f _public_6d5449f
#define public_6d544b5 _public_6d544b5
#define public_6d544c7 _public_6d544c7
#define public_6d54503 _public_6d54503
#define public_6d5451c _public_6d5451c
#define public_6d54564 _public_6d54564
#define public_6d54592 _public_6d54592
#define public_6d54594 _public_6d54594
#define public_6d545c2 _public_6d545c2
#define public_6d545d9 _public_6d545d9

PROC_DECLARE(0x6d543c0, internal_6d543c0, public_6d543c0);
extern "C" NAKED register_t __cdecl internal_6d543c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d639c8 @0x6d543c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d639c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        mov ebx, dword ptr ds : [ecx]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        lea eax, ds:[edi-1]
        mov ebp, eax
        imul ebp, 0x418
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ebp
        add ebx, ebp
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d54408
        mov ecx, ebx
        call public_6d4c430
        public_6d54408 : nop
        mov ecx, dword ptr ds : [public_6d90260]
        mov eax, edi
        imul eax, 0x418
        push edi
        lea esi, ds:[eax+ecx-0x418]
        call public_6d00010
        push edi
        call public_6d18880
        mov eax, dword ptr ds : [esi+0x3E0]
        add esp, 8
        test eax, 0x3FFFFFFF
        je public_6d54458
        lea edx, ss:[esp+0x1C]
        push edx
        push 0x3A
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], edi
        call public_6d43650
        add esp, 8
        public_6d54458 : nop
        mov eax, dword ptr ds : [esi+0x3CC]
        test eax, eax
        je public_6d5446f
        push 4
        push edi
        mov ecx, offset public_6d8facc
        call public_6cf1990
        public_6d5446f : nop
        lea eax, ss:[esp+0x48]
        push eax
        push 8
        mov dword ptr ss : [esp+0x50], edi
        call public_6d43650
        mov ecx, dword ptr ds : [public_6d8f9a0]
        add esp, 8
        inc ecx
        mov dword ptr ds : [public_6d8f9a0], ecx
        mov ecx, dword ptr ds : [ebx+0x404]
        test ecx, ecx
        je public_6d5449f
        push edi
        call public_6d5bd60
        public_6d5449f : nop
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d544b5
        mov dl, byte ptr ds : [ebx+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d5451c
        public_6d544b5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6d5451c
        mov esi, 1
        xor ebp, ebp
        public_6d544c7 : nop
        lea edx, ds:[esi-1]
        lea eax, ds:[edi-1]
        cmp edx, eax
        je public_6d54503
        test esi, esi
        jbe public_6d54503
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6d54503
        mov ecx, dword ptr ds : [public_6d90260]
        mov eax, dword ptr ds : [ecx+ebp+0x348]
        test eax, eax
        je public_6d54503
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push edi
        push esi
        call dword ptr ds : [edx+0x1BC]
        public_6d54503 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        add ebp, 0x418
        inc esi
        lea eax, ds:[esi-1]
        cmp eax, edx
        jb public_6d544c7
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d5451c : nop
        mov dl, byte ptr ss : [esp+0x48]
        push 0
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x2C], dl
        call public_6ce3b20
        push ebx
        call dword ptr ds : [public_6d64c80]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x30]
        call public_6ce4520
        test al, al
        je public_6d54564
        mov eax, dword ptr ss : [esp+0x2C]
        push esi
        push ebx
        push eax
        call public_6ce1960
        add esp, 0xC
        push esi
        lea ecx, ss:[esp+0x2C]
        call public_6ce4500
        public_6d54564 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, offset public_6d902a4
        mov dword ptr ss : [esp+0x48], 0
        call public_6d583b0
        mov eax, dword ptr ds : [public_6d902a8]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        je public_6d54592
        mov esi, dword ptr ds : [ecx+0x1C]
        jmp public_6d54594
        public_6d54592 : nop
        xor esi, esi
        public_6d54594 : nop
        push 1
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call public_6ce3b20
        test esi, esi
        je public_6d545d9
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d545d9
        mov esi, dword ptr ds : [esi+0x18]
        test esi, esi
        jne public_6d545c2
        mov esi, dword ptr ds : [public_6d64b7c]
        public_6d545c2 : nop
        push esi
        push ebx
        mov eax, 0x100003
/*FIXUP push offset public_6d6b970 @0x6d545c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b970
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x10
        public_6d545d9 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx]
        add ecx, ebp
        call public_6d49230
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x6d543c0)
    }
}

#undef public_6d54408
#undef public_6d54458
#undef public_6d5446f
#undef public_6d5449f
#undef public_6d544b5
#undef public_6d544c7
#undef public_6d54503
#undef public_6d5451c
#undef public_6d54564
#undef public_6d54592
#undef public_6d54594
#undef public_6d545c2
#undef public_6d545d9
