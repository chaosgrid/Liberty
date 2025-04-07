#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348be0);
CLANG_FORWARD_PROC_SYMBOL(public_634aef0);
CLANG_FORWARD_PROC_SYMBOL(public_634b1a0);
CLANG_FORWARD_PROC_SYMBOL(public_634b350);
CLANG_FORWARD_PROC_SYMBOL(public_634b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634b418 _public_634b418
#define public_634b440 _public_634b440
#define public_634b45d _public_634b45d
#define public_634b46d _public_634b46d

PROC_DECLARE(0x634b3e0, internal_634b3e0, public_634b3e0);
extern "C" NAKED register_t __cdecl internal_634b3e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        dec edx
        push edi
        mov dword ptr ds : [esi+0x14], edx
        call public_634aef0
        mov ebx, eax
        test ebx, ebx
        je public_634b418
        mov ecx, dword ptr ds : [esi+8]
        push edi
        call public_634b350
        mov ecx, ebx
        call public_6348be0
        push ebx
        call public_6391d5a
        add esp, 4
        public_634b418 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        call public_634aef0
        mov ebx, eax
        test ebx, ebx
        je public_634b440
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        call public_634b350
        mov ecx, ebx
        call public_6348be0
        push ebx
        call public_6391d5a
        add esp, 4
        public_634b440 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp edi, eax
        jne public_634b45d
        push eax
        mov ecx, esi
        call public_634b1a0
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], eax
        jne public_634b45d
        mov dword ptr ds : [esi+0x10], 0
        public_634b45d : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_634b46d
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+8]
        public_634b46d : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x634b3e0)
    }
}

#undef public_634b418
#undef public_634b440
#undef public_634b45d
#undef public_634b46d
