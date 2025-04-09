#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f550);

#define public_44f566 _public_44f566
#define public_44f586 _public_44f586
#define public_44f59d _public_44f59d
#define public_44f5a4 _public_44f5a4
#define public_44f5b0 _public_44f5b0

PROC_DECLARE(0x44f550, internal_44f550, public_44f550);
extern "C" NAKED register_t __cdecl internal_44f550()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0xAC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_44f5b0
        push ebx
        push edi
        xor ebx, ebx
        public_44f566 : nop
        cmp byte ptr ds : [esi+0x24], bl
        je public_44f5a4
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        je public_44f59d
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_44f586
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        jmp public_44f59d
        public_44f586 : nop
        mov edi, dword ptr ds : [esi+0x20]
        cmp edi, ebx
        je public_44f59d
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x60]
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x20], ebx
        public_44f59d : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x24], bl
        public_44f5a4 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+0xAC]
        jne public_44f566
        pop edi
        pop ebx
        public_44f5b0 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x44f550)
    }
}

#undef public_44f566
#undef public_44f586
#undef public_44f59d
#undef public_44f5a4
#undef public_44f5b0
