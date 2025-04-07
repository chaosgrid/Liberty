#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93740);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f93752 _public_6f93752
#define public_6f93782 _public_6f93782

PROC_DECLARE(0x6f93740, internal_6f93740, public_6f93740);
extern "C" NAKED register_t __cdecl internal_6f93740()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, ebp
        mov ebx, ecx
        je public_6f93782
        push esi
        public_6f93752 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6f94b80
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6f93752
        pop esi
        public_6f93782 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f93740)
    }
}

#undef public_6f93752
#undef public_6f93782
