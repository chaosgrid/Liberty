#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d575f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a7f0);

#define public_6d57608 _public_6d57608
#define public_6d57620 _public_6d57620
#define public_6d57623 _public_6d57623
#define public_6d5762c _public_6d5762c
#define public_6d57657 _public_6d57657
#define public_6d57669 _public_6d57669
#define public_6d57672 _public_6d57672
#define public_6d5768d _public_6d5768d
#define public_6d576b0 _public_6d576b0

PROC_DECLARE(0x6d575f0, internal_6d575f0, public_6d575f0);
extern "C" NAKED register_t __cdecl internal_6d575f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [edi+8]
        mov al, 1
        je public_6d5762c
        public_6d57608 : nop
        lea eax, ds:[esi+0xC]
        push eax
        push ebp
        mov ebx, esi
        call dword ptr ds : [public_6d648d8]
        add esp, 8
        test al, al
        je public_6d57620
        mov esi, dword ptr ds : [esi]
        jmp public_6d57623
        public_6d57620 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d57623 : nop
        cmp esi, dword ptr ds : [edi+8]
        mov ebp, dword ptr ss : [esp+0x1C]
        jne public_6d57608
        public_6d5762c : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6d57657
        push ebp
        push ebx
        push esi
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6d59ef0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6d57657 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebx
        je public_6d57672
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx]
        jne public_6d57669
        push ebp
        jmp public_6d5768d
        public_6d57669 : nop
        lea ecx, ss:[esp+0x10]
        call public_6d5a7f0
        public_6d57672 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[ecx+0xC]
        push ebp
        push eax
        call dword ptr ds : [public_6d648d8]
        add esp, 8
        test al, al
        je public_6d576b0
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        public_6d5768d : nop
        push ebx
        push esi
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_6d59ef0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6d576b0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d575f0)
    }
}

#undef public_6d57608
#undef public_6d57620
#undef public_6d57623
#undef public_6d5762c
#undef public_6d57657
#undef public_6d57669
#undef public_6d57672
#undef public_6d5768d
#undef public_6d576b0
