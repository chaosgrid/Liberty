#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);

#define public_6eb63cd _public_6eb63cd
#define public_6eb63f5 _public_6eb63f5
#define public_6eb6415 _public_6eb6415
#define public_6eb6433 _public_6eb6433

PROC_DECLARE(0x6eb63b0, internal_6eb63b0, public_6eb63b0);
extern "C" NAKED register_t __cdecl internal_6eb63b0()
{
    __asm
    {
        push ebx
        push esi
        call public_6ecf670
        mov eax, dword ptr ds : [eax+4]
        add eax, 0x14
        mov esi, dword ptr ss : [esp+0xC]
        je public_6eb63cd
        cmp dword ptr ds : [eax], 1
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x68], al
        public_6eb63cd : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov ebx, eax
        test ebx, ebx
        jl public_6eb63f5
        mov al, byte ptr ds : [esi+0x68]
        test al, al
        jne public_6eb6433
        public_6eb63f5 : nop
        mov ecx, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi+0x30]
        add edi, 0x2C
        cmp eax, 0xFFFFFFFF
        je public_6eb6415
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [edi+4], 0xFFFFFFFF
        public_6eb6415 : nop
        mov al, byte ptr ds : [esi+0x68]
        test al, al
        pop edi
        je public_6eb6433
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov ebx, eax
        public_6eb6433 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x24]
        pop esi
        mov eax, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb63b0)
    }
}

#undef public_6eb63cd
#undef public_6eb63f5
#undef public_6eb6415
#undef public_6eb6433
