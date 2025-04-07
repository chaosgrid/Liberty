#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6336dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6340460);
CLANG_FORWARD_PROC_SYMBOL(public_63408b0);
CLANG_FORWARD_PROC_SYMBOL(public_6340e10);
CLANG_FORWARD_PROC_SYMBOL(public_63415b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6336df0 _public_6336df0
#define public_6336e18 _public_6336e18
#define public_6336e3d _public_6336e3d
#define public_6336e41 _public_6336e41
#define public_6336e61 _public_6336e61

PROC_DECLARE(0x6336dc0, internal_6336dc0, public_6336dc0);
extern "C" NAKED register_t __cdecl internal_6336dc0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6336e3d
        mov ecx, eax
        cmp eax, ecx
        jne public_6336e3d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6336e18
        nop 
        lea esp, ss:[esp]
        public_6336df0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_63408b0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_63415b0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6336df0
        public_6336e18 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_632c410
        jmp public_6336e61
        public_6336e3d : nop
        cmp eax, edi
        je public_6336e61
        public_6336e41 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6340e10
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6340460
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6336e41
        public_6336e61 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6336dc0)
    }
}

#undef public_6336df0
#undef public_6336e18
#undef public_6336e3d
#undef public_6336e41
#undef public_6336e61
