#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d054d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d05500 _public_6d05500
#define public_6d0551f _public_6d0551f
#define public_6d0554b _public_6d0554b
#define public_6d05550 _public_6d05550
#define public_6d05570 _public_6d05570

PROC_DECLARE(0x6d054d0, internal_6d054d0, public_6d054d0);
extern "C" NAKED register_t __cdecl internal_6d054d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_6d0554b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6d0554b
        cmp ebx, eax
        jne public_6d0554b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d0551f
        lea esp, ss:[esp]
        public_6d05500 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d05ff0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d05500
        public_6d0551f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_6d0554b : nop
        cmp ecx, ebx
        je public_6d05570
        nop 
        public_6d05550 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6d160d0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6d58e50
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6d05550
        public_6d05570 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d054d0)
    }
}

#undef public_6d05500
#undef public_6d0551f
#undef public_6d0554b
#undef public_6d05550
#undef public_6d05570
