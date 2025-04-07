#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60e19);

#define public_6cfe21b _public_6cfe21b
#define public_6cfe21d _public_6cfe21d
#define public_6cfe223 _public_6cfe223
#define public_6cfe268 _public_6cfe268
#define public_6cfe284 _public_6cfe284
#define public_6cfe28f _public_6cfe28f
#define public_6cfe2a8 _public_6cfe2a8
#define public_6cfe2b4 _public_6cfe2b4
#define public_6cfe2b6 _public_6cfe2b6
#define public_6cfe2e0 _public_6cfe2e0
#define public_6cfe2ff _public_6cfe2ff
#define public_6cfe316 _public_6cfe316

PROC_DECLARE(0x6cfe180, internal_6cfe180, public_6cfe180);
extern "C" NAKED register_t __cdecl internal_6cfe180()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60e19 @0x6cfe188*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60e19
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x18]
        xor ebx, ebx
        test al, al
        jne public_6cfe28f
        mov cl, byte ptr ss : [esp+0x44]
        push ebp
        push edi
        push 0x14
        mov byte ptr ss : [esp+0x24], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], bl
        mov dword ptr ss : [esp+0x38], ebx
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ss : [esp+0x4C]
        xor edi, edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x30], 0x15
        mov dword ptr ss : [esp+0x34], ecx
        je public_6cfe223
        mov eax, dword ptr ds : [eax+0x28]
        cmp eax, ebx
        je public_6cfe223
        push 0x7F0000
        push ecx
        mov ecx, eax
        call public_6d0c8d0
        cmp eax, ebx
        je public_6cfe223
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        je public_6cfe21b
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cfe21d
        public_6cfe21b : nop
        xor eax, eax
        public_6cfe21d : nop
        mov edi, dword ptr ds : [eax+0xB4]
        public_6cfe223 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        fild dword ptr ds : [esi+0x28]
        lea edx, ss:[esp+0x20]
        push edx
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x2C]
        mov dword ptr ss : [esp+0x3C], edi
        mov eax, dword ptr ds : [ecx]
        push edx
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [eax+0x1C0]
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x20]
        push edx
        call dword ptr ds : [eax+0x188]
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        mov ebp, eax
        je public_6cfe284
        public_6cfe268 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d641e8]
        cmp edi, ebp
        jne public_6cfe268
        mov eax, dword ptr ss : [esp+0x24]
        public_6cfe284 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        pop edi
        pop ebp
        public_6cfe28f : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov byte ptr ds : [esi+0x10], 1
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x48], edx
        je public_6cfe2b4
        public_6cfe2a8 : nop
        cmp word ptr ds : [eax], dx
        je public_6cfe2b6
        add eax, 2
        cmp eax, ecx
        jne public_6cfe2a8
        public_6cfe2b4 : nop
        mov eax, ecx
        public_6cfe2b6 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        jne public_6cfe2ff
        lea edx, ss:[esp+0x48]
        push edx
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d6456c]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6cfe316
        mov ecx, dword ptr ss : [esp+0x48]
        lea ebx, ds:[ebx]
        public_6cfe2e0 : nop
        cmp word ptr ds : [eax], cx
        je public_6cfe316
        add eax, 2
        cmp eax, esi
        jne public_6cfe2e0
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 8
        public_6cfe2ff : nop
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x4C], bl
        call public_6d0f600
        public_6cfe316 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x6cfe180)
    }
}

#undef public_6cfe21b
#undef public_6cfe21d
#undef public_6cfe223
#undef public_6cfe268
#undef public_6cfe284
#undef public_6cfe28f
#undef public_6cfe2a8
#undef public_6cfe2b4
#undef public_6cfe2b6
#undef public_6cfe2e0
#undef public_6cfe2ff
#undef public_6cfe316
