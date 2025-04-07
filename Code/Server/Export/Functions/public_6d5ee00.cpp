#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d5ee1d _public_6d5ee1d
#define public_6d5ee5f _public_6d5ee5f
#define public_6d5ee87 _public_6d5ee87

PROC_DECLARE(0x6d5ee00, internal_6d5ee00, public_6d5ee00);
extern "C" NAKED register_t __cdecl internal_6d5ee00()
{
    __asm
    {
        fld dword ptr ss : [esp+0xC]
        sub esp, 0x10
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6d5ee1d
        mov eax, 0xFFFFFFFC
        add esp, 0x10
        ret 
        public_6d5ee1d : nop
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x24]
        push esi
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_6d90468]
        push edi
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0x18
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov ebx, eax
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_6d5ee5f
        mov edi, eax
        public_6d5ee5f : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d5ee87
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        public_6d5ee87 : nop
        mov eax, dword ptr ds : [public_6d9046c]
        pop edi
        pop esi
        inc eax
        pop ebp
        mov dword ptr ds : [public_6d9046c], eax
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d5ee00)
    }
}

#undef public_6d5ee1d
#undef public_6d5ee5f
#undef public_6d5ee87
