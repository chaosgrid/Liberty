#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4de77);
CLANG_FORWARD_PROC_SYMBOL(public_6d4dff7);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e111);

#define public_6d4e1ad _public_6d4e1ad
#define public_6d4e1b7 _public_6d4e1b7
#define public_6d4e1be _public_6d4e1be

PROC_DECLARE(0x6d4e111, internal_6d4e111, public_6d4e111);
extern "C" NAKED register_t __cdecl internal_6d4e111()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x188
        sar dword ptr ss : [ebp+0x10], 2
        sar dword ptr ss : [ebp+0xC], 2
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x1A4]
        mov ecx, dword ptr ds : [ecx+0x18]
        push edi
        mov dword ptr ss : [ebp-4], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        sar esi, 3
        shl ecx, 5
        lea edx, ss:[ebp-0x188]
        shl ebx, 5
        mov edi, esi
        add ecx, 4
        push edx
        shl edi, 5
        add ebx, 4
        push ecx
        inc edi
        inc edi
        push ebx
        mov dword ptr ss : [ebp-8], ecx
        call public_6d4de77
        lea ecx, ss:[ebp-0x88]
        push ecx
        lea ecx, ss:[ebp-0x188]
        push ecx
        push eax
        push dword ptr ss : [ebp-8]
        push edi
        push ebx
        push dword ptr ss : [ebp+8]
        call public_6d4dff7
        shl dword ptr ss : [ebp+0x10], 2
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-4]
        shl esi, 3
        shl esi, 5
        add esi, dword ptr ss : [ebp+0x10]
        shl eax, 2
        add esp, 0x28
        shl esi, 1
        lea edx, ss:[ebp-0x88]
        mov dword ptr ss : [ebp+8], esi
        lea ecx, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp+0xC], 4
        public_6d4e1ad : nop
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp+0x10], 8
        public_6d4e1b7 : nop
        mov eax, dword ptr ds : [ecx]
        push 4
        add eax, ebx
        pop edi
        public_6d4e1be : nop
        movzx si, byte ptr ds : [edx]
        inc esi
        mov word ptr ds : [eax], si
        inc eax
        inc eax
        inc edx
        dec edi
        jne public_6d4e1be
        add ebx, 0x40
        dec dword ptr ss : [ebp+0x10]
        jne public_6d4e1b7
        add ecx, 4
        dec dword ptr ss : [ebp+0xC]
        jne public_6d4e1ad
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4e111)
    }
}

#undef public_6d4e1ad
#undef public_6d4e1b7
#undef public_6d4e1be
