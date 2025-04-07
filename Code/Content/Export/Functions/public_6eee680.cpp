#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee680);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eee6a0 _public_6eee6a0
#define public_6eee6b8 _public_6eee6b8
#define public_6eee6d1 _public_6eee6d1
#define public_6eee6e4 _public_6eee6e4

PROC_DECLARE(0x6eee680, internal_6eee680, public_6eee680);
extern "C" NAKED register_t __cdecl internal_6eee680()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6eee6e4
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        lea esp, ss:[esp]
        public_6eee6a0 : nop
        mov edi, dword ptr ds : [ebx+4]
        push 0x28
        lea esi, ss:[ebp+8]
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_6eee6b8
        mov edi, eax
        public_6eee6b8 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6eee6d1
        mov ecx, 8
        rep movsd
        public_6eee6d1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+8]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x20]
        jne public_6eee6a0
        pop edi
        pop esi
        pop ebx
        public_6eee6e4 : nop
        pop ebp
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6eee680)
    }
}

#undef public_6eee6a0
#undef public_6eee6b8
#undef public_6eee6d1
#undef public_6eee6e4
