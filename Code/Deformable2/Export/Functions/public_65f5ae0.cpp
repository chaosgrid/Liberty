#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f5ae0);

#define public_65f5af5 _public_65f5af5
#define public_65f5b03 _public_65f5b03
#define public_65f5b32 _public_65f5b32
#define public_65f5b41 _public_65f5b41
#define public_65f5b9e _public_65f5b9e
#define public_65f5bb3 _public_65f5bb3

PROC_DECLARE(0x65f5ae0, internal_65f5ae0, public_65f5ae0);
extern "C" NAKED register_t __cdecl internal_65f5ae0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        xor ecx, ecx
        cmp esi, ecx
        jne public_65f5af5
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_65f5af5 : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ecx
        jg public_65f5b03
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_65f5b03 : nop
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [esi+0x1C], ecx
        mov dword ptr ds : [esi+0x18], ecx
        mov dword ptr ds : [esi+0x20], ecx
        cmp dword ptr ds : [ebx+4], ecx
        mov dword ptr ss : [esp+0xC], ecx
        jle public_65f5bb3
        push ebp
        push edi
        xor ebp, ebp
        public_65f5b32 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [eax+ebp+0x10]
        cmp eax, dword ptr ds : [esi+4]
        jae public_65f5b41
        mov dword ptr ds : [esi+4], eax
        public_65f5b41 : nop
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edx+ebp]
        mov edx, dword ptr ds : [eax+8]
        add dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [eax+ebp+4]
        cmp edi, ecx
        je public_65f5b9e
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+4]
        add dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+0x10]
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [edi+0x24]
        add edx, ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [edi+0x40]
        add eax, edx
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ds : [edi+0x44]
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi+0x1C], ecx
        mov ecx, dword ptr ds : [edi+0x48]
        add eax, ecx
        mov dword ptr ds : [esi+0x20], eax
        xor ecx, ecx
        public_65f5b9e : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+4]
        inc eax
        add ebp, 0x34
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], eax
        jl public_65f5b32
        pop edi
        pop ebp
        public_65f5bb3 : nop
        pop esi
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65f5ae0)
    }
}

#undef public_65f5af5
#undef public_65f5b03
#undef public_65f5b32
#undef public_65f5b41
#undef public_65f5b9e
#undef public_65f5bb3
