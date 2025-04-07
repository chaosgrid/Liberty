#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630bb78 _public_630bb78
#define public_630bbb4 _public_630bbb4
#define public_630bbc0 _public_630bbc0
#define public_630bbce _public_630bbce
#define public_630bbe0 _public_630bbe0
#define public_630bbf4 _public_630bbf4

PROC_DECLARE(0x630bb30, internal_630bb30, public_630bb30);
extern "C" NAKED register_t __cdecl internal_630bb30()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [esi+0x18], ebp
        mov dword ptr ds : [esi+0x1C], 0x461C4000
        mov dword ptr ds : [esi+0x14], 1
        mov dword ptr ds : [esi+0x30], 0x40A00000
        mov dword ptr ds : [esi+0x2C], ebp
        mov dword ptr ds : [esi+0x34], 0xBF800000
        mov dword ptr ds : [esi+0x38], ebp
        mov dword ptr ds : [esi+0x3C], ebp
        mov ebx, dword ptr ds : [esi+0x24]
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_630bbb4
        public_630bb78 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        push ebp
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+0x28]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x28], ecx
        jne public_630bb78
        public_630bbb4 : nop
        mov edx, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        mov eax, edx
        cmp eax, edx
        je public_630bbce
        public_630bbc0 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_630bbc0
        public_630bbce : nop
        mov dword ptr ds : [esi+0x48], ecx
        mov edx, dword ptr ds : [esi+0x58]
        mov ecx, dword ptr ds : [esi+0x54]
        mov eax, edx
        cmp eax, edx
        je public_630bbf4
        lea ecx, ds:[ecx]
        public_630bbe0 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_630bbe0
        public_630bbf4 : nop
        pop edi
        mov dword ptr ds : [esi+0x58], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x630bb30)
    }
}

#undef public_630bb78
#undef public_630bbb4
#undef public_630bbc0
#undef public_630bbce
#undef public_630bbe0
#undef public_630bbf4
