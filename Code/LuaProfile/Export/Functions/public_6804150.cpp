#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68022b0);
CLANG_FORWARD_PROC_SYMBOL(public_6802b00);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_6804150);
CLANG_FORWARD_PROC_SYMBOL(public_6804fe0);

#define public_68041ca _public_68041ca

PROC_DECLARE(0x6804150, internal_6804150, public_6804150);
extern "C" NAKED register_t __cdecl internal_6804150()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        sub ecx, 0x20
        push edi
        push ecx
        call public_6804fe0
        mov edi, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*8]
        mov eax, dword ptr ds : [public_680e604]
        shl edx, 1
        mov esi, edi
        sub esi, edx
        mov edx, dword ptr ds : [eax+0x64]
        shl esi, 4
        mov ecx, dword ptr ds : [esi+edx]
        add esi, edx
        add esp, 4
        cmp ecx, 0xFFFFFFFA
        jne public_68041ca
        mov eax, dword ptr ds : [eax]
        sub eax, 0x10
        push eax
        mov ebx, edx
        call public_6804fe0
        lea ecx, ds:[eax+eax*8]
        shl ecx, 1
        mov esi, edi
        sub esi, ecx
        shl esi, 4
        mov eax, dword ptr ds : [esi+ebx]
        add esi, ebx
        add esp, 4
        cmp eax, 0xFFFFFFFA
        jne public_68041ca
        mov esi, edi
        shl esi, 4
        mov eax, dword ptr ds : [esi+ebx]
        add esi, ebx
        cmp eax, 0xFFFFFFFA
        jne public_68041ca
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call public_6802e00
        add esp, 4
        public_68041ca : nop
        mov eax, dword ptr ds : [edi*4+public_680d5c4]
        push eax
        call public_68022b0
        push 1
        push 3
        push esi
        call public_6802b00
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6804150)
    }
}

#undef public_68041ca
