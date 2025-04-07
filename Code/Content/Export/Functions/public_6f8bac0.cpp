#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f8af40);

#define public_6f8baf0 _public_6f8baf0
#define public_6f8bb56 _public_6f8bb56
#define public_6f8bb63 _public_6f8bb63

PROC_DECLARE(0x6f8bac0, internal_6f8bac0, public_6f8bac0);
extern "C" NAKED register_t __cdecl internal_6f8bac0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x24]
        push eax
        mov edi, ecx
        call public_6f49b00
        mov edx, dword ptr ds : [edi]
        add esp, 4
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x54]
        mov ebx, dword ptr ds : [edi+0x7C]
        cmp ebx, dword ptr ds : [edi+0x80]
        je public_6f8bb63
        lea esp, ss:[esp]
        public_6f8baf0 : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        cmp eax, 3
        jne public_6f8bb56
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [edi+0x88]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x74]
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+4], ebp
        mov ebp, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+8], ebp
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        lea eax, ds:[esi+0x5C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0x34]
        push ecx
        mov ecx, edi
        call public_6f8af40
        public_6f8bb56 : nop
        mov eax, dword ptr ds : [edi+0x80]
        add ebx, 4
        cmp ebx, eax
        jne public_6f8baf0
        public_6f8bb63 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x40]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f8bac0)
    }
}

#undef public_6f8baf0
#undef public_6f8bb56
#undef public_6f8bb63
