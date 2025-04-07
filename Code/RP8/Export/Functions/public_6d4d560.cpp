#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4d560);

#define public_6d4d5cb _public_6d4d5cb
#define public_6d4d6be _public_6d4d6be
#define public_6d4d741 _public_6d4d741

PROC_DECLARE(0x6d4d560, internal_6d4d560, public_6d4d560);
extern "C" NAKED register_t __cdecl internal_6d4d560()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ebx+0x19C]
        mov edx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [ebx+0x11C]
        mov ebx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ss : [ebp-0x14], edx
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ss : [ebp-0x20], edx
        mov edx, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0x1C]
        push esi
        mov esi, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0x1C], edx
        mov dword ptr ss : [ebp-0x18], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx]
        lea edx, ds:[edx+esi*8]
        push edi
        mov edi, dword ptr ds : [edx]
        mov edx, dword ptr ds : [edx+4]
        shl esi, 2
        shr ebx, 1
        mov dword ptr ss : [ebp+0x10], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+edx]
        mov dword ptr ss : [ebp+0xC], edi
        mov edi, dword ptr ds : [esi+ecx]
        mov esi, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [esi]
        mov esi, dword ptr ds : [esi+4]
        je public_6d4d6be
        mov dword ptr ss : [ebp-8], ebx
        public_6d4d5cb : nop
        movzx ebx, byte ptr ds : [edx]
        inc edx
        mov dword ptr ss : [ebp-0xC], edx
        movzx edx, byte ptr ds : [edi]
        shl edx, 2
        inc edi
        mov dword ptr ss : [ebp-0x10], edi
        mov edi, dword ptr ss : [ebp-0x14]
        mov edi, dword ptr ds : [edx+edi]
        mov dword ptr ss : [ebp+0x14], edi
        mov edi, ebx
        mov ebx, dword ptr ss : [ebp-0x18]
        shl edi, 2
        mov dword ptr ss : [ebp-4], edi
        mov edi, dword ptr ds : [edi+ebx]
        mov ebx, dword ptr ss : [ebp-0x1C]
        add edi, dword ptr ds : [edx+ebx]
        mov edx, dword ptr ss : [ebp-4]
        mov ebx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [edx+ebx]
        mov ebx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp-4], edx
        mov edx, dword ptr ss : [ebp+0xC]
        movzx edx, byte ptr ds : [edx]
        add ebx, edx
        mov bl, byte ptr ds : [ebx+eax]
        mov byte ptr ds : [ecx], bl
        sar edi, 0x10
        inc dword ptr ss : [ebp+0xC]
        lea ebx, ds:[edx+edi]
        mov bl, byte ptr ds : [ebx+eax]
        mov byte ptr ds : [ecx+1], bl
        mov ebx, dword ptr ss : [ebp-4]
        add edx, ebx
        mov dl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [ecx+2], dl
        mov edx, dword ptr ss : [ebp+0xC]
        movzx edx, byte ptr ds : [edx]
        mov ebx, dword ptr ss : [ebp+0x14]
        add ebx, edx
        mov bl, byte ptr ds : [ebx+eax]
        add ecx, 3
        mov byte ptr ds : [ecx], bl
        lea ebx, ds:[edx+edi]
        mov bl, byte ptr ds : [ebx+eax]
        mov byte ptr ds : [ecx+1], bl
        mov ebx, dword ptr ss : [ebp-4]
        add edx, ebx
        mov dl, byte ptr ds : [edx+eax]
        mov ebx, dword ptr ss : [ebp+0x14]
        mov byte ptr ds : [ecx+2], dl
        mov edx, dword ptr ss : [ebp+0x10]
        movzx edx, byte ptr ds : [edx]
        inc dword ptr ss : [ebp+0xC]
        add ebx, edx
        mov bl, byte ptr ds : [ebx+eax]
        mov byte ptr ds : [esi], bl
        lea ebx, ds:[edx+edi]
        mov bl, byte ptr ds : [ebx+eax]
        mov byte ptr ds : [esi+1], bl
        mov ebx, dword ptr ss : [ebp-4]
        add edx, ebx
        mov dl, byte ptr ds : [edx+eax]
        mov ebx, dword ptr ss : [ebp+0x14]
        mov byte ptr ds : [esi+2], dl
        add ecx, 3
        inc dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x10]
        movzx edx, byte ptr ds : [edx]
        add ebx, edx
        mov bl, byte ptr ds : [ebx+eax]
        add esi, 3
        inc dword ptr ss : [ebp+0x10]
        add edi, edx
        mov byte ptr ds : [esi], bl
        mov bl, byte ptr ds : [edi+eax]
        mov edi, dword ptr ss : [ebp-4]
        add edx, edi
        mov byte ptr ds : [esi+1], bl
        mov dl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [esi+2], dl
        mov edi, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0xC]
        add esi, 3
        dec dword ptr ss : [ebp-8]
        jne public_6d4d5cb
        public_6d4d6be : nop
        mov ebx, dword ptr ss : [ebp+8]
        test byte ptr ds : [ebx+0x5C], 1
        je public_6d4d741
        movzx ebx, byte ptr ds : [edx]
        movzx edx, byte ptr ds : [edi]
        mov edi, dword ptr ss : [ebp-0x14]
        shl edx, 2
        mov edi, dword ptr ds : [edx+edi]
        mov dword ptr ss : [ebp+0x14], edi
        mov edi, ebx
        mov ebx, dword ptr ss : [ebp-0x18]
        shl edi, 2
        mov dword ptr ss : [ebp-4], edi
        mov edi, dword ptr ds : [edi+ebx]
        mov ebx, dword ptr ss : [ebp-0x1C]
        add edi, dword ptr ds : [edx+ebx]
        mov edx, dword ptr ss : [ebp-4]
        mov ebx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [edx+ebx]
        mov ebx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp-4], edx
        mov edx, dword ptr ss : [ebp+0xC]
        movzx edx, byte ptr ds : [edx]
        add ebx, edx
        mov bl, byte ptr ds : [ebx+eax]
        mov byte ptr ds : [ecx], bl
        sar edi, 0x10
        lea ebx, ds:[edx+edi]
        mov bl, byte ptr ds : [ebx+eax]
        mov byte ptr ds : [ecx+1], bl
        mov ebx, dword ptr ss : [ebp-4]
        add edx, ebx
        mov dl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [ecx+2], dl
        mov ecx, dword ptr ss : [ebp+0x10]
        movzx ecx, byte ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp+0x14]
        add edx, ecx
        mov dl, byte ptr ds : [edx+eax]
        mov byte ptr ds : [esi], dl
        lea edx, ds:[ecx+edi]
        mov dl, byte ptr ds : [edx+eax]
        add ecx, ebx
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ds : [ecx+eax]
        mov byte ptr ds : [esi+2], al
        public_6d4d741 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4d560)
    }
}

#undef public_6d4d5cb
#undef public_6d4d6be
#undef public_6d4d741
