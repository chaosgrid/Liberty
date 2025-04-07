#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6802b50);
CLANG_FORWARD_PROC_SYMBOL(public_68040a0);
CLANG_FORWARD_PROC_SYMBOL(public_680a670);

#define public_680a704 _public_680a704
#define public_680a767 _public_680a767

PROC_DECLARE(0x680a670, internal_680a670, public_680a670);
extern "C" NAKED register_t __cdecl internal_680a670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_680a704
        push eax
        call public_6801bd0
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        add edx, 0x10
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        add edx, 0x20
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        add ecx, 0x30
        push 1
        push 2
        mov dword ptr ds : [eax], ecx
        call public_6802b50
        add esp, 0xC
        jmp public_680a767
        public_680a704 : nop
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        add eax, 0x10
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax]
        push 0xB
        push 0xFFFFFFFA
        add edx, 0x20
        push 0xFFFFFFFA
        push 0xFFFFFFFF
        mov dword ptr ds : [eax], edx
        call public_68040a0
        add esp, 0x10
        public_680a767 : nop
        mov eax, dword ptr ds : [public_680e604]
        add dword ptr ds : [eax], 0xFFFFFFF0
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        xor ecx, ecx
        cmp edx, 0xFFFFFFFA
        setne cl
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x680a670)
    }
}

#undef public_680a704
#undef public_680a767
