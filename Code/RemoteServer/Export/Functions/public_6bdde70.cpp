#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdde86 _public_6bdde86
#define public_6bddec2 _public_6bddec2
#define public_6bdded6 _public_6bdded6
#define public_6bddedd _public_6bddedd
#define public_6bddeeb _public_6bddeeb

PROC_DECLARE(0x6bdde70, internal_6bdde70, public_6bdde70);
extern "C" NAKED register_t __cdecl internal_6bdde70()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6bddeeb
        push ebp
        push esi
        push edi
        public_6bdde86 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6bddedd
        push 8
        call public_6c09d26
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov edi, eax
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], ecx
        mov esi, dword ptr ds : [edx+0x4C]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6c09d26
        add esp, 8
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6bddec2
        mov ebp, eax
        public_6bddec2 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6bdded6
        mov dword ptr ds : [eax], edi
        public_6bdded6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+0x50]
        public_6bddedd : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edx+4]
        jne public_6bdde86
        pop edi
        pop esi
        pop ebp
        public_6bddeeb : nop
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6bdde70)
    }
}

#undef public_6bdde86
#undef public_6bddec2
#undef public_6bdded6
#undef public_6bddedd
#undef public_6bddeeb
