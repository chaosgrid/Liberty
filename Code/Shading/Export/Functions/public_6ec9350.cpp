#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9d20);
CLANG_FORWARD_PROC_SYMBOL(public_6eca710);
CLANG_FORWARD_PROC_SYMBOL(public_6ecad20);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb180);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb560);

#define public_6ec9370 _public_6ec9370
#define public_6ec93e0 _public_6ec93e0
#define public_6ec93fc _public_6ec93fc
#define public_6ec9419 _public_6ec9419
#define public_6ec9420 _public_6ec9420
#define public_6ec9440 _public_6ec9440
#define public_6ec946e _public_6ec946e

PROC_DECLARE(0x6ec9350, internal_6ec9350, public_6ec9350);
extern "C" NAKED register_t __cdecl internal_6ec9350()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        lea eax, ds:[ebx+0x60]
        push edi
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x14], 2
        lea ebx, ds:[ebx]
        public_6ec9370 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [ecx]
        cmp esi, 2
        jae public_6ec9440
        mov eax, dword ptr ds : [ebx+esi*4+0x68]
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_6ec9440
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push esi
        push eax
        mov ecx, ebx
        call public_6ec9d20
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        je public_6ec9440
        mov eax, dword ptr ds : [ebx+esi*4+0x68]
        mov dword ptr ds : [eax+0x1C], 0
        mov esi, dword ptr ds : [ebx+esi*4+0x68]
        mov edi, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi]
        add esi, 8
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6ec9419
        mov ecx, eax
        cmp eax, ecx
        jne public_6ec9419
        mov ebp, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [esi+8]
        mov edi, ebp
        je public_6ec93fc
        lea ebx, ds:[ebx]
        public_6ec93e0 : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call public_6ecb180
        mov edi, dword ptr ds : [edi]
        lea ecx, ss:[ebp+0x10]
        call public_6eca710
        cmp edi, dword ptr ds : [esi+8]
        mov ebp, edi
        jne public_6ec93e0
        public_6ec93fc : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        jmp public_6ec9440
        public_6ec9419 : nop
        cmp eax, edi
        je public_6ec9440
        lea ecx, ds:[ecx]
        public_6ec9420 : nop
        lea ecx, ss:[esp+0x10]
        mov ebp, eax
        call public_6ecb560
        push ebp
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6ecad20
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ec9420
        public_6ec9440 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        add ecx, 4
        dec eax
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6ec9370
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        je public_6ec946e
        mov edx, dword ptr ds : [ebx+0x8C]
        mov dword ptr ds : [ebx+0x88], edx
        public_6ec946e : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6ec9350)
    }
}

#undef public_6ec9370
#undef public_6ec93e0
#undef public_6ec93fc
#undef public_6ec9419
#undef public_6ec9420
#undef public_6ec9440
#undef public_6ec946e
