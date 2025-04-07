#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f6c920);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d820);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6d8e1 _public_6f6d8e1
#define public_6f6d900 _public_6f6d900
#define public_6f6d906 _public_6f6d906
#define public_6f6d910 _public_6f6d910

PROC_DECLARE(0x6f6d820, internal_6f6d820, public_6f6d820);
extern "C" NAKED register_t __cdecl internal_6f6d820()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x48]
        push eax
        mov edi, 5
        call public_6f75f30
        mov ebp, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [ebp]
        add esp, 4
        push ecx
        mov ecx, eax
        call public_6f73930
        mov esi, eax
        test esi, esi
        je public_6f6d910
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call public_6eb70f0
        mov ecx, dword ptr ds : [esi+8]
        call public_6f33f80
        mov edi, dword ptr ss : [esp+0x54]
        mov ebx, dword ptr ss : [esp+0x50]
        push edi
        push ebx
        mov dword ptr ss : [esp+0x54], eax
        lea eax, ss:[esp+0x18]
        push eax
        push ebp
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea edx, ds:[esi+0x128]
        push edx
        call public_6f6c920
        mov ebp, eax
        add esp, 0x18
        cmp ebp, 4
        jne public_6f6d906
        call public_6efec10
        fstp qword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [public_6fd1bcc]
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x20], ecx
        mov cl, byte ptr ss : [esp+0x58]
        push 0x30
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x28], eax
        mov byte ptr ss : [esp+0x30], 0
        mov byte ptr ss : [esp+0x40], cl
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f6d8e1
        mov edi, eax
        public_6f6d8e1 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6f6d900
        mov ecx, 0xA
        lea esi, ss:[esp+0x1C]
        mov edi, eax
        rep movsd
        public_6f6d900 : nop
        inc dword ptr ds : [public_6fd1bd0]
        public_6f6d906 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        public_6f6d910 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6f6d820)
    }
}

#undef public_6f6d8e1
#undef public_6f6d900
#undef public_6f6d906
#undef public_6f6d910
