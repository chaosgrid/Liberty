#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdb200);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bdb214 _public_6bdb214
#define public_6bdb23b _public_6bdb23b

PROC_DECLARE(0x6bdb200, internal_6bdb200, public_6bdb200);
extern "C" NAKED register_t __cdecl internal_6bdb200()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], offset public_6c0bb1c
        mov ebx, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6bdb23b
        public_6bdb214 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ds : [edi+0x2C]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x2C], ecx
        jne public_6bdb214
        public_6bdb23b : nop
        mov eax, dword ptr ds : [edi+0x28]
        push eax
        call public_6c09aaa
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x2C], eax
        mov ecx, edi
        pop edi
        pop esi
        pop ebx
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6bdb200)
    }
}

#undef public_6bdb214
#undef public_6bdb23b
