#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a6980);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a69a0 _public_62a69a0
#define public_62a69b8 _public_62a69b8
#define public_62a69d1 _public_62a69d1
#define public_62a69e4 _public_62a69e4

PROC_DECLARE(0x62a6980, internal_62a6980, public_62a6980);
extern "C" NAKED register_t __cdecl internal_62a6980()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, eax
        mov dword ptr ss : [esp+4], ecx
        je public_62a69e4
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        lea esp, ss:[esp]
        public_62a69a0 : nop
        mov edi, dword ptr ds : [ebx+4]
        push 0x40
        lea esi, ss:[ebp+8]
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_62a69b8
        mov edi, eax
        public_62a69b8 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_62a69d1
        mov ecx, 0xE
        rep movsd
        public_62a69d1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+8]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x20]
        jne public_62a69a0
        pop edi
        pop esi
        pop ebx
        public_62a69e4 : nop
        pop ebp
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x62a6980)
    }
}

#undef public_62a69a0
#undef public_62a69b8
#undef public_62a69d1
#undef public_62a69e4
