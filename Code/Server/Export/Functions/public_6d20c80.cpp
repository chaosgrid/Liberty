#include "Server-PCH.h"


#define public_6d20cf0 _public_6d20cf0
#define public_6d20cf2 _public_6d20cf2
#define public_6d20cfd _public_6d20cfd
#define public_6d20d09 _public_6d20d09
#define public_6d20d26 _public_6d20d26
#define public_6d20d31 _public_6d20d31
#define public_6d20d4e _public_6d20d4e
#define public_6d20d50 _public_6d20d50
#define public_6d20d5b _public_6d20d5b

PROC_DECLARE(0x6d20c80, internal_6d20c80, public_6d20c80);
extern "C" NAKED register_t __cdecl internal_6d20c80()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, 0xFFFFFFFF
        je public_6d20d31
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 5
        mov ecx, dword ptr ds : [eax+edx+4]
        mov ebp, dword ptr ds : [eax+edx]
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x20]
        mov byte ptr ss : [esp+0x14], dl
        mov edx, dword ptr ds : [edi+0x18]
        shl edx, 5
        mov dword ptr ds : [edx+ecx+4], eax
        mov edx, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+4]
        shl edx, 5
        mov byte ptr ds : [edx+ecx+8], 1
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_6d20cfd
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d20cf0 : nop
        je public_6d20d09
        public_6d20cf2 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0xC
        ret 8
        public_6d20cfd : nop
        mov cl, byte ptr ds : [esi+0x1C]
        test cl, cl
        je public_6d20cf2
        cmp dword ptr ds : [esi+8], eax
        jmp public_6d20cf0
        public_6d20d09 : nop
        mov edi, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ss : [esp+0x14]
        shl edi, 5
        add edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ebp
        mov dword ptr ds : [edi+4], ecx
        mov byte ptr ds : [edi+8], dl
        public_6d20d26 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 0xC
        ret 8
        public_6d20d31 : nop
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        je public_6d20d5b
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d20d4e : nop
        je public_6d20d26
        public_6d20d50 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0xC
        ret 8
        public_6d20d5b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d20d50
        mov eax, dword ptr ds : [eax+8]
        cmp eax, dword ptr ss : [esp+0x20]
        jmp public_6d20d4e
        UNREACHABLE_TRAP(0x6d20c80)
    }
}

#undef public_6d20cf0
#undef public_6d20cf2
#undef public_6d20cfd
#undef public_6d20d09
#undef public_6d20d26
#undef public_6d20d31
#undef public_6d20d4e
#undef public_6d20d50
#undef public_6d20d5b
