#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627ea01 _public_627ea01
#define public_627ea35 _public_627ea35
#define public_627ea3e _public_627ea3e
#define public_627ea49 _public_627ea49

PROC_DECLARE(0x627e9f0, internal_627e9f0, public_627e9f0);
extern "C" NAKED register_t __cdecl internal_627e9f0()
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
        je public_627ea49
        public_627ea01 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        cmp dword ptr ds : [public_63fc42c], 0x7FFFFFFF
        jge public_627ea35
        mov ecx, dword ptr ds : [public_63fc420]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_63fc420], eax
        inc dword ptr ds : [public_63fc42c]
        jmp public_627ea3e
        public_627ea35 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627ea3e : nop
        mov ecx, dword ptr ds : [edi+8]
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_627ea01
        public_627ea49 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x627e9f0)
    }
}

#undef public_627ea01
#undef public_627ea35
#undef public_627ea3e
#undef public_627ea49
