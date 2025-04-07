#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2dff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c30980);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c309a6 _public_6c309a6
#define public_6c309c8 _public_6c309c8
#define public_6c309d5 _public_6c309d5
#define public_6c309e9 _public_6c309e9

PROC_DECLARE(0x6c30980, internal_6c30980, public_6c30980);
extern "C" NAKED register_t __cdecl internal_6c30980()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6c2e3e0
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+4]
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_6c309e9
        mov eax, dword ptr ds : [esi+0x1C]
        push ebx
        xor ebx, ebx
        cmp word ptr ds : [eax+0x12], bx
        jbe public_6c309d5
        push edi
        public_6c309a6 : nop
        movzx edx, word ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add edx, ebx
        mov eax, dword ptr ds : [ecx+edx*4]
        test eax, eax
        lea edi, ds:[ecx+edx*4]
        je public_6c309c8
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi], 0
        public_6c309c8 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        movzx ecx, word ptr ds : [eax+0x12]
        inc ebx
        cmp ebx, ecx
        jb public_6c309a6
        pop edi
        public_6c309d5 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        pop ebx
        je public_6c309e9
        call public_6c2dff0
        mov dword ptr ds : [esi+0x18], 0
        public_6c309e9 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        push edx
        call public_6c34ea0
        add esp, 4
        mov dword ptr ds : [esi+0x1C], 0
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c30980)
    }
}

#undef public_6c309a6
#undef public_6c309c8
#undef public_6c309d5
#undef public_6c309e9
