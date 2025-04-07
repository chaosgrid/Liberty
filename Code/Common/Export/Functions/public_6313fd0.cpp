#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6317240);
CLANG_FORWARD_PROC_SYMBOL(public_6317730);
CLANG_FORWARD_PROC_SYMBOL(public_63177f0);
CLANG_FORWARD_PROC_SYMBOL(public_6317c90);
CLANG_FORWARD_PROC_SYMBOL(public_6318d60);
CLANG_FORWARD_PROC_SYMBOL(public_6318fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6319c30);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6342a40);

#define public_631404d _public_631404d
#define public_6314052 _public_6314052
#define public_6314073 _public_6314073
#define public_63140c5 _public_63140c5
#define public_63140d0 _public_63140d0
#define public_63140f0 _public_63140f0

PROC_DECLARE(0x6313fd0, internal_6313fd0, public_6313fd0);
extern "C" NAKED register_t __cdecl internal_6313fd0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+4]
        push eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_6317240
        mov eax, dword ptr ds : [edi+0x1C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+0x18]
        push eax
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        call public_6317730
        mov ebx, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [edi+0x3C]
        test ecx, ecx
        mov eax, dword ptr ds : [ebx]
        lea esi, ds:[edi+0x2C]
        mov dword ptr ss : [esp+0xC], eax
        je public_631404d
        mov ecx, eax
        cmp eax, ecx
        jne public_631404d
        mov eax, dword ptr ds : [ebx+4]
        push eax
        mov ecx, esi
        call public_6318d60
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_632c410
        jmp public_6314073
        public_631404d : nop
        cmp eax, ebx
        je public_6314073
        push ebp
        public_6314052 : nop
        lea ecx, ss:[esp+0x10]
        mov ebp, eax
        call public_6319c30
        push ebp
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_63177f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        jne public_6314052
        pop ebp
        public_6314073 : nop
        mov ecx, dword ptr ds : [edi+0x50]
        test ecx, ecx
        lea esi, ds:[edi+0x40]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_63140c5
        mov ecx, eax
        cmp eax, ecx
        jne public_63140c5
        mov edx, dword ptr ds : [edi+4]
        push edx
        mov ecx, esi
        call public_6318fb0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_63140c5 : nop
        cmp eax, edi
        je public_63140f0
        lea esp, ss:[esp]
        public_63140d0 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_6342a40
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6317c90
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_63140d0
        public_63140f0 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6313fd0)
    }
}

#undef public_631404d
#undef public_6314052
#undef public_6314073
#undef public_63140c5
#undef public_63140d0
#undef public_63140f0
