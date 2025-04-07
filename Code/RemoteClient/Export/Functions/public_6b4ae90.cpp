#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4ae90);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4aea0 _public_6b4aea0
#define public_6b4aec7 _public_6b4aec7

PROC_DECLARE(0x6b4ae90, internal_6b4ae90, public_6b4ae90);
extern "C" NAKED register_t __cdecl internal_6b4ae90()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x2C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6b4aec7
        mov edi, edi
        public_6b4aea0 : nop
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
        mov ecx, dword ptr ds : [edi+0x30]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x30], ecx
        jne public_6b4aea0
        public_6b4aec7 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        push eax
        call public_6b6a092
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi+0x30], eax
        mov ecx, edi
        pop edi
        pop esi
        pop ebx
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b4ae90)
    }
}

#undef public_6b4aea0
#undef public_6b4aec7
