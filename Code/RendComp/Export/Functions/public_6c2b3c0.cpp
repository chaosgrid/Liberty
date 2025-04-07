#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2b3c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2c660);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2b3e0 _public_6c2b3e0
#define public_6c2b3f7 _public_6c2b3f7
#define public_6c2b3fd _public_6c2b3fd
#define public_6c2b406 _public_6c2b406
#define public_6c2b42d _public_6c2b42d
#define public_6c2b451 _public_6c2b451
#define public_6c2b465 _public_6c2b465
#define public_6c2b47f _public_6c2b47f

PROC_DECLARE(0x6c2b3c0, internal_6c2b3c0, public_6c2b3c0);
extern "C" NAKED register_t __cdecl internal_6c2b3c0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebp, dword ptr ds : [esi+0x30]
        xor eax, eax
        push edi
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], 0xFFFFFFFF
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6c2b3fd
        nop 
        public_6c2b3e0 : nop
        mov ebx, dword ptr ds : [edi+8]
        test ebx, ebx
        je public_6c2b3f7
        mov ecx, ebx
        call public_6c2c660
        push ebx
        call public_6c34ea0
        add esp, 4
        public_6c2b3f7 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6c2b3e0
        public_6c2b3fd : nop
        mov ebx, dword ptr ds : [esi+0x30]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6c2b42d
        public_6c2b406 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c34ea0
        mov ecx, dword ptr ds : [esi+0x34]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x34], ecx
        jne public_6c2b406
        public_6c2b42d : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        mov edi, dword ptr ds : [public_6c3603c]
        mov dword ptr ds : [esi+0xB4], 0
        je public_6c2b451
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi+0x48], 0
        public_6c2b451 : nop
        mov eax, dword ptr ds : [esi+0x5C]
        test eax, eax
        je public_6c2b465
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi+0x5C], 0
        public_6c2b465 : nop
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        je public_6c2b47f
        push eax
        call edi
        add esp, 4
        mov dword ptr ds : [esi+0x84], 0
        public_6c2b47f : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c2b3c0)
    }
}

#undef public_6c2b3e0
#undef public_6c2b3f7
#undef public_6c2b3fd
#undef public_6c2b406
#undef public_6c2b42d
#undef public_6c2b451
#undef public_6c2b465
#undef public_6c2b47f
