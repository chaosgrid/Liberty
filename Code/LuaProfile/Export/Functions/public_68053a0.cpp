#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68051d0);
CLANG_FORWARD_PROC_SYMBOL(public_68053a0);
CLANG_FORWARD_PROC_SYMBOL(public_6805460);

#define public_68053e1 _public_68053e1
#define public_6805419 _public_6805419

PROC_DECLARE(0x68053a0, internal_68053a0, public_68053a0);
extern "C" NAKED register_t __cdecl internal_68053a0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        push edi
        push esi
        call public_68051d0
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        cmp ecx, 0xFFFFFFFA
        je public_68053e1
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        add eax, 0x10
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        pop edi
        mov dword ptr ds : [eax+0xC], ecx
        pop esi
        add esp, 0x10
        ret 
        public_68053e1 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push ebx
        mov ebx, dword ptr ds : [edx]
        push ebp
        mov ebp, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [esi+0xC]
        shl edx, 1
        lea ecx, ds:[ecx+ecx*2]
        cmp ecx, edx
        jle public_6805419
        push esi
        call public_6805460
        push edi
        push esi
        call public_68051d0
        add esp, 0xC
        public_6805419 : nop
        inc dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [edi]
        mov edx, eax
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [edi+0xC]
        add eax, 0x10
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebp
        pop ebp
        mov dword ptr ds : [edx+0xC], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        pop ebx
        mov dword ptr ds : [eax+8], edx
        pop edi
        mov dword ptr ds : [eax+0xC], ecx
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x68053a0)
    }
}

#undef public_68053e1
#undef public_6805419
