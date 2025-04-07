#include "Server-PCH.h"


#define public_6d22c0c _public_6d22c0c
#define public_6d22c0e _public_6d22c0e
#define public_6d22c10 _public_6d22c10
#define public_6d22c1b _public_6d22c1b
#define public_6d22c57 _public_6d22c57
#define public_6d22c63 _public_6d22c63

PROC_DECLARE(0x6d22b80, internal_6d22b80, public_6d22b80);
extern "C" NAKED register_t __cdecl internal_6d22b80()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        shl ecx, 5
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [eax+ecx+0x1C]
        add eax, ecx
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0x18], 0
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 5
        mov dword ptr ds : [eax+edx+0x1C], ebp
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        mov dword ptr ds : [ecx+eax+0x10], 0
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        shl edx, 5
        lea eax, ds:[edx+ecx+0x10]
        mov edx, dword ptr ds : [esi+0x10]
        cmp edx, dword ptr ds : [eax]
        jne public_6d22c1b
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d22c57
        mov eax, dword ptr ds : [ecx]
        push ebp
        push edi
        call dword ptr ds : [eax+4]
        public_6d22c0c : nop
        test al, al
        public_6d22c0e : nop
        je public_6d22c63
        public_6d22c10 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 8
        ret 8
        public_6d22c1b : nop
        inc dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push edi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_6d22c10
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        lea eax, ds:[ecx+eax+0x10]
        mov ecx, dword ptr ds : [eax]
        dec ecx
        mov dword ptr ds : [eax], ecx
        cmp ecx, dword ptr ds : [esi+0xC]
        jb public_6d22c63
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d22c57
        mov edx, dword ptr ds : [ecx]
        push ebp
        push edi
        call dword ptr ds : [edx+4]
        jmp public_6d22c0c
        public_6d22c57 : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d22c10
        cmp dword ptr ds : [edi+8], ebp
        jmp public_6d22c0e
        public_6d22c63 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [esp+0x18]
        shl ecx, 5
        mov dword ptr ds : [ecx+eax+0x10], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [esp+0xC]
        shl ecx, 5
        mov dword ptr ds : [ecx+eax+0x1C], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        shl ecx, 5
        pop esi
        mov dword ptr ds : [ecx+eax+0x18], edx
        xor al, al
        pop ebp
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d22b80)
    }
}

#undef public_6d22c0c
#undef public_6d22c0e
#undef public_6d22c10
#undef public_6d22c1b
#undef public_6d22c57
#undef public_6d22c63
