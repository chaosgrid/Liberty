#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cfff6b _public_6cfff6b
#define public_6cfff87 _public_6cfff87
#define public_6cfff8a _public_6cfff8a

PROC_DECLARE(0x6cfff30, internal_6cfff30, public_6cfff30);
extern "C" NAKED register_t __cdecl internal_6cfff30()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        test ebp, ebp
        mov ebx, ecx
        je public_6cfff8a
        mov eax, dword ptr ss : [ebp+0x4C]
        and eax, 3
        cmp al, 3
        jne public_6cfff8a
        mov ecx, dword ptr ss : [ebp+0xE0]
        test dword ptr ds : [ebx+0x1C], ecx
        je public_6cfff8a
        push esi
        mov esi, dword ptr ds : [ebx+0x14]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6cfff6b
        mov edi, eax
        public_6cfff6b : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        pop edi
        pop esi
        je public_6cfff87
        mov ecx, dword ptr ss : [ebp+0xB0]
        mov dword ptr ds : [eax], ecx
        public_6cfff87 : nop
        inc dword ptr ds : [ebx+0x18]
        public_6cfff8a : nop
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6cfff30)
    }
}

#undef public_6cfff6b
#undef public_6cfff87
#undef public_6cfff8a
