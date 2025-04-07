#include "Server-PCH.h"


#define public_6d2324c _public_6d2324c
#define public_6d23292 _public_6d23292
#define public_6d2329c _public_6d2329c
#define public_6d232a8 _public_6d232a8

PROC_DECLARE(0x6d231c0, internal_6d231c0, public_6d231c0);
extern "C" NAKED register_t __cdecl internal_6d231c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        shl ecx, 5
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [eax+ecx+0x1C]
        add eax, ecx
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x10], edx
        xor edx, edx
        mov dword ptr ds : [eax+0x18], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax+4]
        shl ecx, 5
        mov dword ptr ds : [ecx+eax+0x1C], ebp
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ecx+4]
        shl eax, 5
        mov dword ptr ds : [eax+ecx+0x10], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [esi+0xC]
        shl ecx, 5
        cmp ebx, dword ptr ds : [ecx+eax+0x10]
        ja public_6d2324c
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edx
        je public_6d23292
        mov edx, dword ptr ds : [ecx]
        push ebp
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d2329c
        public_6d2324c : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        mov edx, dword ptr ds : [ecx+eax+0x10]
        lea eax, ds:[ecx+eax+0x10]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, edx
        jbe public_6d232a8
        mov ecx, edx
        inc ecx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push edi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_6d2329c
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edx+4]
        shl ecx, 5
        lea eax, ds:[ecx+eax+0x10]
        dec dword ptr ds : [eax]
        jmp public_6d232a8
        public_6d23292 : nop
        cmp byte ptr ds : [edi+0x1C], dl
        je public_6d2329c
        cmp dword ptr ds : [edi+8], ebp
        je public_6d2324c
        public_6d2329c : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d232a8 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x1C]
        shl edx, 5
        mov dword ptr ds : [edx+ecx+0x10], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x10]
        shl edx, 5
        mov dword ptr ds : [edx+ecx+0x1C], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        shl edx, 5
        pop ebp
        mov dword ptr ds : [edx+ecx+0x18], eax
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d231c0)
    }
}

#undef public_6d2324c
#undef public_6d23292
#undef public_6d2329c
#undef public_6d232a8
