#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be7730);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be7740 _public_6be7740
#define public_6be7767 _public_6be7767

PROC_DECLARE(0x6be7730, internal_6be7730, public_6be7730);
extern "C" NAKED register_t __cdecl internal_6be7730()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x24]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6be7767
        mov edi, edi
        public_6be7740 : nop
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
        mov ecx, dword ptr ds : [edi+0x28]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x28], ecx
        jne public_6be7740
        public_6be7767 : nop
        mov eax, dword ptr ds : [edi+0x24]
        push eax
        call public_6c09aaa
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0x24], eax
        mov dword ptr ds : [edi+0x28], eax
        mov ecx, edi
        pop edi
        pop esi
        pop ebx
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be7730)
    }
}

#undef public_6be7740
#undef public_6be7767
