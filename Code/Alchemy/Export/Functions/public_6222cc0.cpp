#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221510);
CLANG_FORWARD_PROC_SYMBOL(public_6221fc0);
CLANG_FORWARD_PROC_SYMBOL(public_62220b0);
CLANG_FORWARD_PROC_SYMBOL(public_6222cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6222ccf _public_6222ccf
#define public_6222ce0 _public_6222ce0
#define public_6222d1d _public_6222d1d
#define public_6222d22 _public_6222d22
#define public_6222d43 _public_6222d43

PROC_DECLARE(0x6222cc0, internal_6222cc0, public_6222cc0);
extern "C" NAKED register_t __cdecl internal_6222cc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        sub esp, 8
        push ebp
        xor ebp, ebp
        push esi
        cmp eax, ebp
        push edi
        je public_6222ce0
        public_6222ccf : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x18], edx
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebp
        mov eax, dword ptr ds : [ecx+0x18]
        cmp eax, ebp
        jne public_6222ccf
        public_6222ce0 : nop
        lea esi, ds:[ecx+4]
        mov dword ptr ds : [ecx+0x18], ebp
        mov dword ptr ds : [ecx+0x1C], ebp
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_6222d1d
        mov eax, dword ptr ds : [edi+4]
        mov ecx, esi
        push eax
        call public_6221fc0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6222d43
        public_6222d1d : nop
        cmp eax, edi
        je public_6222d43
        push ebx
        public_6222d22 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_62220b0
        lea eax, ss:[esp+0x14]
        push ebx
        push eax
        mov ecx, esi
        call public_6221510
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6222d22
        pop ebx
        public_6222d43 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_62460e0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebp
        push edx
        mov dword ptr ds : [esi+0x10], ebp
        call public_62460e0
        add esp, 8
        mov dword ptr ds : [esi+8], ebp
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6222cc0)
    }
}

#undef public_6222ccf
#undef public_6222ce0
#undef public_6222d1d
#undef public_6222d22
#undef public_6222d43
