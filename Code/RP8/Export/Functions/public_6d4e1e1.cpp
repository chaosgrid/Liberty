#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4e111);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e1e1);

#define public_6d4e21b _public_6d4e21b
#define public_6d4e22d _public_6d4e22d
#define public_6d4e265 _public_6d4e265
#define public_6d4e27c _public_6d4e27c
#define public_6d4e288 _public_6d4e288

PROC_DECLARE(0x6d4e1e1, internal_6d4e1e1, public_6d4e1e1);
extern "C" NAKED register_t __cdecl internal_6d4e1e1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x1A4]
        mov ecx, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [ebp+0x14]
        test edx, edx
        mov dword ptr ss : [ebp-0x10], ecx
        mov ecx, dword ptr ds : [eax+0x5C]
        mov dword ptr ss : [ebp-0x14], ecx
        jle public_6d4e288
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x10]
        sub eax, esi
        push edi
        mov dword ptr ss : [ebp-4], esi
        mov dword ptr ss : [ebp-0x18], eax
        mov dword ptr ss : [ebp-0xC], edx
        public_6d4e21b : nop
        test ecx, ecx
        mov edx, dword ptr ss : [ebp-4]
        mov esi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ss : [ebp+0x14], edx
        jbe public_6d4e27c
        mov dword ptr ss : [ebp-8], ecx
        public_6d4e22d : nop
        movzx ecx, byte ptr ds : [esi]
        mov ebx, dword ptr ss : [ebp-0x10]
        shr ecx, 3
        mov ebx, dword ptr ds : [ebx+ecx*4]
        inc esi
        movzx eax, byte ptr ds : [esi]
        shr eax, 2
        inc esi
        movzx edx, byte ptr ds : [esi]
        shr edx, 3
        mov edi, eax
        shl edi, 5
        add edi, edx
        lea edi, ds:[ebx+edi*2]
        inc esi
        cmp word ptr ds : [edi], 0
        jne public_6d4e265
        push edx
        push ecx
        push dword ptr ss : [ebp+8]
        call public_6d4e111
        add esp, 0xC
        public_6d4e265 : nop
        mov al, byte ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+0x14]
        dec al
        inc dword ptr ss : [ebp+0x14]
        dec dword ptr ss : [ebp-8]
        mov byte ptr ds : [ecx], al
        jne public_6d4e22d
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x18]
        public_6d4e27c : nop
        add dword ptr ss : [ebp-4], 4
        dec dword ptr ss : [ebp-0xC]
        jne public_6d4e21b
        pop edi
        pop esi
        pop ebx
        public_6d4e288 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4e1e1)
    }
}

#undef public_6d4e21b
#undef public_6d4e22d
#undef public_6d4e265
#undef public_6d4e27c
#undef public_6d4e288
