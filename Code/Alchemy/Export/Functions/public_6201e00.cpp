#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201e00);

#define public_6201e27 _public_6201e27
#define public_6201e41 _public_6201e41
#define public_6201e5b _public_6201e5b
#define public_6201e69 _public_6201e69
#define public_6201e70 _public_6201e70
#define public_6201e7b _public_6201e7b

PROC_DECLARE(0x6201e00, internal_6201e00, public_6201e00);
extern "C" NAKED register_t __cdecl internal_6201e00()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push ebx
        push edi
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x2C]
        test eax, eax
        jne public_6201e27
        mov edx, dword ptr ds : [ebx]
        push edi
        push ebx
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop ebx
        ret 8
        public_6201e27 : nop
        mov eax, dword ptr ds : [edi]
        push ebp
        push esi
        push edi
        call dword ptr ds : [eax+0x38]
        mov ecx, dword ptr ds : [ebx]
        push ebx
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [ecx+0x2C]
        mov esi, eax
        xor ebp, ebp
        test esi, esi
        je public_6201e69
        public_6201e41 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x38]
        cmp eax, dword ptr ss : [esp+0x18]
        jg public_6201e5b
        mov eax, dword ptr ds : [esi]
        push esi
        mov ebp, esi
        call dword ptr ds : [eax+0x34]
        mov esi, eax
        test esi, esi
        jne public_6201e41
        public_6201e5b : nop
        test ebp, ebp
        je public_6201e69
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ebp
        call dword ptr ds : [ecx+0x54]
        jmp public_6201e70
        public_6201e69 : nop
        mov edx, dword ptr ds : [ebx]
        push edi
        push ebx
        call dword ptr ds : [edx+0x4C]
        public_6201e70 : nop
        test esi, esi
        je public_6201e7b
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x50]
        public_6201e7b : nop
        mov ecx, dword ptr ds : [edi]
        push ebp
        push edi
        call dword ptr ds : [ecx+0x50]
        mov edx, dword ptr ds : [edi]
        push esi
        push edi
        call dword ptr ds : [edx+0x54]
        pop esi
        pop ebp
        pop edi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6201e00)
    }
}

#undef public_6201e27
#undef public_6201e41
#undef public_6201e5b
#undef public_6201e69
#undef public_6201e70
#undef public_6201e7b
