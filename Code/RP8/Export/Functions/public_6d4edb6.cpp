#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4edb6);

#define public_6d4ee00 _public_6d4ee00
#define public_6d4ee03 _public_6d4ee03
#define public_6d4ee3c _public_6d4ee3c
#define public_6d4ee3f _public_6d4ee3f
#define public_6d4ee99 _public_6d4ee99
#define public_6d4eeb2 _public_6d4eeb2

PROC_DECLARE(0x6d4edb6, internal_6d4edb6, public_6d4edb6);
extern "C" NAKED register_t __cdecl internal_6d4edb6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x30
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x1A4]
        mov ecx, dword ptr ds : [eax+0x18]
        push esi
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x20], esi
        mov esi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x2C], ecx
        mov ecx, dword ptr ds : [edx+0x5C]
        mov dword ptr ss : [ebp-0x18], ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        test ecx, ecx
        mov dword ptr ss : [ebp-0x24], esi
        jle public_6d4eeb2
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0xC]
        push ebx
        sub edx, esi
        push edi
        mov dword ptr ss : [ebp-8], esi
        mov dword ptr ss : [ebp-0x14], edx
        mov dword ptr ss : [ebp-0x10], ecx
        jmp public_6d4ee03
        public_6d4ee00 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        public_6d4ee03 : nop
        mov esi, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [edx+esi]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [eax+0x30]
        mov esi, dword ptr ds : [eax+0x34]
        mov ebx, dword ptr ds : [eax+0x3C]
        and dword ptr ss : [ebp+8], 0
        mov dword ptr ss : [ebp-0x30], edi
        shl edi, 6
        mov dword ptr ss : [ebp-4], edx
        mov edx, dword ptr ds : [eax+0x38]
        add edx, edi
        add ebx, edi
        add esi, edi
        mov edi, dword ptr ss : [ebp-0x18]
        test edi, edi
        mov dword ptr ss : [ebp-0x1C], edx
        mov dword ptr ss : [ebp-0x28], ebx
        jbe public_6d4ee99
        mov dword ptr ss : [ebp-0xC], edi
        jmp public_6d4ee3f
        public_6d4ee3c : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        public_6d4ee3f : nop
        movzx edi, byte ptr ds : [ecx]
        mov ebx, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [esi+ebx*4]
        add ebx, edi
        mov edi, dword ptr ss : [ebp-0x20]
        movzx edi, byte ptr ds : [ebx+edi]
        mov ebx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [edx+ebx*4]
        mov dword ptr ss : [ebp+0x14], edi
        inc ecx
        movzx edi, byte ptr ds : [ecx]
        add edx, edi
        mov edi, dword ptr ss : [ebp-0x24]
        movzx edx, byte ptr ds : [edx+edi]
        add dword ptr ss : [ebp+0x14], edx
        mov edi, dword ptr ss : [ebp-0x28]
        mov edi, dword ptr ds : [edi+ebx*4]
        inc ecx
        movzx edx, byte ptr ds : [ecx]
        add edi, edx
        mov edx, dword ptr ss : [ebp-0x2C]
        movzx edi, byte ptr ds : [edi+edx]
        mov edx, dword ptr ss : [ebp+0x14]
        add edx, edi
        mov edi, dword ptr ss : [ebp-4]
        mov byte ptr ds : [edi], dl
        inc ecx
        inc dword ptr ss : [ebp-4]
        mov edx, ebx
        inc edx
        and edx, 0xF
        dec dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp+8], edx
        jne public_6d4ee3c
        public_6d4ee99 : nop
        mov ecx, dword ptr ss : [ebp-0x30]
        add dword ptr ss : [ebp-8], 4
        inc ecx
        and ecx, 0xF
        dec dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+0x30], ecx
        jne public_6d4ee00
        pop edi
        pop ebx
        public_6d4eeb2 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4edb6)
    }
}

#undef public_6d4ee00
#undef public_6d4ee03
#undef public_6d4ee3c
#undef public_6d4ee3f
#undef public_6d4ee99
#undef public_6d4eeb2
