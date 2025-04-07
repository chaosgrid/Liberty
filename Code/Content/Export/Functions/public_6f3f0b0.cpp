#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3f0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f413c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41790);
CLANG_FORWARD_PROC_SYMBOL(public_6f465a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f3f0e0 _public_6f3f0e0
#define public_6f3f0ff _public_6f3f0ff
#define public_6f3f12b _public_6f3f12b
#define public_6f3f130 _public_6f3f130
#define public_6f3f150 _public_6f3f150

PROC_DECLARE(0x6f3f0b0, internal_6f3f0b0, public_6f3f0b0);
extern "C" NAKED register_t __cdecl internal_6f3f0b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_6f3f12b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f3f12b
        cmp ebx, eax
        jne public_6f3f12b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f3f0ff
        lea esp, ss:[esp]
        public_6f3f0e0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f41790
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f3f0e0
        public_6f3f0ff : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_6f3f12b : nop
        cmp ecx, ebx
        je public_6f3f150
        nop 
        public_6f3f130 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f465a0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f413c0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f3f130
        public_6f3f150 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f3f0b0)
    }
}

#undef public_6f3f0e0
#undef public_6f3f0ff
#undef public_6f3f12b
#undef public_6f3f130
#undef public_6f3f150
