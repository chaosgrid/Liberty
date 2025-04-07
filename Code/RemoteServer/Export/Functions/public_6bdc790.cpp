#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bdc7a8 _public_6bdc7a8
#define public_6bdc7bf _public_6bdc7bf
#define public_6bdc7c8 _public_6bdc7c8
#define public_6bdc7d1 _public_6bdc7d1
#define public_6bdc7e0 _public_6bdc7e0
#define public_6bdc807 _public_6bdc807
#define public_6bdc827 _public_6bdc827

PROC_DECLARE(0x6bdc790, internal_6bdc790, public_6bdc790);
extern "C" NAKED register_t __cdecl internal_6bdc790()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        push esi
        push edi
        je public_6bdc827
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6bdc7d1
        public_6bdc7a8 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_6bdc7c8
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_6bdc7bf
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bdc7bf : nop
        push edi
        call public_6c09aaa
        add esp, 4
        public_6bdc7c8 : nop
        mov eax, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [eax+4]
        jne public_6bdc7a8
        public_6bdc7d1 : nop
        mov edi, dword ptr ds : [ebx]
        test edi, edi
        je public_6bdc827
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6bdc807
        public_6bdc7e0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6bdc7e0
        public_6bdc807 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6c09aaa
        push edi
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi+8], 0
        call public_6c09aaa
        add esp, 8
        public_6bdc827 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6bdc790)
    }
}

#undef public_6bdc7a8
#undef public_6bdc7bf
#undef public_6bdc7c8
#undef public_6bdc7d1
#undef public_6bdc7e0
#undef public_6bdc807
#undef public_6bdc827
