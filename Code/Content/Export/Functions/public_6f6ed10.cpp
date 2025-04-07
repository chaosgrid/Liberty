#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f67660);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ed10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6ed53 _public_6f6ed53
#define public_6f6ed65 _public_6f6ed65
#define public_6f6ed94 _public_6f6ed94
#define public_6f6ede4 _public_6f6ede4
#define public_6f6ee01 _public_6f6ee01
#define public_6f6ee2a _public_6f6ee2a

PROC_DECLARE(0x6f6ed10, internal_6f6ed10, public_6f6ed10);
extern "C" NAKED register_t __cdecl internal_6f6ed10()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        mov ebx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ebx+0x14C]
        test eax, eax
        push ebp
        push esi
        je public_6f6ee2a
        mov eax, dword ptr ds : [ebx+0x154]
        cmp eax, 0xFFFFFFFF
        je public_6f6ee2a
        push eax
        call public_6f67660
        mov ecx, dword ptr ds : [public_6fd1bcc]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        add esp, 4
        cmp eax, ecx
        je public_6f6ee2a
        public_6f6ed53 : nop
        cmp dword ptr ds : [eax+0xC], edx
        je public_6f6ed65
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f6ed53
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 
        public_6f6ed65 : nop
        mov ebp, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax+0x10]
        lea edx, ss:[esp+0x10]
        push edx
        add eax, 0x10
        push ebp
        push eax
        mov dword ptr ss : [esp+0x48], ecx
        call dword ptr ds : [public_6fb3564]
        mov eax, dword ptr ss : [esp+0x3C]
        add esp, 0xC
        cmp eax, 7
        je public_6f6ed94
        cmp eax, 8
        jne public_6f6ee2a
        public_6f6ed94 : nop
        push edi
        call public_6efec10
        fstp qword ptr ss : [esp+0x2C]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x34], 0
        call public_6eea860
        mov eax, dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [esp+0x40]
        mov esi, dword ptr ds : [public_6fd1bcc]
        mov edi, dword ptr ds : [esi+4]
        push 0x30
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x20], edx
        mov byte ptr ss : [esp+0x28], 0
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f6ede4
        mov edi, eax
        public_6f6ede4 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6f6ee01
        mov ecx, 0xA
        lea esi, ss:[esp+0x14]
        rep movsd
        public_6f6ee01 : nop
        mov eax, dword ptr ds : [public_6fd1bd0]
        inc eax
        push 4
        mov dword ptr ds : [public_6fd1bd0], eax
        mov edx, dword ptr ds : [ebx+4]
        push ebp
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [public_6fb358c]
        add esp, 0x10
        pop edi
        public_6f6ee2a : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x6f6ed10)
    }
}

#undef public_6f6ed53
#undef public_6f6ed65
#undef public_6f6ed94
#undef public_6f6ede4
#undef public_6f6ee01
#undef public_6f6ee2a
