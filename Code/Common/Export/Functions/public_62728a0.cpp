#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62728b1 _public_62728b1
#define public_62728d8 _public_62728d8

PROC_DECLARE(0x62728a0, internal_62728a0, public_62728a0);
extern "C" NAKED register_t __cdecl internal_62728a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, ebx
        push edi
        mov edi, ecx
        je public_62728d8
        public_62728b1 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_62728b1
        public_62728d8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62728a0)
    }
}

#undef public_62728b1
#undef public_62728d8
