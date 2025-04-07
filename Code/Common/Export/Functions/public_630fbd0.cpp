#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630fbd0);

#define public_630fbde _public_630fbde
#define public_630fbfd _public_630fbfd
#define public_630fc1b _public_630fc1b
#define public_630fc22 _public_630fc22
#define public_630fc24 _public_630fc24
#define public_630fc40 _public_630fc40

PROC_DECLARE(0x630fbd0, internal_630fbd0, public_630fbd0);
extern "C" NAKED register_t __cdecl internal_630fbd0()
{
    __asm
    {
        push ebp
        push edi
        mov edi, dword ptr ds : [ecx+0x18]
        xor ebp, ebp
        cmp edi, ebp
        je public_630fbde
        mov dword ptr ds : [ecx+0x20], ebp
        public_630fbde : nop
        cmp edi, ebp
        push ebx
        push esi
        mov esi, 0xC
        je public_630fc22
        mov eax, dword ptr ds : [ecx+0x20]
        mov ebx, dword ptr ds : [ecx+0x1C]
        cmp eax, ebx
        jae public_630fc1b
        mov edx, ebx
        sub edx, eax
        cmp edx, esi
        jae public_630fbfd
        mov esi, edx
        public_630fbfd : nop
        lea edx, ds:[eax+edi]
        add eax, esi
        cmp esi, 0xC
        mov dword ptr ds : [ecx+0x20], eax
        jne public_630fc1b
        cmp dword ptr ds : [edx], 0x494E4942
        jne public_630fc1b
        cmp dword ptr ds : [edx+8], ebx
        jae public_630fc1b
        mov eax, edx
        jmp public_630fc24
        public_630fc1b : nop
        cmp edi, ebp
        je public_630fc22
        mov dword ptr ds : [ecx+0x20], ebp
        public_630fc22 : nop
        xor eax, eax
        public_630fc24 : nop
        cmp eax, ebp
        pop esi
        mov dword ptr ds : [ecx+0x24], eax
        pop ebx
        je public_630fc40
        mov edx, dword ptr ds : [eax+8]
        add edx, eax
        pop edi
        mov dword ptr ds : [ecx+0x2C], ebp
        mov dword ptr ds : [ecx+0x34], ebp
        mov dword ptr ds : [ecx+0x28], edx
        mov al, 1
        pop ebp
        ret 
        public_630fc40 : nop
        pop edi
        xor al, al
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x630fbd0)
    }
}

#undef public_630fbde
#undef public_630fbfd
#undef public_630fc1b
#undef public_630fc22
#undef public_630fc24
#undef public_630fc40
