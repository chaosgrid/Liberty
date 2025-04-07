#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43952);

#define public_6d43988 _public_6d43988
#define public_6d439bb _public_6d439bb
#define public_6d439be _public_6d439be
#define public_6d439dd _public_6d439dd
#define public_6d43a00 _public_6d43a00
#define public_6d43a36 _public_6d43a36
#define public_6d43a4f _public_6d43a4f
#define public_6d43a5b _public_6d43a5b

PROC_DECLARE(0x6d43952, internal_6d43952, public_6d43952);
extern "C" NAKED register_t __cdecl internal_6d43952()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [edi+8]
        cmp cl, 2
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [ebp-8], eax
        jne public_6d439dd
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d439dd
        cmp byte ptr ds : [edi+9], 8
        jne public_6d439dd
        test eax, eax
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], edx
        jbe public_6d439be
        mov dword ptr ss : [ebp-4], eax
        mov ecx, 0xF8
        public_6d43988 : nop
        movzx eax, byte ptr ds : [edx]
        inc edx
        movzx ebx, byte ptr ds : [edx]
        and eax, ecx
        inc edx
        movzx esi, byte ptr ds : [edx]
        shl eax, 5
        and ebx, ecx
        or eax, ebx
        sar esi, 3
        and esi, 0x1F
        shl eax, 2
        or eax, esi
        mov esi, dword ptr ss : [ebp+0x10]
        mov al, byte ptr ds : [eax+esi]
        mov esi, dword ptr ss : [ebp+8]
        inc edx
        inc dword ptr ss : [ebp+8]
        dec dword ptr ss : [ebp-4]
        mov byte ptr ds : [esi], al
        jne public_6d43988
        public_6d439bb : nop
        mov eax, dword ptr ss : [ebp-8]
        public_6d439be : nop
        mov cl, byte ptr ds : [edi+9]
        mov byte ptr ds : [edi+0xB], cl
        movzx ecx, cl
        imul ecx, eax
        add ecx, 7
        shr ecx, 3
        mov byte ptr ds : [edi+8], 3
        mov byte ptr ds : [edi+0xA], 1
        mov dword ptr ds : [edi+4], ecx
        jmp public_6d43a5b
        public_6d439dd : nop
        cmp cl, 6
        jne public_6d43a36
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d43a36
        cmp byte ptr ds : [edi+9], 8
        jne public_6d43a36
        test eax, eax
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], edx
        jbe public_6d439be
        mov dword ptr ss : [ebp-4], eax
        mov ecx, 0xF8
        public_6d43a00 : nop
        movzx eax, byte ptr ds : [edx]
        inc edx
        movzx ebx, byte ptr ds : [edx]
        inc edx
        movzx esi, byte ptr ds : [edx]
        and eax, ecx
        shl eax, 5
        and ebx, ecx
        or eax, ebx
        sar esi, 3
        and esi, 0x1F
        shl eax, 2
        or eax, esi
        mov esi, dword ptr ss : [ebp+0x10]
        mov al, byte ptr ds : [eax+esi]
        mov esi, dword ptr ss : [ebp+8]
        inc edx
        inc edx
        inc dword ptr ss : [ebp+8]
        dec dword ptr ss : [ebp-4]
        mov byte ptr ds : [esi], al
        jne public_6d43a00
        jmp public_6d439bb
        public_6d43a36 : nop
        cmp cl, 3
        jne public_6d43a5b
        mov esi, dword ptr ss : [ebp+0x14]
        test esi, esi
        je public_6d43a5b
        cmp byte ptr ds : [edi+9], 8
        jne public_6d43a5b
        test eax, eax
        mov ecx, dword ptr ss : [ebp+0xC]
        jbe public_6d43a5b
        public_6d43a4f : nop
        movzx edx, byte ptr ds : [ecx]
        mov dl, byte ptr ds : [edx+esi]
        mov byte ptr ds : [ecx], dl
        inc ecx
        dec eax
        jne public_6d43a4f
        public_6d43a5b : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d43952)
    }
}

#undef public_6d43988
#undef public_6d439bb
#undef public_6d439be
#undef public_6d439dd
#undef public_6d43a00
#undef public_6d43a36
#undef public_6d43a4f
#undef public_6d43a5b
