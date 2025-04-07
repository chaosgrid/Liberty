#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed0fc0 _public_6ed0fc0
#define public_6ed0fd8 _public_6ed0fd8
#define public_6ed0ff1 _public_6ed0ff1
#define public_6ed1004 _public_6ed1004

PROC_DECLARE(0x6ed0fa0, internal_6ed0fa0, public_6ed0fa0);
extern "C" NAKED register_t __cdecl internal_6ed0fa0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6ed1004
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        lea esp, ss:[esp]
        public_6ed0fc0 : nop
        mov edi, dword ptr ds : [ebx+4]
        push 0x40
        lea esi, ss:[ebp+8]
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_6ed0fd8
        mov edi, eax
        public_6ed0fd8 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6ed0ff1
        mov ecx, 0xE
        rep movsd
        public_6ed0ff1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+8]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x20]
        jne public_6ed0fc0
        pop edi
        pop esi
        pop ebx
        public_6ed1004 : nop
        pop ebp
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ed0fa0)
    }
}

#undef public_6ed0fc0
#undef public_6ed0fd8
#undef public_6ed0ff1
#undef public_6ed1004
