#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4d40a);

#define public_6d4d467 _public_6d4d467
#define public_6d4d4fc _public_6d4d4fc
#define public_6d4d55b _public_6d4d55b

PROC_DECLARE(0x6d4d40a, internal_6d4d40a, public_6d4d40a);
extern "C" NAKED register_t __cdecl internal_6d4d40a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ebx+0x19C]
        mov edx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [ebx+0x11C]
        mov ebx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ss : [ebp-0x18], edx
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp-0x14], edx
        mov edx, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [eax+0x1C]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp+0x10]
        shl eax, 2
        shr ebx, 1
        mov dword ptr ss : [ebp-0x10], edx
        mov edx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax+edx]
        mov esi, dword ptr ds : [eax+esi]
        mov eax, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [eax]
        je public_6d4d4fc
        mov dword ptr ss : [ebp+0x14], ebx
        public_6d4d467 : nop
        movzx ebx, byte ptr ds : [edx]
        inc edx
        mov dword ptr ss : [ebp-4], edx
        movzx edx, byte ptr ds : [esi]
        inc esi
        shl edx, 2
        mov dword ptr ss : [ebp-8], esi
        mov esi, dword ptr ss : [ebp-0x18]
        mov esi, dword ptr ds : [edx+esi]
        mov dword ptr ss : [ebp+0xC], esi
        mov esi, ebx
        mov ebx, dword ptr ss : [ebp-0xC]
        shl esi, 2
        mov dword ptr ss : [ebp+0x10], esi
        mov esi, dword ptr ds : [esi+ebx]
        mov ebx, dword ptr ss : [ebp-0x10]
        add esi, dword ptr ds : [edx+ebx]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [edx+ebx]
        mov ebx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+0x10], edx
        movzx edx, byte ptr ds : [edi]
        add ebx, edx
        mov bl, byte ptr ds : [ebx+ecx]
        mov byte ptr ds : [eax], bl
        sar esi, 0x10
        lea ebx, ds:[edx+esi]
        mov bl, byte ptr ds : [ebx+ecx]
        mov byte ptr ds : [eax+1], bl
        mov ebx, dword ptr ss : [ebp+0x10]
        add edx, ebx
        mov dl, byte ptr ds : [edx+ecx]
        mov ebx, dword ptr ss : [ebp+0xC]
        mov byte ptr ds : [eax+2], dl
        inc edi
        movzx edx, byte ptr ds : [edi]
        add ebx, edx
        mov bl, byte ptr ds : [ebx+ecx]
        add eax, 3
        add esi, edx
        mov byte ptr ds : [eax], bl
        mov bl, byte ptr ds : [esi+ecx]
        mov esi, dword ptr ss : [ebp+0x10]
        add edx, esi
        mov esi, dword ptr ss : [ebp-8]
        mov byte ptr ds : [eax+1], bl
        mov dl, byte ptr ds : [edx+ecx]
        mov byte ptr ds : [eax+2], dl
        mov edx, dword ptr ss : [ebp-4]
        inc edi
        add eax, 3
        dec dword ptr ss : [ebp+0x14]
        jne public_6d4d467
        public_6d4d4fc : nop
        mov ebx, dword ptr ss : [ebp+8]
        test byte ptr ds : [ebx+0x5C], 1
        je public_6d4d55b
        movzx edx, byte ptr ds : [edx]
        movzx esi, byte ptr ds : [esi]
        movzx edi, byte ptr ds : [edi]
        shl edx, 2
        mov dword ptr ss : [ebp+0x10], edx
        mov ebx, esi
        mov esi, dword ptr ss : [ebp-0xC]
        mov esi, dword ptr ds : [edx+esi]
        mov edx, dword ptr ss : [ebp-0x10]
        shl ebx, 2
        add esi, dword ptr ds : [ebx+edx]
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp+8], ebx
        mov ebx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [edx+ebx]
        mov ebx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp+0x10], edx
        mov edx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [edx+ebx]
        add edx, edi
        mov dl, byte ptr ds : [edx+ecx]
        mov byte ptr ds : [eax], dl
        sar esi, 0x10
        lea edx, ds:[edi+esi]
        mov dl, byte ptr ds : [edx+ecx]
        mov byte ptr ds : [eax+1], dl
        mov edx, dword ptr ss : [ebp+0x10]
        add edi, edx
        mov cl, byte ptr ds : [edi+ecx]
        mov byte ptr ds : [eax+2], cl
        public_6d4d55b : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4d40a)
    }
}

#undef public_6d4d467
#undef public_6d4d4fc
#undef public_6d4d55b
