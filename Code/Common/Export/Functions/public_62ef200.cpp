#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ef200);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62ef238 _public_62ef238
#define public_62ef25f _public_62ef25f

PROC_DECLARE(0x62ef200, internal_62ef200, public_62ef200);
extern "C" NAKED register_t __cdecl internal_62ef200()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        push edi
        push eax
        call public_6391d5a
        xor ebp, ebp
        mov dword ptr ds : [esi+0x54], ebp
        mov dword ptr ds : [esi+0x58], ebp
        mov dword ptr ds : [esi+0x5C], ebp
        mov ecx, dword ptr ds : [esi+0x44]
        push ecx
        call public_6391d5a
        mov dword ptr ds : [esi+0x44], ebp
        mov dword ptr ds : [esi+0x48], ebp
        mov dword ptr ds : [esi+0x4C], ebp
        mov ebx, dword ptr ds : [esi+0x24]
        mov edi, dword ptr ds : [ebx]
        add esp, 8
        cmp edi, ebx
        je public_62ef25f
        public_62ef238 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+0x28]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x28], ecx
        jne public_62ef238
        public_62ef25f : nop
        mov edx, dword ptr ds : [esi+0x24]
        push edx
        call public_6391d5a
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x24], ebp
        mov dword ptr ds : [esi+0x28], ebp
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62ef200)
    }
}

#undef public_62ef238
#undef public_62ef25f
