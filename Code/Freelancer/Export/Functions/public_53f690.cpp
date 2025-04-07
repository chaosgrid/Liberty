#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fc8f0);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_542870);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_53f70c _public_53f70c
#define public_53f70e _public_53f70e
#define public_53f752 _public_53f752
#define public_53f76c _public_53f76c

PROC_DECLARE(0x53f690, internal_53f690, public_53f690);
extern "C" NAKED register_t __cdecl internal_53f690()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x154]
        test al, al
        jne public_53f76c
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [edi]
        push esi
        push ebx
        push ebp
        mov ecx, edi
        call dword ptr ds : [edx+0x1A4]
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        push ebx
        push edi
        push ecx
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x1AC]
        call public_54baf0
        cmp edi, eax
        mov eax, dword ptr ds : [esi+0x10]
        sete dl
        test eax, eax
        mov byte ptr ss : [esp+0x28], dl
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        je public_53f70c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x67
        cmp cl, 0x67
        je public_53f70e
        public_53f70c : nop
        xor eax, eax
        public_53f70e : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 0xF8
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+0xD0]
        test ecx, ecx
        je public_53f752
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push 1
        call public_4fc8f0
        mov ecx, dword ptr ds : [esi+0xD0]
        call public_4f7a90
        mov dword ptr ds : [esi+0xD0], 0
        public_53f752 : nop
        lea ecx, ds:[esi+0xC0]
        push ecx
        lea ecx, ds:[esi+0x28]
        call public_4fcef0
        push ebp
        mov ecx, esi
        call public_542870
        pop edi
        pop ebp
        pop ebx
        public_53f76c : nop
        pop esi
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x53f690)
    }
}

#undef public_53f70c
#undef public_53f70e
#undef public_53f752
#undef public_53f76c
