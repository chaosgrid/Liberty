#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c3a0);
CLANG_FORWARD_PROC_SYMBOL(public_632d510);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632c3c0 _public_632c3c0
#define public_632c3d8 _public_632c3d8
#define public_632c406 _public_632c406

PROC_DECLARE(0x632c3a0, internal_632c3a0, public_632c3a0);
extern "C" NAKED register_t __cdecl internal_632c3a0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_632c406
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_632c3c0 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        lea ebp, ds:[esi+8]
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_632c3d8
        mov ebx, eax
        public_632c3d8 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_632d510
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_632c3c0
        pop edi
        pop ebp
        pop ebx
        public_632c406 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x632c3a0)
    }
}

#undef public_632c3c0
#undef public_632c3d8
#undef public_632c406
