#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e430);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

#define public_6f4e703 _public_6f4e703
#define public_6f4e72d _public_6f4e72d
#define public_6f4e73f _public_6f4e73f

PROC_DECLARE(0x6f4e6c0, internal_6f4e6c0, public_6f4e6c0);
extern "C" NAKED register_t __cdecl internal_6f4e6c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [ebx+0xC]
        push edi
        push ebx
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6f4e780
        mov edi, eax
        push edi
        mov dword ptr ss : [esp+0x1C], edi
        call public_6f4e5d0
        add esp, 8
        test esi, esi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], 0
        jle public_6f4e73f
        mov dword ptr ss : [esp+0x20], esi
        public_6f4e703 : nop
        cmp dword ptr ss : [ebp+0x10], 0xFFFFFFFA
        je public_6f4e72d
        push ebp
        push ebx
        call public_6f4e430
        mov edi, eax
        mov ecx, 8
        mov esi, ebp
        rep movsd
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc eax
        mov dword ptr ds : [ebx+0x10], eax
        public_6f4e72d : nop
        mov eax, dword ptr ss : [esp+0x20]
        add ebp, 0x20
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        jne public_6f4e703
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f4e73f : nop
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, edi
        cdq 
        and edx, 0xF
        add eax, edx
        mov edi, eax
        mov eax, esi
        mov esi, dword ptr ds : [ecx+0x78]
        cdq 
        and edx, 0xF
        add eax, edx
        sar eax, 4
        sar edi, 4
        sub edi, eax
        push 0
        add esi, edi
        push ebp
        mov dword ptr ds : [ecx+0x78], esi
        call public_6f4fe10
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f4e6c0)
    }
}

#undef public_6f4e703
#undef public_6f4e72d
#undef public_6f4e73f
