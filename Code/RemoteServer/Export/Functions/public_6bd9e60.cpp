#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd9e60);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd9e71 _public_6bd9e71
#define public_6bd9e98 _public_6bd9e98

PROC_DECLARE(0x6bd9e60, internal_6bd9e60, public_6bd9e60);
extern "C" NAKED register_t __cdecl internal_6bd9e60()
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
        je public_6bd9e98
        public_6bd9e71 : nop
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
        jne public_6bd9e71
        public_6bd9e98 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bd9e60)
    }
}

#undef public_6bd9e71
#undef public_6bd9e98
