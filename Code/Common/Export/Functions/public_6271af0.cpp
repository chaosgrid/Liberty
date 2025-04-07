#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6271b00 _public_6271b00
#define public_6271b27 _public_6271b27
#define public_6271b40 _public_6271b40
#define public_6271b55 _public_6271b55
#define public_6271b72 _public_6271b72
#define public_6271b85 _public_6271b85

PROC_DECLARE(0x6271af0, internal_6271af0, public_6271af0);
extern "C" NAKED register_t __cdecl internal_6271af0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6271b27
        mov edi, edi
        public_6271b00 : nop
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
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+8], ecx
        jne public_6271b00
        public_6271b27 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jbe public_6271b85
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        lea ecx, ds:[ecx]
        public_6271b40 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_6271b55
        mov esi, eax
        public_6271b55 : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6271b72
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+4], ecx
        public_6271b72 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        dec eax
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6271b40
        pop ebp
        public_6271b85 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6271af0)
    }
}

#undef public_6271b00
#undef public_6271b27
#undef public_6271b40
#undef public_6271b55
#undef public_6271b72
#undef public_6271b85
