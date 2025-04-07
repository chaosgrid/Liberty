#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ec3e);

#define public_6d4ec7f _public_6d4ec7f
#define public_6d4ec8b _public_6d4ec8b
#define public_6d4ecbe _public_6d4ecbe
#define public_6d4ecc9 _public_6d4ecc9

PROC_DECLARE(0x6d4ec3e, internal_6d4ec3e, public_6d4ec3e);
extern "C" NAKED register_t __cdecl internal_6d4ec3e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0x1A4]
        mov eax, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-8], edx
        mov edx, dword ptr ds : [ecx+0x5C]
        mov ecx, dword ptr ss : [ebp+0x14]
        test ecx, ecx
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ss : [ebp-0x10], edx
        jle public_6d4ecc9
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        sub eax, edi
        mov dword ptr ss : [ebp-0x14], eax
        mov dword ptr ss : [ebp+0x14], ecx
        public_6d4ec7f : nop
        test edx, edx
        mov ecx, dword ptr ds : [eax+edi]
        mov esi, dword ptr ds : [edi]
        jbe public_6d4ecbe
        mov dword ptr ss : [ebp+8], edx
        public_6d4ec8b : nop
        movzx eax, byte ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp-4]
        movzx edx, byte ptr ds : [eax+edx]
        mov ebx, dword ptr ss : [ebp-8]
        inc ecx
        movzx eax, byte ptr ds : [ecx]
        movzx eax, byte ptr ds : [eax+ebx]
        mov ebx, dword ptr ss : [ebp-0xC]
        add edx, eax
        inc ecx
        movzx eax, byte ptr ds : [ecx]
        movzx eax, byte ptr ds : [eax+ebx]
        add edx, eax
        inc ecx
        mov byte ptr ds : [esi], dl
        inc esi
        dec dword ptr ss : [ebp+8]
        jne public_6d4ec8b
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-0x14]
        public_6d4ecbe : nop
        add edi, 4
        dec dword ptr ss : [ebp+0x14]
        jne public_6d4ec7f
        pop edi
        pop esi
        pop ebx
        public_6d4ecc9 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4ec3e)
    }
}

#undef public_6d4ec7f
#undef public_6d4ec8b
#undef public_6d4ecbe
#undef public_6d4ecc9
