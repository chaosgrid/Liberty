#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea94c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac110);
CLANG_FORWARD_PROC_SYMBOL(public_6eac160);
CLANG_FORWARD_PROC_SYMBOL(public_6eac190);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3620);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4720);
CLANG_FORWARD_PROC_SYMBOL(public_6f30b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa0d0);

#define public_6eb3151 _public_6eb3151
#define public_6eb319e _public_6eb319e
#define public_6eb31b0 _public_6eb31b0
#define public_6eb3237 _public_6eb3237
#define public_6eb3240 _public_6eb3240
#define public_6eb326b _public_6eb326b
#define public_6eb3294 _public_6eb3294
#define public_6eb329e _public_6eb329e
#define public_6eb32a2 _public_6eb32a2
#define public_6eb3352 _public_6eb3352
#define public_6eb3371 _public_6eb3371

PROC_DECLARE(0x6eb30d0, internal_6eb30d0, public_6eb30d0);
extern "C" NAKED register_t __cdecl internal_6eb30d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa0d0 @0x6eb30d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa0d0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        mov eax, dword ptr ss : [esp+0x64]
        sub eax, 0x29
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_6eb31b0
        dec eax
        jne public_6eb3371
        mov eax, dword ptr ss : [esp+0x78]
        mov edi, ecx
        lea esi, ds:[eax+4]
        push esi
        lea ecx, ss:[esp+0x7C]
        lea ebp, ds:[edi+8]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x7C], ebp
        call public_6f7b0f0
        mov eax, dword ptr ds : [edi+0xC]
        cmp dword ptr ss : [esp+0x78], eax
        je public_6eb3371
        push esi
        call public_6f49b00
        add esp, 4
        mov ecx, eax
        call public_6f47980
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x78]
        mov esi, dword ptr ds : [eax+0x14]
        cmp esi, dword ptr ds : [eax+0x18]
        je public_6eb319e
        or ebp, 0xFFFFFFFF
        xor edi, edi
        public_6eb3151 : nop
        mov ecx, dword ptr ds : [esi]
        push ebp
        add ecx, 8
        call public_6ea7ce0
        mov dword ptr ss : [esp+0x28], edi
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x28]
        push edx
        add ecx, 8
        mov dword ptr ss : [esp+0x70], edi
        call public_6ea7ef0
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x6C], ebp
        call public_6ea7c30
        mov eax, dword ptr ds : [esi]
        push edi
        push eax
        push ebp
        mov ecx, ebx
        call public_6ea94c0
        mov eax, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ds : [eax+0x18]
        add esi, 4
        cmp esi, ecx
        jne public_6eb3151
        mov ebp, dword ptr ss : [esp+0x74]
        public_6eb319e : nop
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebp
        call public_6f30b60
        jmp public_6eb3371
        public_6eb31b0 : nop
        mov ebx, dword ptr ss : [esp+0x78]
        lea eax, ds:[ebx+4]
        push eax
        mov dword ptr ss : [esp+0x24], eax
        call public_6f49b00
        mov ebp, eax
        xor edi, edi
        add esp, 4
        cmp ebp, edi
        je public_6eb3371
        mov ecx, ebp
        call public_6f47980
        mov esi, eax
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], esi
        je public_6eb3371
        mov dl, byte ptr ss : [esp+0x78]
        mov byte ptr ss : [esp+0x30], dl
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov ecx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x74], 1
        call public_6eb4720
        mov edx, dword ptr ds : [ebx]
        add esp, 8
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], edx
        call public_6eac110
        cmp eax, edi
        mov dword ptr ss : [esp+0x74], eax
        je public_6eb32a2
        mov esi, dword ptr ss : [esp+0x34]
        cmp esi, dword ptr ss : [esp+0x38]
        je public_6eb329e
        jmp public_6eb3240
        public_6eb3237 : nop
        mov eax, dword ptr ss : [esp+0x74]
        nop 
        lea esp, ss:[esp]
        public_6eb3240 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0xC]
        push ecx
        push edx
        mov ecx, eax
        call public_6eac190
        test al, al
        jne public_6eb326b
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [esp+0x74]
        push edx
        push eax
        call public_6eac160
        test al, al
        jne public_6eb326b
        add esi, 4
        jmp public_6eb3294
        public_6eb326b : nop
        mov eax, dword ptr ss : [esp+0x38]
        push esi
        push eax
        lea ecx, ds:[esi+4]
        push ecx
        call public_6f6a640
        mov eax, dword ptr ss : [esp+0x44]
        add esp, 0xC
        push eax
        add eax, 0xFFFFFFFC
        push eax
        lea ecx, ss:[esp+0x38]
        call public_6ea1490
        sub dword ptr ss : [esp+0x38], 4
        public_6eb3294 : nop
        cmp esi, dword ptr ss : [esp+0x38]
        jne public_6eb3237
        mov ebx, dword ptr ss : [esp+0x78]
        public_6eb329e : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_6eb32a2 : nop
        mov dl, byte ptr ss : [esp+0x78]
        mov byte ptr ss : [esp+0x40], dl
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x4C], edi
        mov ecx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x40]
        push eax
        push ecx
        push esi
        lea edx, ss:[esp+0x3C]
        push ebp
        push edx
        mov byte ptr ss : [esp+0x80], 2
        call public_6eb2ca0
        mov ecx, dword ptr ss : [esp+0x58]
        add esp, 0x14
        cmp ecx, edi
        je public_6eb3352
        mov eax, dword ptr ss : [esp+0x48]
        sub eax, ecx
        sar eax, 2
        cmp eax, edi
        je public_6eb3352
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x50], ecx
        push edx
        lea ecx, ss:[esp+0x58]
        call public_6eb35b0
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ds:[edx+8]
        mov byte ptr ss : [esp+0x74], 3
        call public_6eb3620
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x58]
        push eax
        push ecx
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x74], 2
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 4
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x5C], edi
        mov dword ptr ss : [esp+0x60], edi
        public_6eb3352 : nop
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        mov dword ptr ss : [esp+0x4C], edi
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x54], edi
        call public_6fa8fe0
        add esp, 8
        public_6eb3371 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x6eb30d0)
    }
}

#undef public_6eb3151
#undef public_6eb319e
#undef public_6eb31b0
#undef public_6eb3237
#undef public_6eb3240
#undef public_6eb326b
#undef public_6eb3294
#undef public_6eb329e
#undef public_6eb32a2
#undef public_6eb3352
#undef public_6eb3371
