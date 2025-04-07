#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f0df50 _public_6f0df50
#define public_6f0df68 _public_6f0df68
#define public_6f0df81 _public_6f0df81
#define public_6f0df94 _public_6f0df94

PROC_DECLARE(0x6f0df30, internal_6f0df30, public_6f0df30);
extern "C" NAKED register_t __cdecl internal_6f0df30()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6f0df94
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        lea esp, ss:[esp]
        public_6f0df50 : nop
        mov edi, dword ptr ds : [ebx+4]
        push 0x2C
        lea esi, ss:[ebp+8]
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_6f0df68
        mov edi, eax
        public_6f0df68 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6f0df81
        mov ecx, 9
        rep movsd
        public_6f0df81 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+8]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x20]
        jne public_6f0df50
        pop edi
        pop esi
        pop ebx
        public_6f0df94 : nop
        pop ebp
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6f0df30)
    }
}

#undef public_6f0df50
#undef public_6f0df68
#undef public_6f0df81
#undef public_6f0df94
