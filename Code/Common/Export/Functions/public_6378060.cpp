#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6378060);

#define public_637808b _public_637808b
#define public_637809a _public_637809a
#define public_63780a1 _public_63780a1
#define public_63780c7 _public_63780c7
#define public_63780df _public_63780df
#define public_63780f7 _public_63780f7

PROC_DECLARE(0x6378060, internal_6378060, public_6378060);
extern "C" NAKED register_t __cdecl internal_6378060()
{
    __asm
    {
        mov edx, dword ptr ds : [public_658b9b0]
        mov eax, dword ptr ds : [public_658b9a4]
        mov ecx, dword ptr ss : [esp+4]
        sub eax, edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [public_658b9b8]
        push edi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [public_658b984]
        xor edi, edi
        cmp eax, edi
        je public_63780a1
        push esi
        public_637808b : nop
        cmp eax, edi
        mov esi, dword ptr ds : [eax]
        je public_637809a
        push eax
        call public_6343fb0
        add esp, 4
        public_637809a : nop
        cmp esi, edi
        mov eax, esi
        jne public_637808b
        pop esi
        public_63780a1 : nop
        cmp dword ptr ds : [public_658b970], edi
        mov dword ptr ds : [public_658b984], edi
        je public_63780f7
        mov eax, dword ptr ds : [public_658b980]
        cmp eax, edi
        je public_63780c7
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [public_658b980], edi
        public_63780c7 : nop
        mov eax, dword ptr ds : [public_658b978]
        cmp eax, edi
        je public_63780df
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [public_658b978], edi
        public_63780df : nop
        mov eax, dword ptr ds : [public_658b97c]
        cmp eax, edi
        je public_63780f7
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [public_658b97c], edi
        public_63780f7 : nop
        mov ecx, 0x1A
        xor eax, eax
        mov edi, offset public_658b960
        rep stosd
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6378060)
    }
}

#undef public_637808b
#undef public_637809a
#undef public_63780a1
#undef public_63780c7
#undef public_63780df
#undef public_63780f7
