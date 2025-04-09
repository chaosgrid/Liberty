#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44b450);
CLANG_FORWARD_PROC_SYMBOL(public_452f70);
CLANG_FORWARD_PROC_SYMBOL(public_452f80);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_44b4b7 _public_44b4b7
#define public_44b4dc _public_44b4dc
#define public_44b4ea _public_44b4ea
#define public_44b4f7 _public_44b4f7
#define public_44b523 _public_44b523
#define public_44b52f _public_44b52f
#define public_44b55e _public_44b55e

PROC_DECLARE(0x44b450, internal_44b450, public_44b450);
extern "C" NAKED register_t __cdecl internal_44b450()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_44b55e
        mov al, byte ptr ds : [esi+0x4FC]
        xor ebx, ebx
        cmp al, bl
        jne public_44b52f
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [eax+0xD8]
        mov dword ptr ds : [esi+0x4EC], ecx
        mov edx, dword ptr ds : [eax+0xDC]
        mov dword ptr ds : [esi+0x4F0], edx
        mov eax, dword ptr ds : [eax+0xE0]
        mov dword ptr ds : [esi+0x4F4], eax
        mov eax, dword ptr ds : [esi+0x2E4]
        xor edx, edx
        cmp eax, ebx
        mov dword ptr ds : [esi+0x4E8], ebx
        jle public_44b4ea
        lea edi, ds:[esi+0xE4]
        public_44b4b7 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_44b4dc
        cmp dword ptr ds : [eax], ebx
        je public_44b4dc
        mov ecx, dword ptr ds : [esi+0x4E8]
        cmp ecx, 0x80
        jge public_44b4dc
        mov dword ptr ds : [esi+ecx*4+0x2E8], eax
        inc dword ptr ds : [esi+0x4E8]
        public_44b4dc : nop
        mov eax, dword ptr ds : [esi+0x2E4]
        inc edx
        add edi, 4
        cmp edx, eax
        jl public_44b4b7
        public_44b4ea : nop
        call public_452f70
        mov ebp, eax
        xor edi, edi
        cmp ebp, ebx
        jle public_44b55e
        public_44b4f7 : nop
        push edi
        call public_452f80
        add esp, 4
        cmp eax, ebx
        je public_44b523
        cmp dword ptr ds : [eax], ebx
        je public_44b523
        mov ecx, dword ptr ds : [esi+0x4E8]
        cmp ecx, 0x80
        jge public_44b523
        mov dword ptr ds : [esi+ecx*4+0x2E8], eax
        inc dword ptr ds : [esi+0x4E8]
        public_44b523 : nop
        inc edi
        cmp edi, ebp
        jl public_44b4f7
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_44b52f : nop
        mov ecx, dword ptr ds : [esi+0x4F8]
        mov dword ptr ds : [esi+0x4EC], ebx
        mov dword ptr ds : [esi+0x4F0], ebx
        mov dword ptr ds : [esi+0x4F4], ebx
        mov edx, dword ptr ds : [esi+ecx*4+0xE4]
        mov dword ptr ds : [esi+0x2E8], edx
        mov dword ptr ds : [esi+0x4E8], 1
        public_44b55e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x44b450)
    }
}

#undef public_44b4b7
#undef public_44b4dc
#undef public_44b4ea
#undef public_44b4f7
#undef public_44b523
#undef public_44b52f
#undef public_44b55e
