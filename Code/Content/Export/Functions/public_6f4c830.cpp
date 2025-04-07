#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ca50);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f471b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f49110);
CLANG_FORWARD_PROC_SYMBOL(public_6f49190);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c830);
CLANG_FORWARD_PROC_SYMBOL(public_6f50f90);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f4c84f _public_6f4c84f
#define public_6f4c855 _public_6f4c855
#define public_6f4c900 _public_6f4c900
#define public_6f4c926 _public_6f4c926
#define public_6f4c93e _public_6f4c93e
#define public_6f4c940 _public_6f4c940
#define public_6f4c963 _public_6f4c963
#define public_6f4c995 _public_6f4c995
#define public_6f4c9b4 _public_6f4c9b4

PROC_DECLARE(0x6f4c830, internal_6f4c830, public_6f4c830);
extern "C" NAKED register_t __cdecl internal_6f4c830()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        cmp ebp, 1
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1F8]
        push edi
        jne public_6f4c84f
        mov eax, dword ptr ds : [eax+0x14]
        push 3
        push eax
        jmp public_6f4c855
        public_6f4c84f : nop
        mov ecx, dword ptr ds : [eax+0x14]
        push 2
        push ecx
        public_6f4c855 : nop
        call public_6f50f90
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x1F8]
        mov edx, dword ptr ds : [esi]
        add esp, 8
        push ebx
        push 1
        push 0
        push eax
        mov eax, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0xA4]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x14]
        lea edi, ds:[esi+0x20C]
        push edx
        mov ecx, edi
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6f20e00
        mov ecx, dword ptr ds : [esi+0x200]
        mov eax, dword ptr ds : [esi+0x204]
        lea edi, ds:[esi+0x1FC]
        push ecx
        push eax
        push eax
        call public_6f6a640
        mov edx, dword ptr ds : [edi+8]
        add esp, 0xC
        mov ebx, eax
        push edx
        push ebx
        mov ecx, edi
        call public_6ea1490
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x210]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        pop ebx
        je public_6f4c926
        lea ecx, ds:[ecx]
        public_6f4c900 : nop
        mov edx, dword ptr ds : [edi+8]
        add ecx, 0x10
        push ecx
        push 1
        push edx
        mov ecx, edi
        call public_6f937c0
        lea ecx, ss:[esp+0x1C]
        call public_6f1fa00
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ds : [esi+0x210]
        jne public_6f4c900
        public_6f4c926 : nop
        mov eax, dword ptr ds : [esi+0x21C]
        test eax, eax
        je public_6f4c93e
        mov eax, dword ptr ds : [esi+0x210]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0xC]
        push edx
        jmp public_6f4c940
        public_6f4c93e : nop
        push 0
        public_6f4c940 : nop
        mov ecx, esi
        call public_6f1ca50
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f49b00
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6f4c963
        push 0
        mov ecx, edi
        call public_6f471b0
        public_6f4c963 : nop
        mov eax, ebp
        dec eax
        je public_6f4c995
        sub eax, 0xD
        je public_6f4c9b4
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x80]
        push ecx
        mov ecx, edi
        call public_6f49190
        mov edx, dword ptr ds : [esi+4]
        push 0
        push 3
        push edx
        mov ecx, edi
        call public_6f48a20
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 8
        public_6f4c995 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi+0x80]
        mov ecx, edi
        push eax
        call public_6f49110
        mov ecx, dword ptr ds : [esi+4]
        push 0
        push 4
        push ecx
        mov ecx, edi
        call public_6f48a20
        public_6f4c9b4 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f4c830)
    }
}

#undef public_6f4c84f
#undef public_6f4c855
#undef public_6f4c900
#undef public_6f4c926
#undef public_6f4c93e
#undef public_6f4c940
#undef public_6f4c963
#undef public_6f4c995
#undef public_6f4c9b4
