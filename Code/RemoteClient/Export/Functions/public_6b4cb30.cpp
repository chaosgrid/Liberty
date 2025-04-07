#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4cb30);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4cb40 _public_6b4cb40
#define public_6b4cb67 _public_6b4cb67

PROC_DECLARE(0x6b4cb30, internal_6b4cb30, public_6b4cb30);
extern "C" NAKED register_t __cdecl internal_6b4cb30()
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
        je public_6b4cb67
        mov edi, edi
        public_6b4cb40 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6b6a092
        mov ecx, dword ptr ds : [edi+0x28]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x28], ecx
        jne public_6b4cb40
        public_6b4cb67 : nop
        mov eax, dword ptr ds : [edi+0x24]
        push eax
        call public_6b6a092
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0x24], eax
        mov dword ptr ds : [edi+0x28], eax
        mov ecx, edi
        pop edi
        pop esi
        pop ebx
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b4cb30)
    }
}

#undef public_6b4cb40
#undef public_6b4cb67
