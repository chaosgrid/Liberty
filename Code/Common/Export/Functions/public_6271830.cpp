#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6271854 _public_6271854
#define public_627186c _public_627186c
#define public_6271872 _public_6271872
#define public_627189d _public_627189d
#define public_62718a1 _public_62718a1
#define public_62718b6 _public_62718b6
#define public_62718d3 _public_62718d3
#define public_62718e4 _public_62718e4

PROC_DECLARE(0x6271830, internal_6271830, public_6271830);
extern "C" NAKED register_t __cdecl internal_6271830()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ebp, ecx
        push esi
        push edi
        je public_62718e4
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_627186c
        public_6271854 : nop
        cmp ebx, ecx
        je public_627186c
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6271854
        public_627186c : nop
        cmp eax, esi
        mov edi, eax
        je public_627189d
        public_6271872 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6271872
        mov ecx, dword ptr ss : [esp+0x14]
        public_627189d : nop
        cmp ebx, ecx
        je public_62718e4
        public_62718a1 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_62718b6
        mov edi, eax
        public_62718b6 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_62718d3
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_62718d3 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_62718a1
        public_62718e4 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6271830)
    }
}

#undef public_6271854
#undef public_627186c
#undef public_6271872
#undef public_627189d
#undef public_62718a1
#undef public_62718b6
#undef public_62718d3
#undef public_62718e4
