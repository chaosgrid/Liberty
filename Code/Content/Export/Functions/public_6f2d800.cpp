#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d800);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2d81d _public_6f2d81d
#define public_6f2d821 _public_6f2d821
#define public_6f2d843 _public_6f2d843
#define public_6f2d867 _public_6f2d867
#define public_6f2d8aa _public_6f2d8aa

PROC_DECLARE(0x6f2d800, internal_6f2d800, public_6f2d800);
extern "C" NAKED register_t __cdecl internal_6f2d800()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        cmp ebx, eax
        mov dword ptr ss : [esp+8], ecx
        je public_6f2d8aa
        push ebp
        push esi
        push edi
        jmp public_6f2d821
        public_6f2d81d : nop
        mov ebx, dword ptr ss : [esp+0x24]
        public_6f2d821 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [eax+4], ecx
        mov ebp, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+8]
        je public_6f2d867
        public_6f2d843 : nop
        push esi
        mov dword ptr ss : [esp+0x14], esi
        call public_6f2d8c0
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebp
        jne public_6f2d843
        public_6f2d867 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        xor eax, eax
        push ebx
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 8
        dec ecx
        mov dword ptr ds : [eax+8], ecx
        cmp dword ptr ss : [esp+0x24], edx
        jne public_6f2d81d
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f2d8aa : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ebx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f2d800)
    }
}

#undef public_6f2d81d
#undef public_6f2d821
#undef public_6f2d843
#undef public_6f2d867
#undef public_6f2d8aa
