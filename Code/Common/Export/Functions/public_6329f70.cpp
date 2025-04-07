#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329f70);

#define public_6329f90 _public_6329f90
#define public_6329fc2 _public_6329fc2
#define public_6329fc6 _public_6329fc6
#define public_632a005 _public_632a005

PROC_DECLARE(0x6329f70, internal_6329f70, public_6329f70);
extern "C" NAKED register_t __cdecl internal_6329f70()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        push esi
        mov dword ptr ss : [esp+0xC], 0
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_6329fc2
        mov ebx, dword ptr ss : [esp+0x1C]
        lea esp, ss:[esp]
        public_6329f90 : nop
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        cmp ebx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        jl public_632a005
        mov eax, dword ptr ss : [esp+0x18]
        push 0
        push eax
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp+4]
        sub ebx, ecx
        cmp esi, eax
        jne public_6329f90
        public_6329fc2 : nop
        mov esi, dword ptr ss : [esp+0x18]
        public_6329fc6 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], ecx
        fild dword ptr ss : [esp+0x18]
        mov ecx, esi
        fstp dword ptr ds : [edx]
        fild dword ptr ds : [esi+0x2C]
        fstp dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        fstp dword ptr ds : [eax]
        mov al, 1
        pop ebx
        pop ecx
        ret 0x14
        public_632a005 : nop
        mov esi, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        push ebx
        call dword ptr ds : [edx+0x14]
        jmp public_6329fc6
        UNREACHABLE_TRAP(0x6329f70)
    }
}

#undef public_6329f90
#undef public_6329fc2
#undef public_6329fc6
#undef public_632a005
