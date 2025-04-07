#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5660);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd5670 _public_6bd5670
#define public_6bd5697 _public_6bd5697

PROC_DECLARE(0x6bd5660, internal_6bd5660, public_6bd5660);
extern "C" NAKED register_t __cdecl internal_6bd5660()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6bd5697
        mov edi, edi
        public_6bd5670 : nop
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
        jne public_6bd5670
        public_6bd5697 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6c09aaa
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6bd5660)
    }
}

#undef public_6bd5670
#undef public_6bd5697
