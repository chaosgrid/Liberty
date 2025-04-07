#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);

#define public_6f25f95 _public_6f25f95
#define public_6f25fc1 _public_6f25fc1
#define public_6f25fcb _public_6f25fcb

PROC_DECLARE(0x6f25f60, internal_6f25f60, public_6f25f60);
extern "C" NAKED register_t __cdecl internal_6f25f60()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+4]
        lea ebp, ds:[ecx+0x10C]
        push ebp
        push eax
        call dword ptr ds : [public_6fb363c]
        add esp, 8
        mov ecx, edi
        call public_6eea860
        mov ebx, eax
        test ebx, ebx
        je public_6f25fcb
        mov eax, dword ptr ds : [ebx+0xE0]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f25fcb
        public_6f25f95 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [eax+4]
        je public_6f25fc1
        mov ecx, dword ptr ds : [edi+0x154]
        cmp ecx, 0xFFFFFFFF
        je public_6f25fc1
        cmp dword ptr ds : [eax+0x154], ecx
        jne public_6f25fc1
        mov edx, dword ptr ds : [eax+4]
        push ebp
        push edx
        call dword ptr ds : [public_6fb363c]
        add esp, 8
        public_6f25fc1 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xE0]
        jne public_6f25f95
        public_6f25fcb : nop
        mov ecx, edi
        call public_6f57b00
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f25f60)
    }
}

#undef public_6f25f95
#undef public_6f25fc1
#undef public_6f25fcb
