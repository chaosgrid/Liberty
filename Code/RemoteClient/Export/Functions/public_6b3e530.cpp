#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3e530);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3e544 _public_6b3e544
#define public_6b3e56b _public_6b3e56b

PROC_DECLARE(0x6b3e530, internal_6b3e530, public_6b3e530);
extern "C" NAKED register_t __cdecl internal_6b3e530()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], offset public_6b6c154
        mov ebx, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6b3e56b
        public_6b3e544 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6b6a092
        mov ecx, dword ptr ds : [edi+0x2C]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x2C], ecx
        jne public_6b3e544
        public_6b3e56b : nop
        mov eax, dword ptr ds : [edi+0x28]
        push eax
        call public_6b6a092
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x2C], eax
        mov ecx, edi
        pop edi
        pop esi
        pop ebx
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b3e530)
    }
}

#undef public_6b3e544
#undef public_6b3e56b
